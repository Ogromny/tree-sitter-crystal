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
    STRING_SIMPLE_CONTENT,
    STRING_SIMPLE_ESCAPE,
    STRING_SIMPLE_INTERPOLATION_START,
};

#define DEBUG(...)                                              \
    if (getenv("DEBUG") && !strncmp(getenv("DEBUG"), "1", 1)) { \
        printf(__VA_ARGS__);                                    \
        fflush(stdout);                                         \
    }

#define RETURN_FALSE_IF_EOF  \
    if (!lexer->lookahead) { \
        return false;        \
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

// bool handle_string_interpolation(TSLexer *lexer)
// {
//     if (lexer->lookahead != '{') {
//         return false;
//     }
//
//     while (lexer->lookahead != '}') {
//         if (!lexer->lookahead) {
//             // NOTE: probably EOF
//             return false;
//         }
//
//         lexer->advance(lexer, false);
//     }
//
//     lexer->advance(lexer, false);
//     return true;
// }

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

    // TODO: prevent integer overflow ?
process:
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

        if (string && iswspace(lexer->lookahead)) {
            consume_whitespace(lexer);
            sum = 0;
            characters = 0;
            goto process;
        }

        lexer->advance(lexer, false);
    } else if (characters != 4) {
        return false;
    }

    return true;
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

    if (valid_symbols[STRING_SIMPLE_INTERPOLATION_START] &&
        lexer->lookahead == '#') {
        lexer->advance(lexer, false);
        if (lexer->lookahead != '{') {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->result_symbol = STRING_SIMPLE_INTERPOLATION_START;
        return true;
    }

    if (valid_symbols[STRING_SIMPLE_ESCAPE] && lexer->lookahead == '\\') {
        lexer->advance(lexer, false);

        if (!handle_char_escape(lexer, true)) {
            return false;
        }

        lexer->result_symbol = STRING_SIMPLE_ESCAPE;
        return true;
    }

    if (valid_symbols[STRING_SIMPLE_CONTENT]) {
        int characters = 0;

        while (true) {
            RETURN_FALSE_IF_EOF;

            if (lexer->lookahead == '"') {
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
                return false;
                // TODO:
            }

            lexer->advance(lexer, false);
            ++characters;
        }

        lexer->result_symbol = STRING_SIMPLE_CONTENT;
        return true;
    }

    /*
string_normal:
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
    lexer->mark_end(lexer);

    consume_whitespace(lexer);

    if (lexer->lookahead == '\\') {
        lexer->advance(lexer, false);
        consume_whitespace(lexer);
        goto string_normal;
    }

    lexer->result_symbol = STRING_NORMAL;
    return true;
}

if (valid_symbols[STRING_PERCENT_LITERAL] && lexer->lookahead == '%') {
    lexer->advance(lexer, false);

    if (lexer->lookahead == 'q' || lexer->lookahead == 'Q') {
        lexer->advance(lexer, false);
    }

    int seq[] = {'(', '[', '{', '<', '|'};
    int qes[] = {')', ']', '}', '>', '|'};
    int s = 0;
    int q = 0;
    int depth = 0;

    for (int i = 0, j = sizeof(seq) / sizeof(*seq); i < j; ++i) {
        if (lexer->lookahead == seq[i]) {
            s = seq[i];
            q = qes[i];
        }
    }

    if (!s) {
        return false;
    }

    while (true) {
        lexer->advance(lexer, false);

        if (!lexer->lookahead) {
            // NOTE: probably EOF
            return false;
        }

        if (lexer->lookahead == s) {
            if (lexer->lookahead == q) {
                break;
            }

            ++depth;
        }

        if (lexer->lookahead == q) {
            if (!(depth--)) {
                break;
            }
        }
    }

    lexer->advance(lexer, false);
    lexer->result_symbol = STRING_PERCENT_LITERAL;
    return true;
}

if (valid_symbols[STRING_RDOC] && lexer->lookahead == '<') {
    lexer->advance(lexer, false);
    if (lexer->lookahead != '<') {
        return false;
    }

    lexer->advance(lexer, false);
    if (lexer->lookahead != '-') {
        return false;
    }

    lexer->advance(lexer, false);

            bool quoted = false;
            if (lexer->lookahead == '\'') {
                    quoted = true;
                    lexer->advance(lexer, false);
            }
    // TODO: can overflow, maybe refactor in futur
    int heredoc[256] = {0};

    for (int i = 0, j = sizeof(heredoc) / sizeof(*heredoc); i < j; ++i) {
        if (!i && !iswalpha(lexer->lookahead)) {
            return false;
        }

        if (!iswalnum(lexer->lookahead) && lexer->lookahead != '_') {
                            if (quoted && lexer->lookahead == '\'') {
                                    lexer->advance(lexer, false);
                            }
                            break;
        }

        heredoc[i] = lexer->lookahead;
        lexer->advance(lexer, false);
    }

    if (!(*heredoc)) {
        return false;
    }

    while (true) {
        if (!lexer->lookahead) {
            // NOTE: probably EOF
            return false;
        }

        if (lexer->lookahead == *heredoc) {
            bool valid = true;
            for (int i = 1, j = sizeof(heredoc) / sizeof(*heredoc);
                 i < j && valid && heredoc[i]; ++i) {
                lexer->advance(lexer, false);
                valid = lexer->lookahead == heredoc[i];
            }

            if (valid) {
                                    break;
            }
        }

        lexer->advance(lexer, false);
    }

    lexer->advance(lexer, false);
    lexer->result_symbol = STRING_RDOC;
    return true;
}
    */

    return false;
}
