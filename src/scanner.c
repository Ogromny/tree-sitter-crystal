#include "./state.h"
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    CHAR,
    STRING_CONTENT,
    STRING_ESCAPE,
    STRING_INTERPOLATION_START,
    STRING_INTERPOLATION_END,
    // STRING_PERCENT_START,
    // STRING_PERCENT_END,
};

#define DEBUG(...)                                              \
    if (getenv("DEBUG") && !strncmp(getenv("DEBUG"), "1", 1)) { \
        printf(__VA_ARGS__);                                    \
        fflush(stdout);                                         \
    }

#define ARRAY_SIZE(a)      (sizeof(a) / sizeof(*a))
#define CONSUME_CHAR       (lexer->advance(lexer, false))
#define CONSUME_WHITESPACE (lexer->advance(lexer, true))
#define CURRENT_CHAR       (lexer->lookahead)
#define IS_WHITESPACE      (iswspace(CURRENT_CHAR))

int char_hex_to_hex(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }

    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }

    return -1;
}

int char_oct_to_oct(char c)
{
    if (c >= '0' && c <= '7') {
        return c - '0';
    }

    return -1;
}

bool handle_string_hexadecimal(TSLexer *lexer)
{
    int chars = 0;
    uint64_t sum = 0;

    for (; iswxdigit(CURRENT_CHAR); ++chars, CONSUME_CHAR) {
        sum = sum * 0x10 + char_hex_to_hex(CURRENT_CHAR);
    }

    return (sum <= 0xFF && chars == 2);
}

bool handle_string_octal(TSLexer *lexer)
{
    int chars = 0;
    uint64_t sum = 0;

    for (; CURRENT_CHAR >= '0' && CURRENT_CHAR <= '7'; ++chars, CONSUME_CHAR) {
        sum = sum * 010 + char_oct_to_oct(CURRENT_CHAR);
    }

    return (sum <= 0777 && chars < 4);
}

bool handle_char_unicode(TSLexer *lexer, bool string)
{
    bool between_brace = (CURRENT_CHAR == '{');
    if (between_brace) {
        CONSUME_CHAR;
    }

    int chars;
    uint64_t sum; // NOTE: can overflow
check:
    for (chars = 0, sum = 0; iswxdigit(CURRENT_CHAR); ++chars, CONSUME_CHAR) {
        sum = sum * 0x10 + char_hex_to_hex(CURRENT_CHAR);
    }

    if (between_brace) {
        if (!chars || chars > 6 || sum > 0x10FFFF) {
            return false;
        }

        DEBUG("unicode segment valid\n");
        // NOTE: cannot have leading whitespace
        if (!IS_WHITESPACE && CURRENT_CHAR == '}') {
            CONSUME_CHAR;
            return true;
        }

        while (IS_WHITESPACE) {
            CONSUME_WHITESPACE;
        }

        DEBUG("spaced\n");
        goto check;
    }

    return (chars == 4);
}

bool handle_char_escape(TSLexer *lexer, bool string)
{
    if (string) {
        if (CURRENT_CHAR >= '0' && CURRENT_CHAR <= '7') {
            return handle_string_octal(lexer);
        }

        if (CURRENT_CHAR == 'x') {
            CONSUME_CHAR;
            return handle_string_hexadecimal(lexer);
        }

        // NOTE: multiline in "" via backslash
    }

    if (CURRENT_CHAR == 'u') {
        CONSUME_CHAR;
        return handle_char_unicode(lexer, string);
    }

    // NOTE: self escape
    if (CURRENT_CHAR == (string ? '"' : '\'')) {
        CONSUME_CHAR;
        return true;
    }

    static int escapables[] = {'\\', 'a', 'b', 'e', 'f', 'n', 'r', 't', 'v'};
    for (int i = 0, j = ARRAY_SIZE(escapables); i < j; ++i) {
        if (CURRENT_CHAR != escapables[i]) {
            continue;
        }

        CONSUME_CHAR;
        return true;
    }

    return false;
}

void *tree_sitter_crystal_external_scanner_create(void) { return state_new(); }

void tree_sitter_crystal_external_scanner_destroy(void *payload)
{
    state_destroy((State *)payload);
}

unsigned tree_sitter_crystal_external_scanner_serialize(void *payload,
                                                        char *buffer)
{
    return state_serialize((State *)payload, buffer);
}

void tree_sitter_crystal_external_scanner_deserialize(void *payload,
                                                      char const *buffer,
                                                      unsigned length)
{
    state_deserialize((State *)payload, buffer, length);
}

