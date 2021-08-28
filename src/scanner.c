#include "./state.h"
#include "utils.h"
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
    STRING_PERCENT_START,
    STRING_PERCENT_END,
    STRING_HEREDOC_START,
    STRING_HEREDOC_IDENT,
    STRING_HEREDOC_CONTENT,
    STRING_HEREDOC_END,
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

#define EXPECT_STRING                                                 \
    (valid_symbols[STRING_INTERPOLATION_START] ||                     \
     valid_symbols[STRING_ESCAPE] || valid_symbols[STRING_CONTENT] || \
     valid_symbols[STRING_PERCENT_START] ||                           \
     valid_symbols[STRING_PERCENT_END] ||                             \
     valid_symbols[STRING_HEREDOC_START] ||                           \
     valid_symbols[STRING_HEREDOC_IDENT] ||                           \
     valid_symbols[STRING_HEREDOC_CONTENT] ||                         \
     valid_symbols[STRING_HEREDOC_END])

bool handle_literal_hex(TSLexer *lexer)
{
    int chars = 0, sum = 0, hex = 0;

    while ((hex = char_to_hex(CURRENT_CHAR)) != -1) {
        sum = sum * 0x10 + hex;

        ++chars;
        CONSUME_CHAR;
    }

    return (sum <= 0xFF && chars == 2);
}

bool handle_literal_oct(TSLexer *lexer)
{
    int chars = 0, sum = 0, oct = 0;

    while ((oct = char_to_oct(CURRENT_CHAR)) != -1) {
        sum = sum * 010 + oct;

        ++chars;
        CONSUME_CHAR;
    }

    return (sum <= 0777 && chars < 4);
}

bool handle_literal_unicode(TSLexer *lexer, bool string_mode)
{
    bool is_braced = false; // between {}
    int chars = 0, sum = 0, hex = 0;

    if (CURRENT_CHAR == '{') {
        is_braced = true;
        CONSUME_CHAR;
    }

loop:
    chars = sum = 0;
    while ((hex = char_to_hex(CURRENT_CHAR)) != -1) {
        sum = sum * 0x10 + hex;

        ++chars;
        CONSUME_CHAR;
    }

    if (is_braced) {
        // must have at least one char and max 6 chars, and the sum must be <
        // 0x10FFFF
        if (!chars || chars > 6 || sum > 0x10FFFF) {
            return false;
        }

        if (CURRENT_CHAR == '}') {
            CONSUME_CHAR;
            return true;
        } else if (!string_mode) {
            // a char cannot have multiple unicode in the same brace
            return false;
        }

        while (IS_WHITESPACE) {
            lexer->advance(lexer, false);
        }

        goto loop;

        return false;
    }

    return (chars == 4);
}

