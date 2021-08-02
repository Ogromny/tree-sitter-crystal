#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    CHAR,
    STRING,
};

#define DEBUG(...)                                              \
    if (getenv("DEBUG") && !strncmp(getenv("DEBUG"), "1", 1)) { \
        printf(__VA_ARGS__);                                    \
    }

// FIXME: really ugly
inline int char_hex_to_hex(char c)
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

inline void consume_whitespace(TSLexer *lexer)
{
    while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }
}

// FIXME: can bypass validate (0x0000001 is valid for TS but not for Crystal)
bool handle_char_unicode(TSLexer *lexer)
{
    // between {}
    bool braced = (lexer->lookahead == '{');

    if (braced) {
        lexer->advance(lexer, false);
    }

    // TODO: prevent integer overflow ?
    uint64_t sum = 0;

    while (iswxdigit(lexer->lookahead)) {
        sum *= 0x10;
        sum += char_hex_to_hex(lexer->lookahead);

        lexer->advance(lexer, false);
    }

    if (braced) {
        lexer->advance(lexer, false);
    }

    if (lexer->lookahead == '\'') {
        if (sum > (braced ? 0x10FFFF : 0xFFFF)) {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = CHAR;
        return true;
    }

    return false;
}

bool handle_char_escape(TSLexer *lexer)
{
    int seq[] = {
        '\'', '\\', 'a', 'b', 'e', 'f', 'n', 'r', 't', 'v',
    };

    if (lexer->lookahead == 'u') {
        lexer->advance(lexer, false);
        return handle_char_unicode(lexer);
    }

    for (int i = 0, j = sizeof(seq) / sizeof(*seq); i < j; ++i) {
        if (lexer->lookahead == seq[i]) {
            lexer->advance(lexer, false);

            if (lexer->lookahead != '\'') {
                return false;
            }

            lexer->advance(lexer, false);
            lexer->result_symbol = CHAR;
            return true;
        }
    }

    return false;
}

void *tree_sitter_crystal_external_scanner_create() { return NULL; }

void tree_sitter_crystal_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_crystal_external_scanner_serialize(void *payload,
                                                        char *buffer)
{
    return 0;
}

void tree_sitter_crystal_external_scanner_deserialize(void *payload,
                                                      char const *buffer,
                                                      unsigned length)
{
}

bool tree_sitter_crystal_external_scanner_scan(void *payload, TSLexer *lexer,
                                               bool const *valid_symbols)
{
    consume_whitespace(lexer);

    if (valid_symbols[CHAR] && lexer->lookahead == '\'') {
        lexer->advance(lexer, false);

        if (lexer->lookahead == '\\') {
            lexer->advance(lexer, false);
            return handle_char_escape(lexer);
        }

        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            lexer->result_symbol = CHAR;
            return true;
        }
    }

    return false;
}
