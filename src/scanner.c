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

bool handle_string_hexadecimal(TSLexer *lexer)
{
    int chars = 0, sum = 0, hex = 0;

    while ((hex = char_to_hex(CURRENT_CHAR)) != -1) {
        sum = sum * 0x10 + hex;

        ++chars;
        CONSUME_CHAR;
    }

    return (sum <= 0xFF && chars == 2);
}

bool handle_string_octal(TSLexer *lexer)
{
    int chars = 0, sum = 0, oct = 0;

    while ((oct = char_to_oct(CURRENT_CHAR)) != -1) {
        sum = sum * 010 + oct;

        ++chars;
        CONSUME_CHAR;
    }

    return (sum <= 0777 && chars < 4);
}

bool handle_char_unicode(TSLexer *lexer, bool string)
{
	bool between_brace = false;
	int chars = 0, sum = 0, hex = 0;

	if (CURRENT_CHAR == '{') {
		between_brace = true;
		CONSUME_CHAR;
	}

check:
    for (chars = 0, sum = 0; iswxdigit(CURRENT_CHAR); ++chars, CONSUME_CHAR) {
        sum = sum * 0x10 + char_to_hex(CURRENT_CHAR);
    }

    if (between_brace) {
        if (!chars || chars > 6 || sum > 0x10FFFF) {
            return false;
        }

        // NOTE: cannot have leading whitespace
        if (!IS_WHITESPACE && CURRENT_CHAR == '}') {
            CONSUME_CHAR;
            return true;
        }

        if (!string) {
            return false;
        }

        while (IS_WHITESPACE) {
            lexer->advance(lexer, false);
        }

        goto check;
    }

    return (chars == 4);
}

bool handle_char_escape(TSLexer *lexer, bool string)
{
    if (CURRENT_CHAR == 'u') {
        CONSUME_CHAR;
        return handle_char_unicode(lexer, string);
    }

    if (string) {
        if (CURRENT_CHAR >= '0' && CURRENT_CHAR <= '7') {
            return handle_string_octal(lexer);
        }

        if (CURRENT_CHAR == 'x') {
            CONSUME_CHAR;
            return handle_string_hexadecimal(lexer);
        }

        CONSUME_CHAR;
        return true;
    }

    static int escapables[] = {'\'', '\\', 'a', 'b', 'e',
                               'f',  'n',  'r', 't', 'v'};
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

    if (valid_symbols[STRING_CONTENT] || valid_symbols[STRING_ESCAPE] ||
        STRING_INTERPOLATION_START || valid_symbols[STRING_PERCENT_START] ||
        valid_symbols[STRING_PERCENT_END] ||
        valid_symbols[STRING_HEREDOC_CONTENT] ||
        valid_symbols[STRING_HEREDOC_END]) {
        if (valid_symbols[STRING_ESCAPE] && CURRENT_CHAR == '\\') {
            CONSUME_CHAR;

            if (!handle_char_escape(lexer, true)) {
                return false;
            }

            lexer->result_symbol = STRING_ESCAPE;
            return true;
        }

        int chars = 0;

        if (valid_symbols[STRING_INTERPOLATION_START] && CURRENT_CHAR == '#') {
            CONSUME_CHAR;
            ++chars;

            if (CURRENT_CHAR == '{') {
                CONSUME_CHAR;
                lexer->result_symbol = STRING_INTERPOLATION_START;
                return true;
            }
        }

        if (valid_symbols[STRING_PERCENT_START] && CURRENT_CHAR == '%' &&
            !state->sp.start) {
            CONSUME_CHAR;
            ++chars;

            if (CURRENT_CHAR == 'q' || CURRENT_CHAR == 'Q') {
                CONSUME_CHAR;
                ++chars;
            }

            char *delimiters[] = {"()", "[]", "{}", "<>", "||"};
            for (int i = 0, j = ARRAY_SIZE(delimiters); i < j; ++i) {
                if (CURRENT_CHAR == delimiters[i][0]) {
                    state->sp.start = delimiters[i][0];
                    state->sp.end = delimiters[i][1];
                    state->sp.depth = 0;
                }
            }

            if (state->sp.start) {
                CONSUME_CHAR;
                lexer->result_symbol = STRING_PERCENT_START;
                return true;
            }
        }

        if (valid_symbols[STRING_PERCENT_END] &&
            CURRENT_CHAR == state->sp.end) {
            if (!state->sp.depth) {
                state->sp.start = 0;
                state->sp.end = 0;

                CONSUME_CHAR;
                lexer->result_symbol = STRING_PERCENT_END;
                return true;
            }
        }

        if (valid_symbols[STRING_HEREDOC_START] && CURRENT_CHAR == '<') {
            CONSUME_CHAR;
            ++chars;
            if (CURRENT_CHAR == '<') {
                CONSUME_CHAR;
                ++chars;
                if (CURRENT_CHAR == '-') {
                    CONSUME_CHAR;
                    lexer->result_symbol = STRING_HEREDOC_START;
                    return true;
                }
            }
        }

        // if (valid_symbols[STRING_HEREDOC_END] && CURRENT_CHAR == '\n') {
        //     CONSUME_CHAR;
        //     for (int i = 0, j = strlen(state->heredoc[0]); i < j; ++i) {
        //         if (CURRENT_CHAR != state->heredoc[0][i]) {
        //             break;
        //         }

        //         if (i == (j - 1)) {
        //             state_pop_heredoc(state);

        //             CONSUME_CHAR;
        //             lexer->result_symbol = STRING_HEREDOC_END;
        //             return true;
        //         }

        //         CONSUME_CHAR;
        //     }
        // }

        if (valid_symbols[STRING_HEREDOC_CONTENT] && CURRENT_CHAR == '\n') {
            CONSUME_CHAR;
            lexer->result_symbol = STRING_HEREDOC_CONTENT;
            return true;
        }

        if (valid_symbols[STRING_CONTENT]) {
            for (;; ++chars, CONSUME_CHAR) {
                if (lexer->eof(lexer)) {
                    return false;
                }

                if (CURRENT_CHAR == '"' && !(state->sp.start)/* &&
                    !(state->sp.start || state->heredoc) */) {
                    if (chars) {
                        break;
                    }

                    return false;
                }

                if (CURRENT_CHAR == '\\') {
                    break;
                }

                if (CURRENT_CHAR == '#') {
                    break;
                }

                if (CURRENT_CHAR == '%') {
                    break;
                }

                if (CURRENT_CHAR == state->sp.end) {
                    if (!state->sp.depth) {
                        break;
                    }

                    --(state->sp.depth);
                }

                if (CURRENT_CHAR == state->sp.start) {
                    ++(state->sp.depth);
                    continue;
                }
            }

            lexer->result_symbol = STRING_CONTENT;
            return true;
        }
    }

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