bool handle_char_escape(TSLexer *lexer, bool string_mode)
{
    if (CURRENT_CHAR == 'u') {
        CONSUME_CHAR;
        return handle_literal_unicode(lexer, string_mode);
    }

    // char have a limited set of authorized escapable,
    if (!string_mode) {
        switch (CURRENT_CHAR) {
        case '\'':
        case '\\':
        case 'a':
        case 'b':
        case 'e':
        case 'f':
        case 'n':
        case 'r':
        case 't':
        case 'v':
            CONSUME_CHAR;
            return true;
        }
        return false;
    }

    if (char_to_oct(CURRENT_CHAR) != -1) {
        return handle_literal_oct(lexer);
    }

    if (CURRENT_CHAR == 'x') {
        CONSUME_CHAR;
        return handle_literal_hex(lexer);
    }

    // string can escape anything
    CONSUME_CHAR;
    return true;
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
    State *state = (State *)payload;

    while (IS_WHITESPACE) {
        // if ((valid_symbols[STRING_HEREDOC_CONTENT] ||
        //      valid_symbols[STRING_HEREDOC_END]) &&
        //     state_has_heredoc(state)) {
        //     if (CURRENT_CHAR == '\n') {
        //         break;
        //     }
        // }
        CONSUME_WHITESPACE;
    }

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

    if (EXPECT_STRING) {
        int chars = 0; // used for STRING_CONTENT

        if (valid_symbols[STRING_INTERPOLATION_START] && CURRENT_CHAR == '#') {
            CONSUME_CHAR;
            ++chars;

            if (CURRENT_CHAR == '{') {
                CONSUME_CHAR;
                lexer->result_symbol = STRING_INTERPOLATION_START;
                return true;
            }
        }

        if (valid_symbols[STRING_ESCAPE] && CURRENT_CHAR == '\\') {
            CONSUME_CHAR;

            if (!handle_char_escape(lexer, true)) {
                return false;
            }

            lexer->result_symbol = STRING_ESCAPE;
            return true;
        }

        if (!state->string_percent && valid_symbols[STRING_PERCENT_START] &&
            CURRENT_CHAR == '%') {
            CONSUME_CHAR;
            ++chars;

            if (CURRENT_CHAR == 'q' || CURRENT_CHAR == 'Q') {
                CONSUME_CHAR;
                ++chars;
            }

            state->string_percent = string_percent_new();

            switch (CURRENT_CHAR) {
            case '(':
                state->string_percent->start = '(';
                state->string_percent->end = ')';
                state->string_percent->depth = 0;
                break;
            case '[':
                state->string_percent->start = '[';
                state->string_percent->end = ']';
                state->string_percent->depth = 0;
                break;
            case '{':
                state->string_percent->start = '{';
                state->string_percent->end = '}';
                state->string_percent->depth = 0;
                break;
            case '<':
                state->string_percent->start = '<';
                state->string_percent->end = '>';
                state->string_percent->depth = 0;
                break;
            case '|':
                state->string_percent->start = '|';
                state->string_percent->end = '|';
                state->string_percent->depth = 0;
                break;
            default:
                string_percent_free(&state->string_percent);
                return false;
            }

            CONSUME_CHAR;
            lexer->result_symbol = STRING_PERCENT_START;
            return true;
        }

        // if there is no depth
        if (state->string_percent && !state->string_percent->depth &&
            valid_symbols[STRING_PERCENT_END] &&
            CURRENT_CHAR == state->string_percent->end) {
            string_percent_free(&state->string_percent);

            CONSUME_CHAR;
            lexer->result_symbol = STRING_PERCENT_END;
            return true;
        }

        // TODO: heredoc

        if (valid_symbols[STRING_CONTENT]) {
            while (true) {
                if (lexer->eof(lexer)) {
                    return false;
                }

                if (CURRENT_CHAR == '"' && !state->string_percent) {
                    if (chars) {
                        break;
                    }

                    // if there is no chars that can't be a STRING_CONTENT
                    return false;
                }

                if (CURRENT_CHAR == '\\') {
                    // maybe a valid STRING_ESCAPE
                    break;
                }

                if (CURRENT_CHAR == '#') {
                    // maybe a valid STRING_INTERPOLATION_START
                    break;
                }

                if (CURRENT_CHAR == '%') {
                    // maybe a valid STRING_PERCENT_START
                    break;
                }

                if (state->string_percent) {
                    if (CURRENT_CHAR == state->string_percent->end) {
                        // if there is no depth STRING_PERCENT_END must be
                        // returned
                        if (!state->string_percent->depth) {
                            break;
                        }

                        --state->string_percent->depth;
                    } else if (CURRENT_CHAR == state->string_percent->start) {
                        ++state->string_percent->depth;
                    }
                }

                ++chars;
                CONSUME_CHAR;
            }

            lexer->result_symbol = STRING_CONTENT;
            return true;
        }
    }

    // if (valid_symbols[STRING_CONTENT] || valid_symbols[STRING_ESCAPE] ||
    //     STRING_INTERPOLATION_START || valid_symbols[STRING_PERCENT_START] ||
    //     valid_symbols[STRING_PERCENT_END] ||
    //     valid_symbols[STRING_HEREDOC_CONTENT] ||
    //     valid_symbols[STRING_HEREDOC_END]) {
    //     if (valid_symbols[STRING_ESCAPE] && CURRENT_CHAR == '\\') {
    //         CONSUME_CHAR;

    //         if (!handle_char_escape(lexer, true)) {
    //             return false;
    //         }

    //         lexer->result_symbol = STRING_ESCAPE;
    //         return true;
    //     }

    //     int chars = 0;

    //     if (valid_symbols[STRING_INTERPOLATION_START] && CURRENT_CHAR == '#')
    //     {
    //         CONSUME_CHAR;
    //         ++chars;

    //         if (CURRENT_CHAR == '{') {
    //             CONSUME_CHAR;
    //             lexer->result_symbol = STRING_INTERPOLATION_START;
    //             return true;
    //         }
    //     }

    //     if (valid_symbols[STRING_PERCENT_START] && CURRENT_CHAR == '%' &&
    //         !state->sp.start) {
    //         CONSUME_CHAR;
    //         ++chars;

    //         if (CURRENT_CHAR == 'q' || CURRENT_CHAR == 'Q') {
    //             CONSUME_CHAR;
    //             ++chars;
    //         }

    //         char *delimiters[] = {"()", "[]", "{}", "<>", "||"};
    //         for (int i = 0, j = ARRAY_SIZE(delimiters); i < j; ++i) {
    //             if (CURRENT_CHAR == delimiters[i][0]) {
    //                 state->sp.start = delimiters[i][0];
    //                 state->sp.end = delimiters[i][1];
    //                 state->sp.depth = 0;
    //             }
    //         }

    //         if (state->sp.start) {
    //             CONSUME_CHAR;
    //             lexer->result_symbol = STRING_PERCENT_START;
    //             return true;
    //         }
    //     }

    //     if (valid_symbols[STRING_PERCENT_END] &&
    //         CURRENT_CHAR == state->sp.end) {
    //         if (!state->sp.depth) {
    //             state->sp.start = 0;
    //             state->sp.end = 0;

    //             CONSUME_CHAR;
    //             lexer->result_symbol = STRING_PERCENT_END;
    //             return true;
    //         }
    //     }

    //     if (valid_symbols[STRING_HEREDOC_START] && CURRENT_CHAR == '<') {
    //         CONSUME_CHAR;
    //         ++chars;
    //         if (CURRENT_CHAR == '<') {
    //             CONSUME_CHAR;
    //             ++chars;
    //             if (CURRENT_CHAR == '-') {
    //                 CONSUME_CHAR;
    //                 lexer->result_symbol = STRING_HEREDOC_START;
    //                 return true;
    //             }
    //         }
    //     }

    //     // if (valid_symbols[STRING_HEREDOC_END] && CURRENT_CHAR == '\n') {
    //     //     CONSUME_CHAR;
    //     //     for (int i = 0, j = strlen(state->heredoc[0]); i < j; ++i) {
    //     //         if (CURRENT_CHAR != state->heredoc[0][i]) {
    //     //             break;
    //     //         }

    //     //         if (i == (j - 1)) {
    //     //             state_pop_heredoc(state);

    //     //             CONSUME_CHAR;
    //     //             lexer->result_symbol = STRING_HEREDOC_END;
    //     //             return true;
    //     //         }

    //     //         CONSUME_CHAR;
    //     //     }
    //     // }

    //     if (valid_symbols[STRING_HEREDOC_CONTENT] && CURRENT_CHAR == '\n') {
    //         CONSUME_CHAR;
    //         lexer->result_symbol = STRING_HEREDOC_CONTENT;
    //         return true;
    //     }

    //     if (valid_symbols[STRING_CONTENT]) {
    //         for (;; ++chars, CONSUME_CHAR) {
    //             if (lexer->eof(lexer)) {
    //                 return false;
    //             }

    //             if (CURRENT_CHAR == '"' && !(state->sp.start)/* &&
    //                 !(state->sp.start || state->heredoc) */) {
    //                 if (chars) {
    //                     break;
    //                 }

    //                 return false;
    //             }

    //             if (CURRENT_CHAR == '\\') {
    //                 break;
    //             }

    //             if (CURRENT_CHAR == '#') {
    //                 break;
    //             }

    //             if (CURRENT_CHAR == '%') {
    //                 break;
    //             }

    //             if (CURRENT_CHAR == state->sp.end) {
    //                 if (!state->sp.depth) {
    //                     break;
    //                 }

    //                 --(state->sp.depth);
    //             }

    //             if (CURRENT_CHAR == state->sp.start) {
    //                 ++(state->sp.depth);
    //                 continue;
    //             }
    //         }

    //         lexer->result_symbol = STRING_CONTENT;
    //         return true;
    //     }
    // }

    // if (valid_symbols[STRING_HEREDOC_IDENT]) {
    //     bool enclosed = false;

    //     if (CURRENT_CHAR == '\'') {
    //         enclosed = true;
    //         CONSUME_CHAR;
    //     }

    //     if (!iswalpha(CURRENT_CHAR)) {
    //         return false;
    //     }

    //     for (int i = 0;; ++i, CONSUME_CHAR) {
    //         if (lexer->eof(lexer)) {
    //             return false;
    //         }

    //         if (!iswalnum(CURRENT_CHAR) && CURRENT_CHAR != '_') {
    //             break;
    //         }

    //         state_append_heredoc(state, CURRENT_CHAR);
    //     }

    //     if (enclosed) {
    //         if (CURRENT_CHAR != '\'') {
    //             state_pop_heredoc(state);
    //             return false;
    //         }

    //         CONSUME_CHAR;
    //     }

    //     lexer->result_symbol = STRING_HEREDOC_IDENT;
    //     return true;
    // }

    return false;
}
