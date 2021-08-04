#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_RBRACE = 16,
  sym_char = 17,
  sym_string_simple_content = 18,
  sym_string_simple_escape = 19,
  sym_string_simple_interpolation_start = 20,
  sym_string_simple_uninterpolation_start = 21,
  sym_program = 22,
  sym_statements = 23,
  sym_statement = 24,
  sym_expression = 25,
  sym_comment = 26,
  sym_comment_directive = 27,
  sym_bool = 28,
  sym_integer = 29,
  sym_string = 30,
  sym_string_simple = 31,
  sym_string_simple_interpolation = 32,
  sym_string_simple_interpolation_end = 33,
  sym_string_simple_uninterpolation = 34,
  sym_string_simple_uninterpolation_end = 35,
  aux_sym_program_repeat1 = 36,
  aux_sym_string_simple_repeat1 = 37,
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
  [anon_sym_RBRACE] = "}",
  [sym_char] = "char",
  [sym_string_simple_content] = "string_simple_content",
  [sym_string_simple_escape] = "string_simple_escape",
  [sym_string_simple_interpolation_start] = "string_simple_interpolation_start",
  [sym_string_simple_uninterpolation_start] = "string_simple_uninterpolation_start",
  [sym_program] = "program",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_comment_directive] = "comment_directive",
  [sym_bool] = "bool",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym_string_simple] = "string_simple",
  [sym_string_simple_interpolation] = "string_simple_interpolation",
  [sym_string_simple_interpolation_end] = "string_simple_interpolation_end",
  [sym_string_simple_uninterpolation] = "string_simple_uninterpolation",
  [sym_string_simple_uninterpolation_end] = "string_simple_uninterpolation_end",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_simple_repeat1] = "string_simple_repeat1",
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
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_char] = sym_char,
  [sym_string_simple_content] = sym_string_simple_content,
  [sym_string_simple_escape] = sym_string_simple_escape,
  [sym_string_simple_interpolation_start] = sym_string_simple_interpolation_start,
  [sym_string_simple_uninterpolation_start] = sym_string_simple_uninterpolation_start,
  [sym_program] = sym_program,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_comment_directive] = sym_comment_directive,
  [sym_bool] = sym_bool,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym_string_simple] = sym_string_simple,
  [sym_string_simple_interpolation] = sym_string_simple_interpolation,
  [sym_string_simple_interpolation_end] = sym_string_simple_interpolation_end,
  [sym_string_simple_uninterpolation] = sym_string_simple_uninterpolation,
  [sym_string_simple_uninterpolation_end] = sym_string_simple_uninterpolation_end,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_simple_repeat1] = aux_sym_string_simple_repeat1,
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_uninterpolation_start] = {
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
  [sym_string_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_uninterpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple_uninterpolation_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_simple_repeat1] = {
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
  sym_string_simple, 2,
    sym_string_simple,
    anon_sym_BSLASH,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(41);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {(TSStateId)(-1)},
  [32] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_char = 0,
  ts_external_token_string_simple_content = 1,
  ts_external_token_string_simple_escape = 2,
  ts_external_token_string_simple_interpolation_start = 3,
  ts_external_token_string_simple_uninterpolation_start = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_char] = sym_char,
  [ts_external_token_string_simple_content] = sym_string_simple_content,
  [ts_external_token_string_simple_escape] = sym_string_simple_escape,
  [ts_external_token_string_simple_interpolation_start] = sym_string_simple_interpolation_start,
  [ts_external_token_string_simple_uninterpolation_start] = sym_string_simple_uninterpolation_start,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_char] = true,
    [ts_external_token_string_simple_content] = true,
    [ts_external_token_string_simple_escape] = true,
    [ts_external_token_string_simple_interpolation_start] = true,
    [ts_external_token_string_simple_uninterpolation_start] = true,
  },
  [2] = {
    [ts_external_token_char] = true,
  },
  [3] = {
    [ts_external_token_string_simple_content] = true,
    [ts_external_token_string_simple_escape] = true,
    [ts_external_token_string_simple_interpolation_start] = true,
    [ts_external_token_string_simple_uninterpolation_start] = true,
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
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string_simple_content] = ACTIONS(1),
    [sym_string_simple_escape] = ACTIONS(1),
    [sym_string_simple_interpolation_start] = ACTIONS(1),
    [sym_string_simple_uninterpolation_start] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(30),
    [sym_statements] = STATE(6),
    [sym_statement] = STATE(10),
    [sym_expression] = STATE(11),
    [sym_comment] = STATE(1),
    [sym_bool] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_string] = STATE(14),
    [sym_string_simple] = STATE(12),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_nil] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [aux_sym_integer_token4] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(7),
  },
  [2] = {
    [sym_statements] = STATE(6),
    [sym_statement] = STATE(10),
    [sym_expression] = STATE(11),
    [sym_comment] = STATE(2),
    [sym_bool] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_string] = STATE(14),
    [sym_string_simple] = STATE(12),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_nil] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(24),
    [anon_sym_false] = ACTIONS(24),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(30),
    [aux_sym_integer_token3] = ACTIONS(30),
    [aux_sym_integer_token4] = ACTIONS(30),
    [sym_float] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym_char] = ACTIONS(21),
  },
  [3] = {
    [sym_statements] = STATE(6),
    [sym_statement] = STATE(10),
    [sym_expression] = STATE(11),
    [sym_comment] = STATE(3),
    [sym_bool] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_string] = STATE(14),
    [sym_string_simple] = STATE(12),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_nil] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [aux_sym_integer_token4] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      sym_comment,
    ACTIONS(43), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(41), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [25] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      sym_comment,
    ACTIONS(49), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(47), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [50] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(55), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(53), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [72] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(59), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(57), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [94] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(63), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(61), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [116] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(67), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(65), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(71), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(69), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [160] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(75), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(73), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [182] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(77), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [204] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(83), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(81), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [226] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(87), 2,
      aux_sym_integer_token1,
      sym_float,
    ACTIONS(85), 9,
      sym_char,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [248] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_string_simple_interpolation_start,
    ACTIONS(97), 1,
      sym_string_simple_uninterpolation_start,
    ACTIONS(91), 2,
      sym_string_simple_content,
      sym_string_simple_escape,
    STATE(15), 2,
      sym_comment,
      aux_sym_string_simple_repeat1,
    STATE(19), 2,
      sym_string_simple_interpolation,
      sym_string_simple_uninterpolation,
  [273] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_string_simple_interpolation_start,
    ACTIONS(106), 1,
      sym_string_simple_uninterpolation_start,
    STATE(15), 1,
      aux_sym_string_simple_repeat1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_string_simple_content,
      sym_string_simple_escape,
    STATE(19), 2,
      sym_string_simple_interpolation,
      sym_string_simple_uninterpolation,
  [300] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_string_simple_interpolation_start,
    ACTIONS(106), 1,
      sym_string_simple_uninterpolation_start,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_simple_repeat1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_string_simple_content,
      sym_string_simple_escape,
    STATE(19), 2,
      sym_string_simple_interpolation,
      sym_string_simple_uninterpolation,
  [327] = 5,
    ACTIONS(110), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    STATE(32), 1,
      sym_comment_directive,
    ACTIONS(114), 3,
      anon_sym_COLONditto_COLON,
      anon_sym_COLONnodoc_COLON,
      anon_sym_COLONinherit_COLON,
  [345] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(116), 5,
      sym_string_simple_content,
      sym_string_simple_escape,
      sym_string_simple_interpolation_start,
      sym_string_simple_uninterpolation_start,
      anon_sym_DQUOTE,
  [359] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(118), 5,
      sym_string_simple_content,
      sym_string_simple_escape,
      sym_string_simple_interpolation_start,
      sym_string_simple_uninterpolation_start,
      anon_sym_DQUOTE,
  [373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(120), 5,
      sym_string_simple_content,
      sym_string_simple_escape,
      sym_string_simple_interpolation_start,
      sym_string_simple_uninterpolation_start,
      anon_sym_DQUOTE,
  [387] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(122), 5,
      sym_string_simple_content,
      sym_string_simple_escape,
      sym_string_simple_interpolation_start,
      sym_string_simple_uninterpolation_start,
      anon_sym_DQUOTE,
  [401] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(124), 5,
      sym_string_simple_content,
      sym_string_simple_escape,
      sym_string_simple_interpolation_start,
      sym_string_simple_uninterpolation_start,
      anon_sym_DQUOTE,
  [415] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_string_simple_interpolation_end,
    STATE(24), 1,
      sym_comment,
  [428] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_string_simple_uninterpolation_end,
    STATE(25), 1,
      sym_comment,
  [441] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string_simple,
    STATE(26), 1,
      sym_comment,
  [454] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_string_simple,
    STATE(27), 1,
      sym_comment,
  [467] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      sym_nil,
    STATE(28), 1,
      sym_comment,
  [477] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      sym_nil,
    STATE(29), 1,
      sym_comment,
  [487] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_comment,
  [497] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [501] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 25,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 300,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 387,
  [SMALL_STATE(23)] = 401,
  [SMALL_STATE(24)] = 415,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 441,
  [SMALL_STATE(27)] = 454,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 497,
  [SMALL_STATE(32)] = 501,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 5, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 5, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 4, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 4, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(19),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(28),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple_interpolation_end, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple_interpolation, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple_uninterpolation_end, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple_uninterpolation, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
