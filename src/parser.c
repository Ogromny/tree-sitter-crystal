#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_COLONditto_COLON = 3,
  anon_sym_COLONnodoc_COLON = 4,
  anon_sym_COLONinherit_COLON = 5,
  sym_nil = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  aux_sym_integer_token1 = 9,
  aux_sym_integer_token2 = 10,
  aux_sym_integer_token3 = 11,
  aux_sym_integer_token4 = 12,
  sym_float = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_BSLASH = 15,
  aux_sym_string_interpolation_token1 = 16,
  anon_sym_RBRACE = 17,
  sym_char = 18,
  sym_string_content = 19,
  sym_string_escape = 20,
  sym_string_percent_start = 21,
  sym_string_percent_end = 22,
  sym_program = 23,
  sym_statements = 24,
  sym_statement = 25,
  sym_expression = 26,
  sym_comment = 27,
  sym_comment_directive = 28,
  sym_bool = 29,
  sym_integer = 30,
  sym_string = 31,
  sym_string_literal = 32,
  sym_string_interpolation = 33,
  sym_string_percent = 34,
  aux_sym_program_repeat1 = 35,
  aux_sym_string_literal_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COLONditto_COLON] = ":ditto:",
  [anon_sym_COLONnodoc_COLON] = ":nodoc:",
  [anon_sym_COLONinherit_COLON] = ":inherit:",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [sym_float] = "float",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "",
  [aux_sym_string_interpolation_token1] = "string_interpolation_token1",
  [anon_sym_RBRACE] = "}",
  [sym_char] = "char",
  [sym_string_content] = "string_content",
  [sym_string_escape] = "string_escape",
  [sym_string_percent_start] = "string_percent_start",
  [sym_string_percent_end] = "string_percent_end",
  [sym_program] = "program",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_comment_directive] = "comment_directive",
  [sym_bool] = "bool",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym_string_literal] = "string_literal",
  [sym_string_interpolation] = "string_interpolation",
  [sym_string_percent] = "string_percent",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COLONditto_COLON] = anon_sym_COLONditto_COLON,
  [anon_sym_COLONnodoc_COLON] = anon_sym_COLONnodoc_COLON,
  [anon_sym_COLONinherit_COLON] = anon_sym_COLONinherit_COLON,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [sym_float] = sym_float,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_interpolation_token1] = aux_sym_string_interpolation_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_char] = sym_char,
  [sym_string_content] = sym_string_content,
  [sym_string_escape] = sym_string_escape,
  [sym_string_percent_start] = sym_string_percent_start,
  [sym_string_percent_end] = sym_string_percent_end,
  [sym_program] = sym_program,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_comment_directive] = sym_comment_directive,
  [sym_bool] = sym_bool,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym_string_literal] = sym_string_literal,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_string_percent] = sym_string_percent,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLONditto_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONnodoc_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONinherit_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_interpolation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_string_percent_start] = {
    .visible = true,
    .named = true,
  },
  [sym_string_percent_end] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_percent] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [3] = anon_sym_BSLASH,
  },
  [2] = {
    [3] = anon_sym_BSLASH,
    [4] = anon_sym_BSLASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_string_literal, 2,
    sym_string_literal,
    anon_sym_BSLASH,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(91);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(44);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '#') ADVANCE(39);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_interpolation_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45, .external_lex_state = 2},
  [2] = {.lex_state = 45, .external_lex_state = 2},
  [3] = {.lex_state = 45, .external_lex_state = 2},
  [4] = {.lex_state = 45, .external_lex_state = 2},
  [5] = {.lex_state = 45, .external_lex_state = 2},
  [6] = {.lex_state = 45, .external_lex_state = 2},
  [7] = {.lex_state = 45, .external_lex_state = 2},
  [8] = {.lex_state = 45, .external_lex_state = 2},
  [9] = {.lex_state = 45, .external_lex_state = 2},
  [10] = {.lex_state = 45, .external_lex_state = 2},
  [11] = {.lex_state = 45, .external_lex_state = 2},
  [12] = {.lex_state = 45, .external_lex_state = 2},
  [13] = {.lex_state = 45, .external_lex_state = 2},
  [14] = {.lex_state = 45, .external_lex_state = 2},
  [15] = {.lex_state = 45, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 3},
  [17] = {.lex_state = 1, .external_lex_state = 3},
  [18] = {.lex_state = 1, .external_lex_state = 3},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45, .external_lex_state = 4},
  [28] = {(TSStateId)(-1)},
  [29] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_char = 0,
  ts_external_token_string_content = 1,
  ts_external_token_string_escape = 2,
  ts_external_token_string_percent_start = 3,
  ts_external_token_string_percent_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_char] = sym_char,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token_string_escape] = sym_string_escape,
  [ts_external_token_string_percent_start] = sym_string_percent_start,
  [ts_external_token_string_percent_end] = sym_string_percent_end,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_char] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token_string_escape] = true,
    [ts_external_token_string_percent_start] = true,
    [ts_external_token_string_percent_end] = true,
  },
  [2] = {
    [ts_external_token_char] = true,
    [ts_external_token_string_percent_start] = true,
  },
  [3] = {
    [ts_external_token_string_content] = true,
    [ts_external_token_string_escape] = true,
  },
  [4] = {
    [ts_external_token_string_percent_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_COLONditto_COLON] = ACTIONS(1),
    [anon_sym_COLONnodoc_COLON] = ACTIONS(1),
    [anon_sym_COLONinherit_COLON] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_string_interpolation_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [sym_string_percent_start] = ACTIONS(1),
    [sym_string_percent_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(26),
    [sym_statements] = STATE(12),
    [sym_statement] = STATE(13),
    [sym_expression] = STATE(14),
    [sym_comment] = STATE(1),
    [sym_bool] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_string] = STATE(8),
    [sym_string_literal] = STATE(15),
    [sym_string_percent] = STATE(15),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_integer_token3] = ACTIONS(15),
    [aux_sym_integer_token4] = ACTIONS(15),
    [sym_float] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_char] = ACTIONS(9),
    [sym_string_percent_start] = ACTIONS(21),
  },
  [2] = {
    [sym_statements] = STATE(12),
    [sym_statement] = STATE(13),
    [sym_expression] = STATE(14),
    [sym_comment] = STATE(2),
    [sym_bool] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_string] = STATE(8),
    [sym_string_literal] = STATE(15),
    [sym_string_percent] = STATE(15),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_integer_token3] = ACTIONS(15),
    [aux_sym_integer_token4] = ACTIONS(15),
    [sym_float] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_char] = ACTIONS(9),
    [sym_string_percent_start] = ACTIONS(21),
  },
  [3] = {
    [sym_statements] = STATE(12),
    [sym_statement] = STATE(13),
    [sym_expression] = STATE(14),
    [sym_comment] = STATE(3),
    [sym_bool] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_string] = STATE(8),
    [sym_string_literal] = STATE(15),
    [sym_string_percent] = STATE(15),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_nil] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(30),
    [anon_sym_false] = ACTIONS(30),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(36),
    [aux_sym_integer_token3] = ACTIONS(36),
    [aux_sym_integer_token4] = ACTIONS(36),
    [sym_float] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym_char] = ACTIONS(27),
    [sym_string_percent_start] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      sym_comment,
    ACTIONS(50), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(48), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [26] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      sym_comment,
    ACTIONS(56), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(54), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [52] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(62), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(60), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [75] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(66), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(64), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [98] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(70), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(68), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [121] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(74), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(72), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [144] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(78), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(76), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [167] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(82), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(80), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [190] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(86), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(84), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [213] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(88), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [236] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(94), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(92), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [259] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(98), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(96), 10,
      sym_char,
      sym_string_percent_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [282] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_interpolation_token1,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_string_literal_repeat1,
    STATE(20), 1,
      sym_string_interpolation,
    ACTIONS(104), 2,
      sym_string_content,
      sym_string_escape,
  [305] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      aux_sym_string_interpolation_token1,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
    STATE(20), 1,
      sym_string_interpolation,
    ACTIONS(104), 2,
      sym_string_content,
      sym_string_escape,
  [328] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      aux_sym_string_interpolation_token1,
    STATE(20), 1,
      sym_string_interpolation,
    ACTIONS(113), 2,
      sym_string_content,
      sym_string_escape,
    STATE(18), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [349] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    STATE(29), 1,
      sym_comment_directive,
    ACTIONS(118), 3,
      anon_sym_COLONditto_COLON,
      anon_sym_COLONnodoc_COLON,
      anon_sym_COLONinherit_COLON,
  [367] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(120), 4,
      sym_string_content,
      sym_string_escape,
      anon_sym_DQUOTE,
      aux_sym_string_interpolation_token1,
  [380] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(122), 4,
      sym_string_content,
      sym_string_escape,
      anon_sym_DQUOTE,
      aux_sym_string_interpolation_token1,
  [393] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string_literal,
    STATE(22), 1,
      sym_comment,
  [406] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_string_literal,
    STATE(23), 1,
      sym_comment,
  [419] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      sym_nil,
    STATE(24), 1,
      sym_comment,
  [429] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_comment,
  [439] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_comment,
  [449] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      sym_string_percent_end,
    STATE(27), 1,
      sym_comment,
  [459] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [463] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 282,
  [SMALL_STATE(17)] = 305,
  [SMALL_STATE(18)] = 328,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 439,
  [SMALL_STATE(27)] = 449,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 463,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_percent, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_percent, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 5, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 5, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(24),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(20),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_crystal_external_scanner_create(void);
void tree_sitter_crystal_external_scanner_destroy(void *);
bool tree_sitter_crystal_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_crystal_external_scanner_serialize(void *, char *);
void tree_sitter_crystal_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_crystal(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_crystal_external_scanner_create,
      tree_sitter_crystal_external_scanner_destroy,
      tree_sitter_crystal_external_scanner_scan,
      tree_sitter_crystal_external_scanner_serialize,
      tree_sitter_crystal_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