bool tree_sitter_crystal_external_scanner_scan(void *payload, TSLexer *lexer,
                                               bool const *valid_symbols)
{
    while (IS_WHITESPACE) {
        CONSUME_WHITESPACE;
    }

    State *state = (State *)payload;

    if (valid_symbols[CHAR] && CURRENT_CHAR == '\'') {
        CONSUME_CHAR;

        if (CURRENT_CHAR == '\\') {
            CONSUME_CHAR;
            if (!handle_char_escape(lexer, false)) {
                return false;
            }
        } else {
            CONSUME_CHAR;
        }

        if (CURRENT_CHAR != '\'') {
            return false;
        }

        CONSUME_CHAR;
        lexer->result_symbol = CHAR;
        return true;
    }

    if (valid_symbols[STRING_INTERPOLATION_END] && CURRENT_CHAR == '}') {
        CONSUME_CHAR;
        lexer->result_symbol = STRING_INTERPOLATION_END;
        return true;
    }

    if (valid_symbols[STRING_CONTENT] || STRING_ESCAPE ||
        STRING_INTERPOLATION_START) {
        if (CURRENT_CHAR == '\\') {
            CONSUME_CHAR;

            if (valid_symbols[STRING_INTERPOLATION_START] &&
                CURRENT_CHAR == '#') {
                CONSUME_CHAR;

                if (CURRENT_CHAR != '{') {
                    return false;
                }

                CONSUME_CHAR;
                lexer->result_symbol = STRING_INTERPOLATION_START;
                return true;
            }

            if (valid_symbols[STRING_ESCAPE]) {
                if (!handle_char_escape(lexer, true)) {
                    return false;
                }

                lexer->result_symbol = STRING_ESCAPE;
                return true;
            }
        }

        if (valid_symbols[STRING_CONTENT]) {
            int chars = 0;

            for (;; ++chars, CONSUME_CHAR) {
                if (lexer->eof(lexer)) {
                    return false;
                }

                if (CURRENT_CHAR == '"') {
                    if (chars) {
                        break;
                    }

                    return false;
                }
            }

            lexer->result_symbol = STRING_CONTENT;
            return true;
        }
    }

    // if (valid_symbols[STRING_PERCENT_START] && lexer->lookahead == '%' &&
    //     !state->string_percent) {
    //     lexer->advance(lexer, false);

    //     if (lexer->lookahead == 'Q' || lexer->lookahead == 'q') {
    //         lexer->advance(lexer, false);
    //     }

    //     char seq[] = {'(', '[', '{', '<', '|'};
    //     char qes[] = {')', ']', '}', '>', '|'};
    //     char s = 0;
    //     char q = 0;

    //     for (int i = 0, j = sizeof(seq) / sizeof(*seq); i < j; ++i) {
    //         if (lexer->lookahead == seq[i]) {
    //             s = seq[i];
    //             q = qes[i];
    //             break;
    //         }
    //     }

    //     if (!s) {
    //         // TTODO: string_content goto ?
    //         return false;
    //     }

    //     state->string_percent = malloc(sizeof(StringPercent));
    //     state->string_percent->depth = 1;
    //     state->string_percent->start = s;
    //     state->string_percent->end = q;

    //     lexer->advance(lexer, false);
    //     lexer->result_symbol = STRING_PERCENT_START;
    //     return true;
    // }

    // if (valid_symbols[STRING_PERCENT_END] && state->string_percent &&
    //     lexer->lookahead == state->string_percent->end) {
    //     if (--(state->string_percent->depth)) {
    //         return false;
    //     }

    //     free(state->string_percent);
    //     state->string_percent = NULL;

    //     lexer->advance(lexer, false);
    //     lexer->result_symbol = STRING_PERCENT_END;
    //     return true;
    // }

    // string_content:
    // if (valid_symbols[STRING_CONTENT]) {
    //     int characters = 0;

    //     while (true) {
    //         if (lexer->eof(lexer)) {
    //             return false;
    //         }

    //         if (state->string_percent) {
    //             StringPercent *sp = state->string_percent;

    //             if (lexer->lookahead == sp->end) {
    //                 if (sp->depth == 1) {
    //                     break;
    //                 }

    //                 --(sp->depth);
    //             } else if (lexer->lookahead == sp->start) {
    //                 ++(sp->depth);
    //             }
    //         } else if (lexer->lookahead == '"') {
    //             if (characters) {
    //                 break;
    //             }

    //             // NOTE: empty string
    //             return false;
    //         }

    //         if (lexer->lookahead == '\\') {
    //             break;
    //         }

    //         lexer->advance(lexer, false);
    //         ++characters;
    //     }

    //     lexer->result_symbol = STRING_CONTENT;
    //     return true;
    // }

    return false;
}
