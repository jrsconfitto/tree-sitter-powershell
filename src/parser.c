#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 7
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_DOLLARTRUE = 1,
  anon_sym_DOLLARFALSE = 2,
  sym_user_variable = 3,
  sym_number = 4,
  sym_comment = 5,
  sym_script = 6,
  sym_boolean_value = 7,
  aux_sym_script_repeat1 = 8,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_DOLLARTRUE] = "$TRUE",
  [anon_sym_DOLLARFALSE] = "$FALSE",
  [sym_user_variable] = "user_variable",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_script] = "script",
  [sym_boolean_value] = "boolean_value",
  [aux_sym_script_repeat1] = "script_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
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
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'E')
        ADVANCE(16);
      if (lookahead == 'X')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '#')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '#')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#')
        ADVANCE(24);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      if (lookahead == ':')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'E')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLARTRUE] = ACTIONS(3),
    [anon_sym_DOLLARFALSE] = ACTIONS(3),
    [sym_user_variable] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_script] = STATE(4),
    [sym_boolean_value] = STATE(3),
    [aux_sym_script_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [anon_sym_DOLLARTRUE] = ACTIONS(22),
    [anon_sym_DOLLARFALSE] = ACTIONS(22),
    [sym_user_variable] = ACTIONS(24),
    [sym_number] = ACTIONS(22),
    [sym_comment] = ACTIONS(18),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_DOLLARTRUE] = ACTIONS(28),
    [anon_sym_DOLLARFALSE] = ACTIONS(28),
    [sym_user_variable] = ACTIONS(30),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_comment] = ACTIONS(18),
  },
  [5] = {
    [sym_boolean_value] = STATE(3),
    [aux_sym_script_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_DOLLARTRUE] = ACTIONS(12),
    [anon_sym_DOLLARFALSE] = ACTIONS(12),
    [sym_user_variable] = ACTIONS(14),
    [sym_number] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [6] = {
    [sym_boolean_value] = STATE(3),
    [aux_sym_script_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_DOLLARTRUE] = ACTIONS(38),
    [anon_sym_DOLLARFALSE] = ACTIONS(38),
    [sym_user_variable] = ACTIONS(41),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(18),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_repeat1, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_repeat1, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_repeat1, 1),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_repeat1, 2),
  [38] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
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
