#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 52
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_if = 8,
  sym_signature_block = 9,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 10,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 11,
  sym_identifier = 12,
  sym_string = 13,
  sym_number = 14,
  sym_comment = 15,
  sym_script = 16,
  sym_param_block = 17,
  sym_parameter_declaration = 18,
  sym_attribute = 19,
  sym_attribute_arguments = 20,
  sym_attribute_argument = 21,
  sym_script_block = 22,
  sym_statement = 23,
  sym_if = 24,
  sym_boolean_value = 25,
  sym_user_variable = 26,
  aux_sym_param_block_repeat1 = 27,
  aux_sym_parameter_declaration_repeat1 = 28,
  aux_sym_attribute_arguments_repeat1 = 29,
  aux_sym_script_block_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][aA][rR][aA][mM]/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [sym_signature_block] = "signature_block",
  [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = "/$([tT][rR][uU][eE]|[fF][aA][lL][sS][eE])/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = "/\\$[a-zA-Z]\\w*/",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_script] = "script",
  [sym_param_block] = "param_block",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_attribute] = "attribute",
  [sym_attribute_arguments] = "attribute_arguments",
  [sym_attribute_argument] = "attribute_argument",
  [sym_script_block] = "script_block",
  [sym_statement] = "statement",
  [sym_if] = "if",
  [sym_boolean_value] = "boolean_value",
  [sym_user_variable] = "user_variable",
  [aux_sym_param_block_repeat1] = "param_block_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_attribute_arguments_repeat1] = "attribute_arguments_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_signature_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument] = {
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
  [sym_user_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_param_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_arguments_repeat1] = {
    .visible = false,
    .named = false,
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(40);
      if (lookahead == ']')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'I')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'G')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_signature_block);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '+')
        ADVANCE(28);
      if (lookahead == '-')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == 'E')
        ADVANCE(27);
      if (lookahead == 'X')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'x')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '#')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '#')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '#')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 37:
      if (lookahead == ':')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(34);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == 'E')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'f')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 52:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(41);
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
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(55);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(33);
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
        ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 66},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_signature_block] = ACTIONS(3),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_script] = STATE(7),
    [sym_param_block] = STATE(8),
    [sym_script_block] = STATE(9),
    [sym_statement] = STATE(10),
    [sym_if] = STATE(6),
    [sym_boolean_value] = STATE(6),
    [sym_user_variable] = STATE(6),
    [aux_sym_script_block_repeat1] = STATE(11),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(10),
    [anon_sym_if] = ACTIONS(12),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(16),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(30),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(32),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_if] = ACTIONS(34),
    [sym_signature_block] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(38),
    [sym_number] = ACTIONS(36),
    [sym_comment] = ACTIONS(32),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(42),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(44),
    [sym_number] = ACTIONS(42),
    [sym_comment] = ACTIONS(32),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_comment] = ACTIONS(20),
  },
  [8] = {
    [sym_script_block] = STATE(14),
    [sym_statement] = STATE(10),
    [sym_if] = STATE(6),
    [sym_boolean_value] = STATE(6),
    [sym_user_variable] = STATE(6),
    [aux_sym_script_block_repeat1] = STATE(11),
    [anon_sym_if] = ACTIONS(12),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(20),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(50),
    [sym_comment] = ACTIONS(32),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(54),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(56),
    [sym_number] = ACTIONS(54),
    [sym_comment] = ACTIONS(32),
  },
  [11] = {
    [sym_statement] = STATE(10),
    [sym_if] = STATE(6),
    [sym_boolean_value] = STATE(6),
    [sym_user_variable] = STATE(6),
    [aux_sym_script_block_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_if] = ACTIONS(12),
    [sym_signature_block] = ACTIONS(60),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_comment] = ACTIONS(32),
  },
  [12] = {
    [sym_parameter_declaration] = STATE(20),
    [sym_attribute] = STATE(21),
    [sym_user_variable] = STATE(22),
    [aux_sym_parameter_declaration_repeat1] = STATE(23),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(64),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(20),
  },
  [13] = {
    [sym_boolean_value] = STATE(25),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(20),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_signature_block] = ACTIONS(72),
    [sym_comment] = ACTIONS(32),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_comment] = ACTIONS(20),
  },
  [16] = {
    [sym_statement] = STATE(10),
    [sym_if] = STATE(6),
    [sym_boolean_value] = STATE(6),
    [sym_user_variable] = STATE(6),
    [aux_sym_script_block_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [sym_signature_block] = ACTIONS(79),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_number] = ACTIONS(87),
    [sym_comment] = ACTIONS(32),
  },
  [17] = {
    [anon_sym_if] = ACTIONS(90),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(94),
    [sym_number] = ACTIONS(92),
    [sym_comment] = ACTIONS(20),
  },
  [18] = {
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(34),
    [sym_comment] = ACTIONS(20),
  },
  [20] = {
    [aux_sym_param_block_repeat1] = STATE(30),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(100),
    [sym_comment] = ACTIONS(20),
  },
  [21] = {
    [anon_sym_LBRACK] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(20),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [sym_comment] = ACTIONS(20),
  },
  [23] = {
    [sym_attribute] = STATE(21),
    [sym_user_variable] = STATE(31),
    [aux_sym_parameter_declaration_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(64),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(20),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(26),
    [sym_comment] = ACTIONS(20),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(20),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(20),
  },
  [27] = {
    [sym_attribute_arguments] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(114),
    [sym_comment] = ACTIONS(20),
  },
  [28] = {
    [sym_parameter_declaration] = STATE(37),
    [sym_attribute] = STATE(21),
    [sym_user_variable] = STATE(22),
    [aux_sym_parameter_declaration_repeat1] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(64),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(20),
  },
  [29] = {
    [anon_sym_if] = ACTIONS(116),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(120),
    [sym_number] = ACTIONS(118),
    [sym_comment] = ACTIONS(20),
  },
  [30] = {
    [aux_sym_param_block_repeat1] = STATE(39),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_comment] = ACTIONS(20),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(20),
  },
  [32] = {
    [sym_attribute] = STATE(21),
    [aux_sym_parameter_declaration_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(126),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(20),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_if] = ACTIONS(131),
    [sym_signature_block] = ACTIONS(133),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(135),
    [sym_number] = ACTIONS(133),
    [sym_comment] = ACTIONS(32),
  },
  [34] = {
    [sym_attribute_argument] = STATE(42),
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [sym_comment] = ACTIONS(20),
  },
  [35] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(20),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(145),
    [sym_comment] = ACTIONS(20),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(20),
  },
  [38] = {
    [anon_sym_if] = ACTIONS(149),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [sym_comment] = ACTIONS(20),
  },
  [39] = {
    [aux_sym_param_block_repeat1] = STATE(39),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(20),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym_comment] = ACTIONS(20),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(162),
    [sym_comment] = ACTIONS(20),
  },
  [42] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(166),
    [sym_comment] = ACTIONS(20),
  },
  [43] = {
    [anon_sym_LBRACK] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(20),
  },
  [44] = {
    [sym_identifier] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(172),
    [sym_comment] = ACTIONS(20),
  },
  [45] = {
    [sym_attribute_argument] = STATE(49),
    [sym_identifier] = ACTIONS(139),
    [sym_comment] = ACTIONS(20),
  },
  [46] = {
    [anon_sym_RBRACK] = ACTIONS(176),
    [sym_comment] = ACTIONS(20),
  },
  [47] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(51),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(178),
    [sym_comment] = ACTIONS(20),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(20),
  },
  [49] = {
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [sym_comment] = ACTIONS(20),
  },
  [50] = {
    [anon_sym_RBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(20),
  },
  [51] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(51),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(182),
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
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [76] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [81] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(18),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 4),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 4),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 4),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 5),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [155] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(28),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [186] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(45),
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
