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
  anon_sym_true = 8,
  anon_sym_false = 9,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(24);
      if (lookahead == '^')
        ADVANCE(25);
      if (lookahead == 'f')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(31);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_user_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == 'E')
        ADVANCE(10);
      if (lookahead == 'X')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(10);
      if (lookahead == 'x')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      if (lookahead == '#')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '#')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '#')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      if (lookahead == ':')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'l')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 's')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'e')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 31:
      if (lookahead == 'r')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == 'E')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(10);
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
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(31);
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
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(24);
      if (lookahead == '^')
        ADVANCE(25);
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_user_variable] = ACTIONS(3),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_assignment_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_expression] = STATE(7),
    [sym_boolean_value] = STATE(4),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_true] = ACTIONS(10),
    [anon_sym_false] = ACTIONS(10),
    [sym_user_variable] = ACTIONS(12),
    [sym_number] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_STAR] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [sym_comment] = ACTIONS(16),
  },
  [3] = {
    [anon_sym_EQ] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(22),
    [anon_sym_PLUS] = ACTIONS(22),
    [anon_sym_DASH] = ACTIONS(22),
    [anon_sym_STAR] = ACTIONS(22),
    [anon_sym_SLASH] = ACTIONS(22),
    [anon_sym_CARET] = ACTIONS(22),
    [sym_comment] = ACTIONS(16),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(22),
    [anon_sym_PLUS] = ACTIONS(22),
    [anon_sym_DASH] = ACTIONS(22),
    [anon_sym_STAR] = ACTIONS(22),
    [anon_sym_SLASH] = ACTIONS(22),
    [anon_sym_CARET] = ACTIONS(22),
    [sym_comment] = ACTIONS(16),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(16),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_true] = ACTIONS(26),
    [anon_sym_false] = ACTIONS(26),
    [sym_user_variable] = ACTIONS(28),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(16),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(30),
    [anon_sym_PLUS] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(34),
    [anon_sym_SLASH] = ACTIONS(34),
    [anon_sym_CARET] = ACTIONS(36),
    [sym_comment] = ACTIONS(16),
  },
  [8] = {
    [sym_assignment_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_expression] = STATE(7),
    [sym_boolean_value] = STATE(4),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(10),
    [anon_sym_false] = ACTIONS(10),
    [sym_user_variable] = ACTIONS(12),
    [sym_number] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [9] = {
    [sym_expression] = STATE(15),
    [sym_boolean_value] = STATE(4),
    [anon_sym_true] = ACTIONS(10),
    [anon_sym_false] = ACTIONS(10),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(40),
    [anon_sym_false] = ACTIONS(40),
    [sym_user_variable] = ACTIONS(42),
    [sym_number] = ACTIONS(42),
    [sym_comment] = ACTIONS(16),
  },
  [11] = {
    [sym_expression] = STATE(16),
    [sym_boolean_value] = STATE(4),
    [anon_sym_true] = ACTIONS(10),
    [anon_sym_false] = ACTIONS(10),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [12] = {
    [sym_expression] = STATE(17),
    [sym_boolean_value] = STATE(4),
    [anon_sym_true] = ACTIONS(10),
    [anon_sym_false] = ACTIONS(10),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [13] = {
    [sym_expression] = STATE(18),
    [sym_boolean_value] = STATE(4),
    [anon_sym_true] = ACTIONS(10),
    [anon_sym_false] = ACTIONS(10),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [14] = {
    [sym_assignment_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_expression] = STATE(7),
    [sym_boolean_value] = STATE(4),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [sym_user_variable] = ACTIONS(49),
    [sym_number] = ACTIONS(52),
    [sym_comment] = ACTIONS(16),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(34),
    [anon_sym_SLASH] = ACTIONS(34),
    [anon_sym_CARET] = ACTIONS(36),
    [sym_comment] = ACTIONS(16),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(34),
    [anon_sym_SLASH] = ACTIONS(34),
    [anon_sym_CARET] = ACTIONS(36),
    [sym_comment] = ACTIONS(16),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(36),
    [sym_comment] = ACTIONS(16),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(16),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_user_variable] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(16),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 2),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [46] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 3),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_statement, 4),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_assignment_statement, 4),
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
