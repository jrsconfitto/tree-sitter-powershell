#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 20
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  anon_sym_CARET = 7,
  anon_sym_DOLLARTRUE = 8,
  anon_sym_DOLLARFALSE = 9,
  sym_user_variable = 10,
  sym_number = 11,
  sym_comment = 12,
  sym_program = 13,
  sym_assignment_statement = 14,
  sym_expression_statement = 15,
  sym_expression = 16,
  sym_boolean_value = 17,
  aux_sym_program_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLARTRUE] = "$TRUE",
  [anon_sym_DOLLARFALSE] = "$FALSE",
  [sym_user_variable] = "user_variable",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_boolean_value] = "boolean_value",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'F')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'A')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'L')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'S')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'E')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLARFALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_user_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'R')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'U')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_user_variable);
      if (lookahead == 'E')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOLLARTRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'X')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == 'x')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      if (lookahead == '#')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '?')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 31:
      if (lookahead == ':')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 36},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLARTRUE] = ACTIONS(3),
    [anon_sym_DOLLARFALSE] = ACTIONS(3),
    [sym_user_variable] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_assignment_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_expression] = STATE(7),
    [sym_boolean_value] = STATE(4),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(20),
    [anon_sym_PLUS] = ACTIONS(20),
    [anon_sym_DASH] = ACTIONS(20),
    [anon_sym_STAR] = ACTIONS(20),
    [anon_sym_SLASH] = ACTIONS(20),
    [anon_sym_CARET] = ACTIONS(20),
    [sym_comment] = ACTIONS(18),
  },
  [3] = {
    [anon_sym_EQ] = ACTIONS(22),
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [anon_sym_CARET] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [anon_sym_CARET] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(18),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_DOLLARTRUE] = ACTIONS(30),
    [anon_sym_DOLLARFALSE] = ACTIONS(30),
    [sym_user_variable] = ACTIONS(32),
    [sym_number] = ACTIONS(30),
    [sym_comment] = ACTIONS(18),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(38),
    [anon_sym_CARET] = ACTIONS(40),
    [sym_comment] = ACTIONS(18),
  },
  [8] = {
    [sym_assignment_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_expression] = STATE(7),
    [sym_boolean_value] = STATE(4),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [9] = {
    [sym_expression] = STATE(15),
    [sym_boolean_value] = STATE(4),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(44),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_DOLLARTRUE] = ACTIONS(48),
    [anon_sym_DOLLARFALSE] = ACTIONS(48),
    [sym_user_variable] = ACTIONS(50),
    [sym_number] = ACTIONS(48),
    [sym_comment] = ACTIONS(18),
  },
  [11] = {
    [sym_expression] = STATE(16),
    [sym_boolean_value] = STATE(4),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(44),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [12] = {
    [sym_expression] = STATE(17),
    [sym_boolean_value] = STATE(4),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(44),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [13] = {
    [sym_expression] = STATE(18),
    [sym_boolean_value] = STATE(4),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(44),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [14] = {
    [sym_assignment_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_expression] = STATE(7),
    [sym_boolean_value] = STATE(4),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_DOLLARTRUE] = ACTIONS(54),
    [anon_sym_DOLLARFALSE] = ACTIONS(54),
    [sym_user_variable] = ACTIONS(57),
    [sym_number] = ACTIONS(60),
    [sym_comment] = ACTIONS(18),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(38),
    [anon_sym_CARET] = ACTIONS(40),
    [sym_comment] = ACTIONS(18),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(38),
    [anon_sym_CARET] = ACTIONS(40),
    [sym_comment] = ACTIONS(18),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(40),
    [sym_comment] = ACTIONS(18),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [sym_comment] = ACTIONS(18),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DOLLARTRUE] = ACTIONS(69),
    [anon_sym_DOLLARFALSE] = ACTIONS(69),
    [sym_user_variable] = ACTIONS(71),
    [sym_number] = ACTIONS(69),
    [sym_comment] = ACTIONS(18),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 2),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [54] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 3),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_statement, 4),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_assignment_statement, 4),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_statement, 4),
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
