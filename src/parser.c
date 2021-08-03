#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_nil = 1,
  anon_sym_true = 2,
  anon_sym_false = 3,
  aux_sym_integer_token1 = 4,
  aux_sym_integer_token2 = 5,
  aux_sym_integer_token3 = 6,
  aux_sym_integer_token4 = 7,
  sym_float = 8,
  anon_sym_POUND = 9,
  aux_sym_comment_token1 = 10,
  anon_sym_COLONditto_COLON = 11,
  anon_sym_COLONnodoc_COLON = 12,
  anon_sym_COLONinherit_COLON = 13,
  sym_char = 14,
  sym_string_normal = 15,
  sym_string_percent_literal = 16,
  sym_string_rdoc = 17,
  sym_program = 18,
  sym_statements = 19,
  sym_statement = 20,
  sym_expression = 21,
  sym_bool = 22,
  sym_integer = 23,
  sym_comment = 24,
  sym_comment_directive = 25,
  aux_sym_program_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [sym_float] = "float",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COLONditto_COLON] = ":ditto:",
  [anon_sym_COLONnodoc_COLON] = ":nodoc:",
  [anon_sym_COLONinherit_COLON] = ":inherit:",
  [sym_char] = "char",
  [sym_string_normal] = "string_normal",
  [sym_string_percent_literal] = "string_percent_literal",
  [sym_string_rdoc] = "string_rdoc",
  [sym_program] = "program",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_bool] = "bool",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [sym_comment_directive] = "comment_directive",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [sym_float] = sym_float,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COLONditto_COLON] = anon_sym_COLONditto_COLON,
  [anon_sym_COLONnodoc_COLON] = anon_sym_COLONnodoc_COLON,
  [anon_sym_COLONinherit_COLON] = anon_sym_COLONinherit_COLON,
  [sym_char] = sym_char,
  [sym_string_normal] = sym_string_normal,
  [sym_string_percent_literal] = sym_string_percent_literal,
  [sym_string_rdoc] = sym_string_rdoc,
  [sym_program] = sym_program,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_bool] = sym_bool,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [sym_comment_directive] = sym_comment_directive,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string_normal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_percent_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_rdoc] = {
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
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(82);
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
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(45);
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
      if (lookahead == 'l') ADVANCE(43);
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
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 47:
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
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 58},
  [13] = {(TSStateId)(-1)},
  [14] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_char = 0,
  ts_external_token_string_normal = 1,
  ts_external_token_string_percent_literal = 2,
  ts_external_token_string_rdoc = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_char] = sym_char,
  [ts_external_token_string_normal] = sym_string_normal,
  [ts_external_token_string_percent_literal] = sym_string_percent_literal,
  [ts_external_token_string_rdoc] = sym_string_rdoc,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_char] = true,
    [ts_external_token_string_normal] = true,
    [ts_external_token_string_percent_literal] = true,
    [ts_external_token_string_rdoc] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_comment_directive] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_COLONditto_COLON] = ACTIONS(1),
    [anon_sym_COLONnodoc_COLON] = ACTIONS(1),
    [anon_sym_COLONinherit_COLON] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string_normal] = ACTIONS(1),
    [sym_string_percent_literal] = ACTIONS(1),
    [sym_string_rdoc] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(11),
    [sym_statements] = STATE(7),
    [sym_statement] = STATE(8),
    [sym_expression] = STATE(9),
    [sym_bool] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_comment] = STATE(1),
    [sym_comment_directive] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [aux_sym_integer_token4] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(7),
    [sym_string_normal] = ACTIONS(7),
    [sym_string_percent_literal] = ACTIONS(7),
    [sym_string_rdoc] = ACTIONS(7),
  },
  [2] = {
    [sym_statements] = STATE(7),
    [sym_statement] = STATE(8),
    [sym_expression] = STATE(9),
    [sym_bool] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_comment] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_nil] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_integer_token3] = ACTIONS(13),
    [aux_sym_integer_token4] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(7),
    [sym_string_normal] = ACTIONS(7),
    [sym_string_percent_literal] = ACTIONS(7),
    [sym_string_rdoc] = ACTIONS(7),
  },
  [3] = {
    [sym_statements] = STATE(7),
    [sym_statement] = STATE(8),
    [sym_expression] = STATE(9),
    [sym_bool] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_comment] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_nil] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(24),
    [anon_sym_false] = ACTIONS(24),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(30),
    [aux_sym_integer_token3] = ACTIONS(30),
    [aux_sym_integer_token4] = ACTIONS(30),
    [sym_float] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(21),
    [sym_string_normal] = ACTIONS(21),
    [sym_string_percent_literal] = ACTIONS(21),
    [sym_string_rdoc] = ACTIONS(21),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_comment_directive] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_nil] = ACTIONS(36),
    [anon_sym_true] = ACTIONS(36),
    [anon_sym_false] = ACTIONS(36),
    [aux_sym_integer_token1] = ACTIONS(38),
    [aux_sym_integer_token2] = ACTIONS(36),
    [aux_sym_integer_token3] = ACTIONS(36),
    [aux_sym_integer_token4] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(36),
    [sym_string_normal] = ACTIONS(36),
    [sym_string_percent_literal] = ACTIONS(36),
    [sym_string_rdoc] = ACTIONS(36),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [sym_comment_directive] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_nil] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(40),
    [anon_sym_false] = ACTIONS(40),
    [aux_sym_integer_token1] = ACTIONS(42),
    [aux_sym_integer_token2] = ACTIONS(40),
    [aux_sym_integer_token3] = ACTIONS(40),
    [aux_sym_integer_token4] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(40),
    [sym_string_normal] = ACTIONS(40),
    [sym_string_percent_literal] = ACTIONS(40),
    [sym_string_rdoc] = ACTIONS(40),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym_comment_directive] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_nil] = ACTIONS(44),
    [anon_sym_true] = ACTIONS(44),
    [anon_sym_false] = ACTIONS(44),
    [aux_sym_integer_token1] = ACTIONS(46),
    [aux_sym_integer_token2] = ACTIONS(44),
    [aux_sym_integer_token3] = ACTIONS(44),
    [aux_sym_integer_token4] = ACTIONS(44),
    [sym_float] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(44),
    [sym_string_normal] = ACTIONS(44),
    [sym_string_percent_literal] = ACTIONS(44),
    [sym_string_rdoc] = ACTIONS(44),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym_comment_directive] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_nil] = ACTIONS(48),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [aux_sym_integer_token1] = ACTIONS(50),
    [aux_sym_integer_token2] = ACTIONS(48),
    [aux_sym_integer_token3] = ACTIONS(48),
    [aux_sym_integer_token4] = ACTIONS(48),
    [sym_float] = ACTIONS(50),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(48),
    [sym_string_normal] = ACTIONS(48),
    [sym_string_percent_literal] = ACTIONS(48),
    [sym_string_rdoc] = ACTIONS(48),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym_comment_directive] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [aux_sym_integer_token1] = ACTIONS(54),
    [aux_sym_integer_token2] = ACTIONS(52),
    [aux_sym_integer_token3] = ACTIONS(52),
    [aux_sym_integer_token4] = ACTIONS(52),
    [sym_float] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(52),
    [sym_string_normal] = ACTIONS(52),
    [sym_string_percent_literal] = ACTIONS(52),
    [sym_string_rdoc] = ACTIONS(52),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym_comment_directive] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_nil] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(56),
    [aux_sym_integer_token1] = ACTIONS(58),
    [aux_sym_integer_token2] = ACTIONS(56),
    [aux_sym_integer_token3] = ACTIONS(56),
    [aux_sym_integer_token4] = ACTIONS(56),
    [sym_float] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_char] = ACTIONS(56),
    [sym_string_normal] = ACTIONS(56),
    [sym_string_percent_literal] = ACTIONS(56),
    [sym_string_rdoc] = ACTIONS(56),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(60), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      aux_sym_comment_token1,
    STATE(10), 2,
      sym_comment,
      sym_comment_directive,
    ACTIONS(64), 3,
      anon_sym_COLONditto_COLON,
      anon_sym_COLONnodoc_COLON,
      anon_sym_COLONinherit_COLON,
  [16] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_comment,
      sym_comment_directive,
  [27] = 3,
    ACTIONS(60), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      aux_sym_comment_token1,
    STATE(12), 2,
      sym_comment,
      sym_comment_directive,
  [38] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [42] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 16,
  [SMALL_STATE(12)] = 27,
  [SMALL_STATE(13)] = 38,
  [SMALL_STATE(14)] = 42,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3),
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
