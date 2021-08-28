#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

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
  sym_string_leading_backslash = 15,
  anon_sym_RBRACE = 16,
  sym_char = 17,
  sym_string_content = 18,
  sym_string_escape = 19,
  sym_string_interpolation_start = 20,
  sym_string_percent_start = 21,
  sym_string_percent_end = 22,
  sym_string_heredoc_start = 23,
  sym_string_heredoc_ident = 24,
  sym_string_heredoc_content = 25,
  sym_string_heredoc_end = 26,
  sym_program = 27,
  sym_statements = 28,
  sym_statement = 29,
  sym_expression = 30,
  sym_comment = 31,
  sym_comment_directive = 32,
  sym_bool = 33,
  sym_integer = 34,
  sym_string = 35,
  sym__string_inner = 36,
  sym__string_literal = 37,
  sym_string_literal = 38,
  sym_string_interpolation = 39,
  sym_string_percent = 40,
  sym_string_heredoc_head = 41,
  sym_string_heredoc_tail = 42,
  aux_sym_program_repeat1 = 43,
  aux_sym__string_literal_repeat1 = 44,
  aux_sym_string_literal_repeat1 = 45,
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
  [sym_string_leading_backslash] = "string_leading_backslash",
  [anon_sym_RBRACE] = "}",
  [sym_char] = "char",
  [sym_string_content] = "string_content",
  [sym_string_escape] = "string_escape",
  [sym_string_interpolation_start] = "",
  [sym_string_percent_start] = "",
  [sym_string_percent_end] = "",
  [sym_string_heredoc_start] = "string_heredoc_start",
  [sym_string_heredoc_ident] = "string_heredoc_ident",
  [sym_string_heredoc_content] = "string_heredoc_content",
  [sym_string_heredoc_end] = "string_heredoc_end",
  [sym_program] = "program",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_comment_directive] = "comment_directive",
  [sym_bool] = "bool",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym__string_inner] = "_string_inner",
  [sym__string_literal] = "_string_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_interpolation] = "string_interpolation",
  [sym_string_percent] = "string_percent",
  [sym_string_heredoc_head] = "string_heredoc_head",
  [sym_string_heredoc_tail] = "string_heredoc_tail",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
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
  [sym_string_leading_backslash] = sym_string_leading_backslash,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_char] = sym_char,
  [sym_string_content] = sym_string_content,
  [sym_string_escape] = sym_string_escape,
  [sym_string_interpolation_start] = sym_string_interpolation_start,
  [sym_string_percent_start] = sym_string_interpolation_start,
  [sym_string_percent_end] = sym_string_interpolation_start,
  [sym_string_heredoc_start] = sym_string_heredoc_start,
  [sym_string_heredoc_ident] = sym_string_heredoc_ident,
  [sym_string_heredoc_content] = sym_string_heredoc_content,
  [sym_string_heredoc_end] = sym_string_heredoc_end,
  [sym_program] = sym_program,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_comment_directive] = sym_comment_directive,
  [sym_bool] = sym_bool,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym__string_inner] = sym__string_inner,
  [sym__string_literal] = sym__string_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_string_percent] = sym_string_percent,
  [sym_string_heredoc_head] = sym_string_heredoc_head,
  [sym_string_heredoc_tail] = sym_string_heredoc_tail,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
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
  [sym_string_leading_backslash] = {
    .visible = true,
    .named = true,
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
  [sym_string_interpolation_start] = {
    .visible = true,
    .named = false,
  },
  [sym_string_percent_start] = {
    .visible = true,
    .named = false,
  },
  [sym_string_percent_end] = {
    .visible = true,
    .named = false,
  },
  [sym_string_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [sym_string_heredoc_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string_heredoc_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_heredoc_end] = {
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
  [sym__string_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
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
  [sym_string_heredoc_head] = {
    .visible = true,
    .named = true,
  },
  [sym_string_heredoc_tail] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
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
      ACCEPT_TOKEN(sym_string_leading_backslash);
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
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 4},
  [22] = {.lex_state = 0, .external_lex_state = 5},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 5},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 45, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 5},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 5},
  [34] = {.lex_state = 0, .external_lex_state = 5},
  [35] = {.lex_state = 0, .external_lex_state = 4},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 0, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 7},
  [45] = {.lex_state = 0, .external_lex_state = 6},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 6},
  [48] = {(TSStateId)(-1)},
  [49] = {(TSStateId)(-1)},
  [50] = {(TSStateId)(-1)},
  [51] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_char = 0,
  ts_external_token_string_content = 1,
  ts_external_token_string_escape = 2,
  ts_external_token_string_interpolation_start = 3,
  ts_external_token_string_percent_start = 4,
  ts_external_token_string_percent_end = 5,
  ts_external_token_string_heredoc_start = 6,
  ts_external_token_string_heredoc_ident = 7,
  ts_external_token_string_heredoc_content = 8,
  ts_external_token_string_heredoc_end = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_char] = sym_char,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token_string_escape] = sym_string_escape,
  [ts_external_token_string_interpolation_start] = sym_string_interpolation_start,
  [ts_external_token_string_percent_start] = sym_string_percent_start,
  [ts_external_token_string_percent_end] = sym_string_percent_end,
  [ts_external_token_string_heredoc_start] = sym_string_heredoc_start,
  [ts_external_token_string_heredoc_ident] = sym_string_heredoc_ident,
  [ts_external_token_string_heredoc_content] = sym_string_heredoc_content,
  [ts_external_token_string_heredoc_end] = sym_string_heredoc_end,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_char] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token_string_escape] = true,
    [ts_external_token_string_interpolation_start] = true,
    [ts_external_token_string_percent_start] = true,
    [ts_external_token_string_percent_end] = true,
    [ts_external_token_string_heredoc_start] = true,
    [ts_external_token_string_heredoc_ident] = true,
    [ts_external_token_string_heredoc_content] = true,
    [ts_external_token_string_heredoc_end] = true,
  },
  [2] = {
    [ts_external_token_char] = true,
    [ts_external_token_string_percent_start] = true,
    [ts_external_token_string_heredoc_start] = true,
    [ts_external_token_string_heredoc_content] = true,
  },
  [3] = {
    [ts_external_token_string_content] = true,
    [ts_external_token_string_escape] = true,
    [ts_external_token_string_interpolation_start] = true,
    [ts_external_token_string_heredoc_content] = true,
    [ts_external_token_string_heredoc_end] = true,
  },
  [4] = {
    [ts_external_token_string_content] = true,
    [ts_external_token_string_escape] = true,
    [ts_external_token_string_interpolation_start] = true,
    [ts_external_token_string_heredoc_content] = true,
  },
  [5] = {
    [ts_external_token_string_content] = true,
    [ts_external_token_string_escape] = true,
    [ts_external_token_string_interpolation_start] = true,
    [ts_external_token_string_percent_end] = true,
    [ts_external_token_string_heredoc_content] = true,
  },
  [6] = {
    [ts_external_token_string_heredoc_content] = true,
  },
  [7] = {
    [ts_external_token_string_heredoc_ident] = true,
    [ts_external_token_string_heredoc_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_string_heredoc_tail] = STATE(0),
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
    [sym_string_leading_backslash] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [sym_string_interpolation_start] = ACTIONS(1),
    [sym_string_percent_start] = ACTIONS(1),
    [sym_string_percent_end] = ACTIONS(1),
    [sym_string_heredoc_start] = ACTIONS(1),
    [sym_string_heredoc_ident] = ACTIONS(1),
    [sym_string_heredoc_content] = ACTIONS(5),
    [sym_string_heredoc_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(43),
    [sym_statements] = STATE(11),
    [sym_statement] = STATE(12),
    [sym_expression] = STATE(13),
    [sym_comment] = STATE(1),
    [sym_bool] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_string] = STATE(15),
    [sym__string_literal] = STATE(4),
    [sym_string_literal] = STATE(14),
    [sym_string_percent] = STATE(14),
    [sym_string_heredoc_head] = STATE(14),
    [sym_string_heredoc_tail] = STATE(1),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_string_heredoc_start] = ACTIONS(23),
    [sym_string_heredoc_content] = ACTIONS(5),
  },
  [2] = {
    [sym_statements] = STATE(11),
    [sym_statement] = STATE(12),
    [sym_expression] = STATE(13),
    [sym_comment] = STATE(2),
    [sym_bool] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_string] = STATE(15),
    [sym__string_literal] = STATE(4),
    [sym_string_literal] = STATE(14),
    [sym_string_percent] = STATE(14),
    [sym_string_heredoc_head] = STATE(14),
    [sym_string_heredoc_tail] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_string_heredoc_start] = ACTIONS(48),
    [sym_string_heredoc_content] = ACTIONS(5),
  },
  [3] = {
    [sym_statements] = STATE(11),
    [sym_statement] = STATE(12),
    [sym_expression] = STATE(13),
    [sym_comment] = STATE(3),
    [sym_bool] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_string] = STATE(15),
    [sym__string_literal] = STATE(4),
    [sym_string_literal] = STATE(14),
    [sym_string_percent] = STATE(14),
    [sym_string_heredoc_head] = STATE(14),
    [sym_string_heredoc_tail] = STATE(3),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_string_heredoc_start] = ACTIONS(23),
    [sym_string_heredoc_content] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(57), 1,
      sym_string_leading_backslash,
    STATE(6), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(55), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(4), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(53), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [34] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(63), 1,
      sym_string_leading_backslash,
    ACTIONS(61), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(5), 3,
      sym_comment,
      sym_string_heredoc_tail,
      aux_sym_string_literal_repeat1,
    ACTIONS(59), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [66] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(57), 1,
      sym_string_leading_backslash,
    STATE(5), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(68), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(6), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(66), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [100] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(61), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(7), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(59), 12,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
      sym_string_leading_backslash,
  [129] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(72), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(8), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(70), 12,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
      sym_string_leading_backslash,
  [158] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(76), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(9), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(74), 12,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
      sym_string_leading_backslash,
  [187] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(80), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(10), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(78), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [215] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(84), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(11), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(82), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [243] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(88), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(12), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(86), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [271] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(92), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(13), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(90), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(96), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(14), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(94), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(100), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(15), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(98), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [355] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(104), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(16), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(102), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [383] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(108), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(17), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(106), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [411] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(112), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(18), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(110), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [439] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(116), 2,
      aux_sym_integer_token1,
      sym_float,
    STATE(19), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(114), 11,
      sym_char,
      sym_string_percent_start,
      sym_string_heredoc_start,
      ts_builtin_sym_end,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      anon_sym_DQUOTE,
  [467] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(121), 1,
      sym_string_interpolation_start,
    ACTIONS(124), 1,
      sym_string_heredoc_end,
    STATE(31), 1,
      sym__string_inner,
    STATE(37), 1,
      sym_string_interpolation,
    ACTIONS(118), 2,
      sym_string_content,
      sym_string_escape,
    STATE(20), 3,
      sym_comment,
      sym_string_heredoc_tail,
      aux_sym__string_literal_repeat1,
  [495] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_string_interpolation_start,
    STATE(35), 1,
      sym_string_interpolation,
    STATE(36), 1,
      sym__string_inner,
    ACTIONS(126), 2,
      sym_string_content,
      sym_string_escape,
    STATE(21), 3,
      sym_comment,
      sym_string_heredoc_tail,
      aux_sym__string_literal_repeat1,
  [523] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(124), 1,
      sym_string_percent_end,
    ACTIONS(135), 1,
      sym_string_interpolation_start,
    STATE(30), 1,
      sym__string_inner,
    STATE(33), 1,
      sym_string_interpolation,
    ACTIONS(132), 2,
      sym_string_content,
      sym_string_escape,
    STATE(22), 3,
      sym_comment,
      sym_string_heredoc_tail,
      aux_sym__string_literal_repeat1,
  [551] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_string_interpolation_start,
    STATE(28), 1,
      aux_sym__string_literal_repeat1,
    STATE(35), 1,
      sym_string_interpolation,
    STATE(36), 1,
      sym__string_inner,
    ACTIONS(140), 2,
      sym_string_content,
      sym_string_escape,
    STATE(23), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [581] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(146), 1,
      sym_string_interpolation_start,
    ACTIONS(148), 1,
      sym_string_heredoc_end,
    STATE(20), 1,
      aux_sym__string_literal_repeat1,
    STATE(31), 1,
      sym__string_inner,
    STATE(37), 1,
      sym_string_interpolation,
    ACTIONS(144), 2,
      sym_string_content,
      sym_string_escape,
    STATE(24), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [611] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(152), 1,
      sym_string_interpolation_start,
    ACTIONS(154), 1,
      sym_string_percent_end,
    STATE(26), 1,
      aux_sym__string_literal_repeat1,
    STATE(30), 1,
      sym__string_inner,
    STATE(33), 1,
      sym_string_interpolation,
    ACTIONS(150), 2,
      sym_string_content,
      sym_string_escape,
    STATE(25), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [641] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(152), 1,
      sym_string_interpolation_start,
    ACTIONS(156), 1,
      sym_string_percent_end,
    STATE(22), 1,
      aux_sym__string_literal_repeat1,
    STATE(30), 1,
      sym__string_inner,
    STATE(33), 1,
      sym_string_interpolation,
    ACTIONS(150), 2,
      sym_string_content,
      sym_string_escape,
    STATE(26), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [671] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(146), 1,
      sym_string_interpolation_start,
    ACTIONS(158), 1,
      sym_string_heredoc_end,
    STATE(24), 1,
      aux_sym__string_literal_repeat1,
    STATE(31), 1,
      sym__string_inner,
    STATE(37), 1,
      sym_string_interpolation,
    ACTIONS(144), 2,
      sym_string_content,
      sym_string_escape,
    STATE(27), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [701] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(142), 1,
      sym_string_interpolation_start,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym__string_literal_repeat1,
    STATE(35), 1,
      sym_string_interpolation,
    STATE(36), 1,
      sym__string_inner,
    ACTIONS(140), 2,
      sym_string_content,
      sym_string_escape,
    STATE(28), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [731] = 6,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(162), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment_directive,
    STATE(29), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(166), 3,
      anon_sym_COLONditto_COLON,
      anon_sym_COLONnodoc_COLON,
      anon_sym_COLONinherit_COLON,
  [753] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(30), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(168), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      sym_string_percent_end,
  [770] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(31), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(168), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      sym_string_heredoc_end,
  [787] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(32), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(170), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      sym_string_heredoc_end,
  [804] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(33), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(172), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      sym_string_percent_end,
  [821] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(34), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(170), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      sym_string_percent_end,
  [838] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(35), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(172), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      anon_sym_DQUOTE,
  [855] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(36), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(168), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      anon_sym_DQUOTE,
  [872] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(37), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(172), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      sym_string_heredoc_end,
  [889] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    STATE(38), 2,
      sym_comment,
      sym_string_heredoc_tail,
    ACTIONS(170), 4,
      sym_string_content,
      sym_string_escape,
      sym_string_interpolation_start,
      anon_sym_DQUOTE,
  [906] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym__string_literal,
    STATE(39), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [937] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [951] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(178), 1,
      sym_nil,
    STATE(42), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [965] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(43), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [979] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(182), 1,
      sym_string_heredoc_ident,
    STATE(44), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [993] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(184), 1,
      sym_nil,
    STATE(45), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [1007] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [1021] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_string_heredoc_content,
    ACTIONS(188), 1,
      sym_nil,
    STATE(47), 2,
      sym_comment,
      sym_string_heredoc_tail,
  [1035] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [1039] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [1043] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [1047] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 411,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 467,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 551,
  [SMALL_STATE(24)] = 581,
  [SMALL_STATE(25)] = 611,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 671,
  [SMALL_STATE(28)] = 701,
  [SMALL_STATE(29)] = 731,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 770,
  [SMALL_STATE(32)] = 787,
  [SMALL_STATE(33)] = 804,
  [SMALL_STATE(34)] = 821,
  [SMALL_STATE(35)] = 838,
  [SMALL_STATE(36)] = 855,
  [SMALL_STATE(37)] = 872,
  [SMALL_STATE(38)] = 889,
  [SMALL_STATE(39)] = 906,
  [SMALL_STATE(40)] = 923,
  [SMALL_STATE(41)] = 937,
  [SMALL_STATE(42)] = 951,
  [SMALL_STATE(43)] = 965,
  [SMALL_STATE(44)] = 979,
  [SMALL_STATE(45)] = 993,
  [SMALL_STATE(46)] = 1007,
  [SMALL_STATE(47)] = 1021,
  [SMALL_STATE(48)] = 1035,
  [SMALL_STATE(49)] = 1039,
  [SMALL_STATE(50)] = 1043,
  [SMALL_STATE(51)] = 1047,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_heredoc_head, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_heredoc_head, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_percent, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_percent, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_percent, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_percent, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(37),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(35),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(42),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(33),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_inner, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_heredoc_tail, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_heredoc_tail, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
