#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 18
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_param_block = 1,
  anon_sym_if = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_signature_block = 5,
  anon_sym_DOLLARTRUE = 6,
  anon_sym_DOLLARFALSE = 7,
  sym_user_variable = 8,
  sym_number = 9,
  sym_comment = 10,
  sym_script = 11,
  sym_script_block = 12,
  sym_statement = 13,
  sym_if = 14,
  sym_boolean_value = 15,
  aux_sym_script_block_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_param_block] = "param_block",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_signature_block] = "signature_block",
  [anon_sym_DOLLARTRUE] = "$TRUE",
  [anon_sym_DOLLARFALSE] = "$FALSE",
  [sym_user_variable] = "user_variable",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_script] = "script",
  [sym_script_block] = "script_block",
  [sym_statement] = "statement",
  [sym_if] = "if",
  [sym_boolean_value] = "boolean_value",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_param_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_signature_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLARTRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARFALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_user_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == 'P')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'I')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'G')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_signature_block);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'F')
        ADVANCE(9);
      if (lookahead == 'T')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'A')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'L')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'S')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'E')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOLLARFALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_user_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'R')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'U')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'E')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOLLARTRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '+')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == 'E')
        ADVANCE(23);
      if (lookahead == 'X')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(23);
      if (lookahead == 'x')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '#')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '#')
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '?')
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 33:
      if (lookahead == ':')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'A')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'R')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'A')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'M')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_param_block);
      END_STATE();
    case 40:
      if (lookahead == 'f')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == 'E')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == 'P')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == 'i')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 45},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_param_block] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_signature_block] = ACTIONS(3),
    [anon_sym_DOLLARTRUE] = ACTIONS(3),
    [anon_sym_DOLLARFALSE] = ACTIONS(3),
    [sym_user_variable] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_script] = STATE(6),
    [sym_script_block] = STATE(7),
    [sym_statement] = STATE(8),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(9),
    [sym_param_block] = ACTIONS(10),
    [anon_sym_if] = ACTIONS(12),
    [anon_sym_DOLLARTRUE] = ACTIONS(14),
    [anon_sym_DOLLARFALSE] = ACTIONS(14),
    [sym_user_variable] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(20),
  },
  [2] = {
    [sym_script_block] = STATE(10),
    [sym_statement] = STATE(8),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(9),
    [anon_sym_if] = ACTIONS(12),
    [anon_sym_DOLLARTRUE] = ACTIONS(14),
    [anon_sym_DOLLARFALSE] = ACTIONS(14),
    [sym_user_variable] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(20),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(22),
    [sym_comment] = ACTIONS(20),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_if] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(26),
    [anon_sym_DOLLARTRUE] = ACTIONS(26),
    [anon_sym_DOLLARFALSE] = ACTIONS(26),
    [sym_user_variable] = ACTIONS(28),
    [sym_number] = ACTIONS(26),
    [sym_comment] = ACTIONS(30),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(32),
    [sym_signature_block] = ACTIONS(34),
    [anon_sym_DOLLARTRUE] = ACTIONS(34),
    [anon_sym_DOLLARFALSE] = ACTIONS(34),
    [sym_user_variable] = ACTIONS(36),
    [sym_number] = ACTIONS(34),
    [sym_comment] = ACTIONS(30),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_comment] = ACTIONS(20),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(42),
    [sym_comment] = ACTIONS(30),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(44),
    [sym_signature_block] = ACTIONS(46),
    [anon_sym_DOLLARTRUE] = ACTIONS(46),
    [anon_sym_DOLLARFALSE] = ACTIONS(46),
    [sym_user_variable] = ACTIONS(48),
    [sym_number] = ACTIONS(46),
    [sym_comment] = ACTIONS(30),
  },
  [9] = {
    [sym_statement] = STATE(8),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(12),
    [sym_signature_block] = ACTIONS(52),
    [anon_sym_DOLLARTRUE] = ACTIONS(14),
    [anon_sym_DOLLARFALSE] = ACTIONS(14),
    [sym_user_variable] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(30),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_signature_block] = ACTIONS(56),
    [sym_comment] = ACTIONS(30),
  },
  [11] = {
    [sym_boolean_value] = STATE(16),
    [anon_sym_DOLLARTRUE] = ACTIONS(58),
    [anon_sym_DOLLARFALSE] = ACTIONS(58),
    [sym_comment] = ACTIONS(20),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_comment] = ACTIONS(20),
  },
  [13] = {
    [sym_statement] = STATE(8),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(62),
    [sym_signature_block] = ACTIONS(65),
    [anon_sym_DOLLARTRUE] = ACTIONS(67),
    [anon_sym_DOLLARFALSE] = ACTIONS(67),
    [sym_user_variable] = ACTIONS(70),
    [sym_number] = ACTIONS(73),
    [sym_comment] = ACTIONS(30),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_comment] = ACTIONS(20),
  },
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(24),
    [sym_comment] = ACTIONS(20),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_comment] = ACTIONS(20),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(80),
    [sym_signature_block] = ACTIONS(82),
    [anon_sym_DOLLARTRUE] = ACTIONS(82),
    [anon_sym_DOLLARFALSE] = ACTIONS(82),
    [sym_user_variable] = ACTIONS(84),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(30),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [62] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [67] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 4),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 4),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_powershell() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
