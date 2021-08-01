#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_letx = 1,
  anon_sym_lety = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_COLONditto_COLON = 5,
  anon_sym_COLONnodoc_COLON = 6,
  anon_sym_COLONinherit_COLON = 7,
  sym_program = 8,
  sym_statements = 9,
  sym_comment = 10,
  sym_comment_directive = 11,
  aux_sym_program_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_letx] = "let x",
  [anon_sym_lety] = "let y",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COLONditto_COLON] = ":ditto:",
  [anon_sym_COLONnodoc_COLON] = ":nodoc:",
  [anon_sym_COLONinherit_COLON] = ":inherit:",
  [sym_program] = "program",
  [sym_statements] = "statements",
  [sym_comment] = "comment",
  [sym_comment_directive] = "comment_directive",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_letx] = anon_sym_letx,
  [anon_sym_lety] = anon_sym_lety,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COLONditto_COLON] = anon_sym_COLONditto_COLON,
  [anon_sym_COLONnodoc_COLON] = anon_sym_COLONnodoc_COLON,
  [anon_sym_COLONinherit_COLON] = anon_sym_COLONinherit_COLON,
  [sym_program] = sym_program,
  [sym_statements] = sym_statements,
  [sym_comment] = sym_comment,
  [sym_comment_directive] = sym_comment_directive,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_letx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lety] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_letx);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_lety);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLONditto_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLONnodoc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLONinherit_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
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
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 47},
  [9] = {(TSStateId)(-1)},
  [10] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_comment_directive] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_letx] = ACTIONS(1),
    [anon_sym_lety] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_COLONditto_COLON] = ACTIONS(1),
    [anon_sym_COLONnodoc_COLON] = ACTIONS(1),
    [anon_sym_COLONinherit_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_statements] = STATE(6),
    [sym_comment] = STATE(1),
    [sym_comment_directive] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_letx] = ACTIONS(7),
    [anon_sym_lety] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [2] = {
    [sym_statements] = STATE(6),
    [sym_comment] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_letx] = ACTIONS(7),
    [anon_sym_lety] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym_statements] = STATE(6),
    [sym_comment] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_letx] = ACTIONS(13),
    [anon_sym_lety] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_comment_directive] = STATE(4),
    [anon_sym_POUND] = ACTIONS(16),
    [aux_sym_comment_token1] = ACTIONS(18),
    [anon_sym_COLONditto_COLON] = ACTIONS(20),
    [anon_sym_COLONnodoc_COLON] = ACTIONS(20),
    [anon_sym_COLONinherit_COLON] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(5), 2,
      sym_comment,
      sym_comment_directive,
    ACTIONS(22), 3,
      ts_builtin_sym_end,
      anon_sym_letx,
      anon_sym_lety,
  [13] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 2,
      sym_comment,
      sym_comment_directive,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      anon_sym_letx,
      anon_sym_lety,
  [26] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_comment,
      sym_comment_directive,
  [37] = 3,
    ACTIONS(16), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      aux_sym_comment_token1,
    STATE(8), 2,
      sym_comment,
      sym_comment_directive,
  [48] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [52] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 13,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 48,
  [SMALL_STATE(10)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [26] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3),
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
