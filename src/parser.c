#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_char = 9,
  anon_sym_POUND = 10,
  aux_sym_comment_token1 = 11,
  anon_sym_COLONditto_COLON = 12,
  anon_sym_COLONnodoc_COLON = 13,
  anon_sym_COLONinherit_COLON = 14,
  sym_program = 15,
  sym_statements = 16,
  sym_statement = 17,
  sym_expression = 18,
  sym_bool = 19,
  sym_integer = 20,
  sym_comment = 21,
  sym_comment_directive = 22,
  aux_sym_program_repeat1 = 23,
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
  [sym_char] = "char",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COLONditto_COLON] = ":ditto:",
  [anon_sym_COLONnodoc_COLON] = ":nodoc:",
  [anon_sym_COLONinherit_COLON] = ":inherit:",
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
  [sym_char] = sym_char,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COLONditto_COLON] = anon_sym_COLONditto_COLON,
  [anon_sym_COLONnodoc_COLON] = anon_sym_COLONnodoc_COLON,
  [anon_sym_COLONinherit_COLON] = anon_sym_COLONinherit_COLON,
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
  [sym_char] = {
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
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(1);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(1);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 90},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 91},
  [13] = {(TSStateId)(-1)},
  [14] = {(TSStateId)(-1)},
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
    [sym_char] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_COLONditto_COLON] = ACTIONS(1),
    [anon_sym_COLONnodoc_COLON] = ACTIONS(1),
    [anon_sym_COLONinherit_COLON] = ACTIONS(1),
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
    [sym_char] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(36),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(44),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_char] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(3),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
