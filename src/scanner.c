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
    STRING_PERCENT_START,
    STRING_PERCENT_END,
};

typedef struct {
    char start;
    char end;
    short depth;
} StringPercent;

typedef struct {
    StringPercent *string_percent;
} State;

#define DEBUG(...)                                              \
    if (getenv("DEBUG") && !strncmp(getenv("DEBUG"), "1", 1)) { \
        printf(__VA_ARGS__);                                    \
        fflush(stdout);                                         \
    }

// FIXME: really ugly
int char_hex_to_hex(char c)
{
    switch (c) {
    case '1':
        return 0x1;
    case '2':
        return 0x2;
    case '3':
        return 0x3;
    case '4':
        return 0x4;
    case '5':
        return 0x5;
    case '6':
        return 0x6;
    case '7':
        return 0x7;
    case '8':
        return 0x8;
    case '9':
        return 0x9;
    case 'A':
    case 'a':
        return 0xA;
    case 'B':
    case 'b':
        return 0xB;
    case 'C':
    case 'c':
        return 0xC;
    case 'D':
    case 'd':
        return 0xD;
    case 'E':
    case 'e':
        return 0xE;
    case 'F':
    case 'f':
        return 0xF;
    }

    return 0;
}

// FIXME: really ugly
int char_oct_to_oct(char c)
{
    switch (c) {
    case '1':
        return 01;
    case '2':
        return 02;
    case '3':
        return 03;
    case '4':
        return 04;
    case '5':
        return 05;
    case '6':
        return 06;
    case '7':
        return 07;
    }

    return 0;
}

void consume_whitespace(TSLexer *lexer)
{
    while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }
}

bool handle_string_hexadecimal(TSLexer *lexer)
{
    int characters = 0;
    uint64_t sum = 0;

    while (iswxdigit(lexer->lookahead)) {
        sum *= 0x10;
        sum += char_hex_to_hex(lexer->lookahead);

        ++characters;
        lexer->advance(lexer, false);
    }

    if (sum > 0xFF || characters != 2) {
        return false;
    }

    return true;
}

bool handle_string_octal(TSLexer *lexer)
{
    int characters = 0;
    uint64_t sum = 0;

    while (lexer->lookahead >= '0' && lexer->lookahead <= '7') {
        sum *= 010;
        sum += char_oct_to_oct(lexer->lookahead);

        ++characters;
        lexer->advance(lexer, false);
    }

    if (sum > 0777 || characters > 3) {
        return false;
    }

    return true;
}

bool handle_char_unicode(TSLexer *lexer, bool string)
{
    bool braced = false;
    int characters = 0;
    uint64_t sum = 0;

    if (lexer->lookahead == '{') {
        braced = true;
        lexer->advance(lexer, false);
    }

process:
    // TODO: prevent integer overflow ?
    while (iswxdigit(lexer->lookahead)) {
        sum *= 0x10;
        sum += char_hex_to_hex(lexer->lookahead);

        ++characters;
        lexer->advance(lexer, false);
    }

    if (braced) {
        if (!characters || characters > 6 || sum > 0x10FFFF) {
            return false;
        }

		bool suffix_spaced = false;
		if (iswspace(lexer->lookahead)) {
			suffix_spaced = true;

			while (iswspace(lexer->lookahead)) {
				lexer->advance(lexer, false);
			}
		}

        if (string && iswxdigit(lexer->lookahead)) {
            sum = 0;
            characters = 0;
            goto process;
        }

		// NOTE: cannot have space before }
		if (suffix_spaced) {
			return false;
		}

        if (lexer->lookahead == '}') {
            lexer->advance(lexer, false);
            return true;
        }

        return false;
    }

    if (characters == 4) {
        return true;
    }

    return false;
}

bool handle_char_escape(TSLexer *lexer, bool string)
{
    int seq[] = {
        '\\', 'a', 'b', 'e', 'f', 'n', 'r', 't', 'v',
    };

    if (string) {
        if (lexer->lookahead >= '0' && lexer->lookahead <= '7') {
            return handle_string_octal(lexer);
        }

        if (lexer->lookahead == 'x') {
            lexer->advance(lexer, false);
            return handle_string_hexadecimal(lexer);
        }

        // NOTE: multiline in "" via backslash
        if (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, false);
            return true;
        }
    }

    if (lexer->lookahead == 'u') {
        lexer->advance(lexer, false);
        return handle_char_unicode(lexer, string);
    }

    if (lexer->lookahead == (string ? '"' : '\'')) {
        lexer->advance(lexer, false);
        return true;
    }

    for (int i = 0, j = sizeof(seq) / sizeof(*seq); i < j; ++i) {
        if (lexer->lookahead == seq[i]) {
            lexer->advance(lexer, false);
            return true;
        }
    }

    return false;
}

