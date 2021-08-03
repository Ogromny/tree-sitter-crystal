#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

// TODO: faire plusieurs regle pour chaque string
// NOTE: normal_string
// NOTE: rdoc_string
// NOTE: etc

enum TokenType {
    CHAR,
    STRING_NORMAL,
};

#define DEBUG(...)                                              \
    if (getenv("DEBUG") && !strncmp(getenv("DEBUG"), "1", 1)) { \
        printf(__VA_ARGS__);                                    \
        fflush(stdout);                                         \
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

// FIXME: really ugly
inline int char_oct_to_oct(char c)
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

inline void consume_whitespace(TSLexer *lexer)
{
    while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }
}

bool handle_char_unicode(TSLexer *lexer)
{
    // between {}
    bool braced = (lexer->lookahead == '{');
    short characters = 0;

    if (braced) {
        lexer->advance(lexer, false);
    }

    // TODO: prevent integer overflow ?
    uint64_t sum = 0;

    while (iswxdigit(lexer->lookahead)) {
        ++characters;

        sum *= 0x10;
        sum += char_hex_to_hex(lexer->lookahead);

        lexer->advance(lexer, false);
    }

    if (braced) {
        lexer->advance(lexer, false);
    }

    if (lexer->lookahead == '\'') {
        if ((!braced && characters != 4) || (braced && characters > 6)) {
            return false;
        }

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

char const *const string_start(TSLexer *lexer)
{
    switch (lexer->lookahead) {
    case '"': {
        lexer->advance(lexer, false);
        return "\"";
    }
    }

    return NULL;
}

char const *const string_end(char const *const sstart)
{
    size_t len = strlen(sstart);

    if (!strncmp(sstart, "\"", len)) {
        return sstart;
    }
}

bool handle_string_unicode(TSLexer *lexer)
{
    // between {}
    bool braced = (lexer->lookahead == '{');
    short characters = 0;

    if (braced) {
        lexer->advance(lexer, false);
    }

    // TODO: prevent integer overflow ?
    uint64_t sum = 0;

    while (iswxdigit(lexer->lookahead)) {
        ++characters;

        sum *= 0x10;
        sum += char_hex_to_hex(lexer->lookahead);

        lexer->advance(lexer, false);
    }

    if (braced) {
        lexer->advance(lexer, false);
    }

    if (lexer->lookahead == '\'') {
        if ((!braced && characters != 4) || (braced && characters > 6)) {
            return false;
        }

        if (sum > (braced ? 0x10FFFF : 0xFFFF)) {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = CHAR;
        return true;
    }

    return false;
}

bool handle_string_hexadecimal(TSLexer *lexer)
{
    // TODO: prevent integer overflow ?
    uint64_t sum = 0;
    short characters = 0;

    while (iswxdigit(lexer->lookahead)) {
        ++characters;

        sum *= 0x10;
        sum += char_hex_to_hex(lexer->lookahead);

        lexer->advance(lexer, false);
    }

    if (sum > 0xFF || characters != 2) {
        return false;
    }

    return true;
}

bool handle_string_octal(TSLexer *lexer)
{
    // TODO: prevent integer overflow ?
    uint64_t sum = 0;
    short characters = 0;

    while (lexer->lookahead >= '0' && lexer->lookahead <= '7') {
        ++characters;

        sum *= 010;
        sum += char_oct_to_oct(lexer->lookahead);

        lexer->advance(lexer, false);
    }

    if (sum > 0777 || characters > 3) {
		lexer->advance(lexer, false);
        return false;
    }

    return true;
}

bool handle_string_escape(TSLexer *lexer)
{
    int seq[] = {
        '\"', '\\', 'a', 'b', 'e', 'f', 'n', 'r', 't', 'v',
    };

    if (lexer->lookahead >= '0' && lexer->lookahead <= '7') {
        return handle_string_octal(lexer);
    }

    if (lexer->lookahead == 'x') {
        lexer->advance(lexer, false);
        return handle_string_hexadecimal(lexer);
    }

    if (lexer->lookahead == 'u') {
        lexer->advance(lexer, false);
        return handle_string_unicode(lexer);
    }

    for (int i = 0, j = sizeof(seq) / sizeof(*seq); i < j; ++i) {
        if (lexer->lookahead == seq[i]) {
            lexer->advance(lexer, false);
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

        if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
            return false;
        }

        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            lexer->result_symbol = CHAR;
            return true;
        }

        return false;
    }

    if (valid_symbols[STRING_NORMAL] && lexer->lookahead == '"') {
        lexer->advance(lexer, false);

        while (lexer->lookahead != '"') {
            if (!lexer->lookahead) {
                // INFO: probably EOF
                return false;
            }

            if (lexer->lookahead == '\\') {
                lexer->advance(lexer, false);
                if (!handle_string_escape(lexer)) {
                    return false;
                }

                continue;
            }

            lexer->advance(lexer, false);
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = STRING_NORMAL;
        return true;
    }

    return false;
}
