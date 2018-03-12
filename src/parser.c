#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 19
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  sym_user_variable = 8,
  sym_number = 9,
  sym_comment = 10,
  sym_program = 11,
  sym_assignment_statement = 12,
  sym_expression_statement = 13,
  sym_expression = 14,
  aux_sym_program_repeat1 = 15,
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
  [sym_user_variable] = "user_variable",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
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
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == 'E')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 28:
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
        SKIP(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 27},
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
    [sym_user_variable] = ACTIONS(3),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym_assignment_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym_expression] = STATE(6),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(8),
    [sym_user_variable] = ACTIONS(10),
    [sym_number] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_STAR] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [sym_comment] = ACTIONS(14),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_STAR] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym_comment] = ACTIONS(14),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_user_variable] = ACTIONS(24),
    [sym_number] = ACTIONS(24),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(26),
    [anon_sym_PLUS] = ACTIONS(28),
    [anon_sym_DASH] = ACTIONS(28),
    [anon_sym_STAR] = ACTIONS(30),
    [anon_sym_SLASH] = ACTIONS(30),
    [anon_sym_CARET] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [7] = {
    [sym_assignment_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym_expression] = STATE(6),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_user_variable] = ACTIONS(10),
    [sym_number] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [8] = {
    [sym_expression] = STATE(14),
    [sym_user_variable] = ACTIONS(12),
    [sym_number] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_user_variable] = ACTIONS(38),
    [sym_number] = ACTIONS(38),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [sym_expression] = STATE(15),
    [sym_user_variable] = ACTIONS(12),
    [sym_number] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym_expression] = STATE(16),
    [sym_user_variable] = ACTIONS(12),
    [sym_number] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [sym_expression] = STATE(17),
    [sym_user_variable] = ACTIONS(12),
    [sym_number] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [sym_assignment_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym_expression] = STATE(6),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_user_variable] = ACTIONS(42),
    [sym_number] = ACTIONS(45),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(28),
    [anon_sym_DASH] = ACTIONS(28),
    [anon_sym_STAR] = ACTIONS(30),
    [anon_sym_SLASH] = ACTIONS(30),
    [anon_sym_CARET] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_STAR] = ACTIONS(30),
    [anon_sym_SLASH] = ACTIONS(30),
    [anon_sym_CARET] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_STAR] = ACTIONS(50),
    [anon_sym_SLASH] = ACTIONS(50),
    [anon_sym_CARET] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_STAR] = ACTIONS(50),
    [anon_sym_SLASH] = ACTIONS(50),
    [anon_sym_CARET] = ACTIONS(50),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_user_variable] = ACTIONS(54),
    [sym_number] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 1),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 2),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [42] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 3),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_statement, 4),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_assignment_statement, 4),
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