void *tree_sitter_crystal_external_scanner_create(void)
{
    return calloc(1, sizeof(State));
}

void tree_sitter_crystal_external_scanner_destroy(void *payload)
{
    free(payload);
}

unsigned tree_sitter_crystal_external_scanner_serialize(void *payload,
                                                        char *buffer)
{
    memcpy(buffer, payload, sizeof(State));
    return sizeof(State);
}

void tree_sitter_crystal_external_scanner_deserialize(void *payload,
                                                      char const *buffer,
                                                      unsigned length)
{
    memcpy(payload, buffer, length);
}

bool tree_sitter_crystal_external_scanner_scan(void *payload, TSLexer *lexer,
                                               bool const *valid_symbols)
{
    consume_whitespace(lexer);

    State *state = (State *)payload;

    if (valid_symbols[CHAR] && lexer->lookahead == '\'') {
        lexer->advance(lexer, false);

        if (lexer->lookahead == '\\') {
            lexer->advance(lexer, false);
            if (!handle_char_escape(lexer, false)) {
                return false;
            }
        } else {
            lexer->advance(lexer, false);
        }

        if (lexer->lookahead != '\'') {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = CHAR;
        return true;
    }

    if (valid_symbols[STRING_ESCAPE] && lexer->lookahead == '\\') {
        lexer->advance(lexer, false);

        if (lexer->lookahead == '#' &&
            valid_symbols[STRING_INTERPOLATION_START]) {
            goto string_interpolation_start;
        }

        if (!handle_char_escape(lexer, true)) {
			return false;
        }

        lexer->result_symbol = STRING_ESCAPE;
        return true;
    }

string_interpolation_start:
    if (valid_symbols[STRING_INTERPOLATION_START] &&
        (lexer->lookahead == '\\' || lexer->lookahead == '#')) {
        if (lexer->lookahead == '\\') {
            lexer->advance(lexer, false);
        }

        if (lexer->lookahead != '#') {
            return false;
        }

        lexer->advance(lexer, false);
        if (lexer->lookahead != '{') {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = STRING_INTERPOLATION_START;
        return true;
    }

    if (valid_symbols[STRING_INTERPOLATION_END] && lexer->lookahead == '}') {
        lexer->advance(lexer, false);
        lexer->result_symbol = STRING_INTERPOLATION_END;
        return true;
    }

    if (valid_symbols[STRING_PERCENT_START] && lexer->lookahead == '%') {
        lexer->advance(lexer, false);

        if (lexer->lookahead == 'Q' || lexer->lookahead == 'q') {
            lexer->advance(lexer, false);
        }

        char seq[] = {'(', '[', '{', '<', '|'};
        char qes[] = {')', ']', '}', '>', '|'};
        char s = 0;
        char q = 0;

        for (int i = 0, j = sizeof(seq) / sizeof(*seq); i < j; ++i) {
            if (lexer->lookahead == seq[i]) {
                s = seq[i];
                q = qes[i];
                break;
            }
        }

        if (!s) {
            return false;
        }

        if (state->string_percent) {
            free(state->string_percent);
        }

        state->string_percent = malloc(sizeof(StringPercent));
        state->string_percent->depth = 1;
        state->string_percent->start = s;
        state->string_percent->end = q;

        lexer->advance(lexer, false);
        lexer->result_symbol = STRING_PERCENT_START;
        return true;
    }

    if (valid_symbols[STRING_PERCENT_END] && state->string_percent &&
        lexer->lookahead == state->string_percent->end) {
        if (--state->string_percent->depth) {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = STRING_PERCENT_END;
        return true;
    }

string_content:
    if (valid_symbols[STRING_CONTENT]) {
        int characters = 0;
        int prec = 0;

        while (true) {
            if (lexer->eof(lexer)) {
				return false;
			}

            // FIXME: ugly AF
            if (state->string_percent) {
                if (lexer->lookahead == state->string_percent->start) {
                    if (state->string_percent->start ==
                        state->string_percent->end) {
                        break;
                    }
                    ++state->string_percent->depth;
                } else if (lexer->lookahead == state->string_percent->end) {
                    if (state->string_percent->depth == 1) {
                        break;
                    }

                    --state->string_percent->depth;
                }
            }

            if (lexer->lookahead == '"' && (!state->string_percent)) {
                if (characters) {
                    break;
                }

                // NOTE: empty string
                return false;
            }

            if (lexer->lookahead == '\\') {
                break;
            }

            if (lexer->lookahead == '#') {
                break;
                lexer->mark_end(lexer);
            }
            if (prec == '#' && lexer->lookahead == '{') {
                return false;
            }

            prec = lexer->lookahead;
            lexer->advance(lexer, false);
            ++characters;
        }

        lexer->result_symbol = STRING_CONTENT;
        return true;
    }

    return false;
}
