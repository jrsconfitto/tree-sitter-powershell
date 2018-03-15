#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 29
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_PARAM = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_type = 6,
  anon_sym_if = 7,
  sym_signature_block = 8,
  anon_sym_DOLLARTRUE = 9,
  anon_sym_DOLLARFALSE = 10,
  sym_user_variable = 11,
  sym_number = 12,
  sym_comment = 13,
  sym_script = 14,
  sym_param_block = 15,
  sym_parameter_declaration = 16,
  sym_parameter_type = 17,
  sym_script_block = 18,
  sym_statement = 19,
  sym_if = 20,
  sym_boolean_value = 21,
  aux_sym_script_block_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_PARAM] = "PARAM",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_type] = "type",
  [anon_sym_if] = "if",
  [sym_signature_block] = "signature_block",
  [anon_sym_DOLLARTRUE] = "$TRUE",
  [anon_sym_DOLLARFALSE] = "$FALSE",
  [sym_user_variable] = "user_variable",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_script] = "script",
  [sym_param_block] = "param_block",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parameter_type] = "parameter_type",
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
  [anon_sym_PARAM] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
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
  [sym_param_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_type] = {
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
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
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
      ACCEPT_TOKEN(anon_sym_PARAM);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      if (lookahead == 'f')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 44:
      if (lookahead == 't')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'r')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'g')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == 'E')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 51:
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
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
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
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(55);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      END_STATE();
    case 55:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 51},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 54},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PARAM] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_signature_block] = ACTIONS(3),
    [anon_sym_DOLLARTRUE] = ACTIONS(3),
    [anon_sym_DOLLARFALSE] = ACTIONS(3),
    [sym_user_variable] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_script] = STATE(6),
    [sym_param_block] = STATE(7),
    [sym_script_block] = STATE(8),
    [sym_statement] = STATE(9),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(10),
    [anon_sym_PARAM] = ACTIONS(10),
    [anon_sym_if] = ACTIONS(12),
    [anon_sym_DOLLARTRUE] = ACTIONS(14),
    [anon_sym_DOLLARFALSE] = ACTIONS(14),
    [sym_user_variable] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(20),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(22),
    [sym_comment] = ACTIONS(20),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(24),
    [sym_comment] = ACTIONS(20),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_if] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(28),
    [anon_sym_DOLLARTRUE] = ACTIONS(28),
    [anon_sym_DOLLARFALSE] = ACTIONS(28),
    [sym_user_variable] = ACTIONS(30),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(32),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_if] = ACTIONS(34),
    [sym_signature_block] = ACTIONS(36),
    [anon_sym_DOLLARTRUE] = ACTIONS(36),
    [anon_sym_DOLLARFALSE] = ACTIONS(36),
    [sym_user_variable] = ACTIONS(38),
    [sym_number] = ACTIONS(36),
    [sym_comment] = ACTIONS(32),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_comment] = ACTIONS(20),
  },
  [7] = {
    [sym_script_block] = STATE(13),
    [sym_statement] = STATE(9),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(10),
    [anon_sym_if] = ACTIONS(12),
    [anon_sym_DOLLARTRUE] = ACTIONS(14),
    [anon_sym_DOLLARFALSE] = ACTIONS(14),
    [sym_user_variable] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(20),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_signature_block] = ACTIONS(44),
    [sym_comment] = ACTIONS(32),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(48),
    [anon_sym_DOLLARTRUE] = ACTIONS(48),
    [anon_sym_DOLLARFALSE] = ACTIONS(48),
    [sym_user_variable] = ACTIONS(50),
    [sym_number] = ACTIONS(48),
    [sym_comment] = ACTIONS(32),
  },
  [10] = {
    [sym_statement] = STATE(9),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(12),
    [sym_signature_block] = ACTIONS(54),
    [anon_sym_DOLLARTRUE] = ACTIONS(14),
    [anon_sym_DOLLARFALSE] = ACTIONS(14),
    [sym_user_variable] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(32),
  },
  [11] = {
    [sym_parameter_declaration] = STATE(19),
    [sym_parameter_type] = STATE(20),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym_user_variable] = ACTIONS(60),
    [sym_comment] = ACTIONS(20),
  },
  [12] = {
    [sym_boolean_value] = STATE(22),
    [anon_sym_DOLLARTRUE] = ACTIONS(62),
    [anon_sym_DOLLARFALSE] = ACTIONS(62),
    [sym_comment] = ACTIONS(20),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_signature_block] = ACTIONS(66),
    [sym_comment] = ACTIONS(32),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(20),
  },
  [15] = {
    [sym_statement] = STATE(9),
    [sym_if] = STATE(5),
    [sym_boolean_value] = STATE(5),
    [aux_sym_script_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_if] = ACTIONS(70),
    [sym_signature_block] = ACTIONS(73),
    [anon_sym_DOLLARTRUE] = ACTIONS(75),
    [anon_sym_DOLLARFALSE] = ACTIONS(75),
    [sym_user_variable] = ACTIONS(78),
    [sym_number] = ACTIONS(81),
    [sym_comment] = ACTIONS(32),
  },
  [16] = {
    [anon_sym_if] = ACTIONS(84),
    [anon_sym_DOLLARTRUE] = ACTIONS(86),
    [anon_sym_DOLLARFALSE] = ACTIONS(86),
    [sym_user_variable] = ACTIONS(88),
    [sym_number] = ACTIONS(86),
    [sym_comment] = ACTIONS(20),
  },
  [17] = {
    [sym_type] = ACTIONS(90),
    [sym_comment] = ACTIONS(20),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [sym_comment] = ACTIONS(20),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_comment] = ACTIONS(20),
  },
  [20] = {
    [sym_user_variable] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(26),
    [sym_comment] = ACTIONS(20),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym_comment] = ACTIONS(20),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(20),
  },
  [24] = {
    [anon_sym_RBRACK] = ACTIONS(102),
    [sym_comment] = ACTIONS(20),
  },
  [25] = {
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_DOLLARTRUE] = ACTIONS(106),
    [anon_sym_DOLLARFALSE] = ACTIONS(106),
    [sym_user_variable] = ACTIONS(108),
    [sym_number] = ACTIONS(106),
    [sym_comment] = ACTIONS(20),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_comment] = ACTIONS(20),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(112),
    [sym_signature_block] = ACTIONS(114),
    [anon_sym_DOLLARTRUE] = ACTIONS(114),
    [anon_sym_DOLLARFALSE] = ACTIONS(114),
    [sym_user_variable] = ACTIONS(116),
    [sym_number] = ACTIONS(114),
    [sym_comment] = ACTIONS(32),
  },
  [28] = {
    [sym_user_variable] = ACTIONS(118),
    [sym_comment] = ACTIONS(20),
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
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [70] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [75] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [78] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 4),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 4),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 4),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_type, 3),
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
