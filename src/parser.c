#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 84
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 11,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 12,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 13,
  sym_identifier = 14,
  sym_string = 15,
  sym_number = 16,
  sym_comment = 17,
  sym_signature_block = 18,
  sym_script = 19,
  sym_param_block = 20,
  sym_parameter_declaration = 21,
  sym_attribute = 22,
  sym_attribute_arguments = 23,
  sym_attribute_argument = 24,
  sym_script_block = 25,
  sym_statement = 26,
  sym_if = 27,
  sym_while = 28,
  sym_boolean_value = 29,
  sym_user_variable = 30,
  aux_sym_param_block_repeat1 = 31,
  aux_sym_parameter_declaration_repeat1 = 32,
  aux_sym_attribute_arguments_repeat1 = 33,
  aux_sym_script_block_repeat1 = 34,
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
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[iI][fF]/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[wW][hH][iI][lL][eE]/",
  [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = "/$([tT][rR][uU][eE]|[fF][aA][lL][sS][eE])/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = "/\\$[a-zA-Z]\\w*/",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_signature_block] = "signature_block",
  [sym_script] = "script",
  [sym_param_block] = "param_block",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_attribute] = "attribute",
  [sym_attribute_arguments] = "attribute_arguments",
  [sym_attribute_argument] = "attribute_argument",
  [sym_script_block] = "script_block",
  [sym_statement] = "statement",
  [sym_if] = "if",
  [sym_while] = "while",
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
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
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
  [sym_signature_block] = {
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
  [sym_while] = {
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
      if (lookahead == '{')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == 'E')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 46:
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
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(49);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 54:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
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
      if (lookahead == '{')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(61);
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
        SKIP(60);
      END_STATE();
    case 61:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(63);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(67);
      END_STATE();
    case 71:
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
        SKIP(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 72:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
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
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 74:
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
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 75:
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
        SKIP(75);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 59},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 71},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 71},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 59},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 59},
  [50] = {.lex_state = 60},
  [51] = {.lex_state = 59},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 75},
  [60] = {.lex_state = 71},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 59},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 59},
  [74] = {.lex_state = 59},
  [75] = {.lex_state = 59},
  [76] = {.lex_state = 74},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 74},
  [80] = {.lex_state = 74},
  [81] = {.lex_state = 74},
  [82] = {.lex_state = 74},
  [83] = {.lex_state = 74},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_signature_block] = ACTIONS(3),
  },
  [1] = {
    [sym_script] = STATE(9),
    [sym_param_block] = STATE(10),
    [sym_script_block] = STATE(11),
    [sym_statement] = STATE(12),
    [sym_if] = STATE(7),
    [sym_while] = STATE(7),
    [sym_boolean_value] = STATE(7),
    [sym_user_variable] = STATE(7),
    [aux_sym_script_block_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(20),
    [sym_number] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(26),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_comment] = ACTIONS(30),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_comment] = ACTIONS(30),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(40),
    [sym_number] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(38),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(46),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(44),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(52),
    [sym_number] = ACTIONS(50),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(50),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_comment] = ACTIONS(30),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_comment] = ACTIONS(30),
  },
  [10] = {
    [sym_script_block] = STATE(18),
    [sym_statement] = STATE(12),
    [sym_if] = STATE(7),
    [sym_while] = STATE(7),
    [sym_boolean_value] = STATE(7),
    [sym_user_variable] = STATE(7),
    [aux_sym_script_block_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(20),
    [sym_number] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(58),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(58),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(64),
    [sym_number] = ACTIONS(62),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(62),
  },
  [13] = {
    [sym_statement] = STATE(12),
    [sym_if] = STATE(7),
    [sym_while] = STATE(7),
    [sym_boolean_value] = STATE(7),
    [sym_user_variable] = STATE(7),
    [aux_sym_script_block_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(20),
    [sym_number] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(68),
  },
  [14] = {
    [sym_parameter_declaration] = STATE(23),
    [sym_attribute] = STATE(24),
    [sym_user_variable] = STATE(25),
    [aux_sym_parameter_declaration_repeat1] = STATE(26),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [15] = {
    [sym_boolean_value] = STATE(28),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(30),
  },
  [16] = {
    [sym_boolean_value] = STATE(29),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(30),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(80),
  },
  [19] = {
    [sym_statement] = STATE(12),
    [sym_if] = STATE(7),
    [sym_while] = STATE(7),
    [sym_boolean_value] = STATE(7),
    [sym_user_variable] = STATE(7),
    [aux_sym_script_block_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(87),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(93),
    [sym_number] = ACTIONS(96),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(99),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(105),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(103),
  },
  [21] = {
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(30),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(46),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [23] = {
    [aux_sym_param_block_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_comment] = ACTIONS(30),
  },
  [24] = {
    [anon_sym_LBRACK] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(115),
    [sym_comment] = ACTIONS(30),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [sym_comment] = ACTIONS(30),
  },
  [26] = {
    [sym_attribute] = STATE(24),
    [sym_user_variable] = STATE(35),
    [aux_sym_parameter_declaration_repeat1] = STATE(36),
    [anon_sym_LBRACK] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(40),
    [sym_number] = ACTIONS(38),
    [sym_comment] = ACTIONS(30),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_comment] = ACTIONS(30),
  },
  [29] = {
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_comment] = ACTIONS(30),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(30),
  },
  [31] = {
    [sym_attribute_arguments] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_comment] = ACTIONS(30),
  },
  [32] = {
    [sym_parameter_declaration] = STATE(42),
    [sym_attribute] = STATE(24),
    [sym_user_variable] = STATE(25),
    [aux_sym_parameter_declaration_repeat1] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(133),
    [sym_number] = ACTIONS(131),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(131),
  },
  [34] = {
    [aux_sym_param_block_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_comment] = ACTIONS(30),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym_comment] = ACTIONS(30),
  },
  [36] = {
    [sym_attribute] = STATE(24),
    [aux_sym_parameter_declaration_repeat1] = STATE(36),
    [anon_sym_LBRACK] = ACTIONS(139),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(30),
  },
  [37] = {
    [anon_sym_LBRACE] = ACTIONS(144),
    [sym_comment] = ACTIONS(30),
  },
  [38] = {
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(30),
  },
  [39] = {
    [sym_attribute_argument] = STATE(49),
    [anon_sym_RPAREN] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(30),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(152),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(30),
  },
  [41] = {
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_comment] = ACTIONS(30),
  },
  [42] = {
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [sym_comment] = ACTIONS(30),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_number] = ACTIONS(162),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(162),
  },
  [44] = {
    [aux_sym_param_block_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(158),
    [sym_comment] = ACTIONS(30),
  },
  [45] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(171),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [46] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(181),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [47] = {
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(30),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(187),
    [sym_comment] = ACTIONS(30),
  },
  [49] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(62),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(30),
  },
  [50] = {
    [anon_sym_LBRACK] = ACTIONS(193),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(195),
    [sym_comment] = ACTIONS(30),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym_comment] = ACTIONS(30),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(203),
    [sym_number] = ACTIONS(201),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(201),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(205),
    [sym_comment] = ACTIONS(30),
  },
  [54] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(52),
    [sym_number] = ACTIONS(50),
    [sym_comment] = ACTIONS(30),
  },
  [55] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(64),
    [sym_number] = ACTIONS(62),
    [sym_comment] = ACTIONS(30),
  },
  [56] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(213),
    [sym_number] = ACTIONS(211),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(211),
  },
  [58] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(215),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [59] = {
    [sym_identifier] = ACTIONS(217),
    [sym_string] = ACTIONS(219),
    [sym_number] = ACTIONS(217),
    [sym_comment] = ACTIONS(30),
  },
  [60] = {
    [sym_attribute_argument] = STATE(69),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(30),
  },
  [61] = {
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_comment] = ACTIONS(30),
  },
  [62] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(223),
    [sym_comment] = ACTIONS(30),
  },
  [63] = {
    [sym_boolean_value] = STATE(72),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(30),
  },
  [64] = {
    [sym_boolean_value] = STATE(73),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(30),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(227),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(227),
  },
  [66] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(240),
    [sym_number] = ACTIONS(243),
    [sym_comment] = ACTIONS(30),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_number] = ACTIONS(248),
    [sym_comment] = ACTIONS(24),
    [sym_signature_block] = ACTIONS(248),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(30),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(30),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(256),
    [sym_comment] = ACTIONS(30),
  },
  [71] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(30),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(261),
    [sym_comment] = ACTIONS(30),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(263),
    [sym_comment] = ACTIONS(30),
  },
  [74] = {
    [anon_sym_LBRACE] = ACTIONS(265),
    [sym_comment] = ACTIONS(30),
  },
  [75] = {
    [anon_sym_LBRACE] = ACTIONS(267),
    [sym_comment] = ACTIONS(30),
  },
  [76] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(79),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [77] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(271),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [78] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(203),
    [sym_number] = ACTIONS(201),
    [sym_comment] = ACTIONS(30),
  },
  [79] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(273),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [80] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(213),
    [sym_number] = ACTIONS(211),
    [sym_comment] = ACTIONS(30),
  },
  [81] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_comment] = ACTIONS(30),
  },
  [82] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(227),
    [sym_comment] = ACTIONS(30),
  },
  [83] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_number] = ACTIONS(248),
    [sym_comment] = ACTIONS(30),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [84] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [87] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [90] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [93] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [96] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(7),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [139] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(21),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 5),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [166] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(32),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 6),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 6),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 6),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [231] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(51),
  [234] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(53),
  [237] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(27),
  [240] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(22),
  [243] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(54),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 7),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 7),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 7),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [258] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(60),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
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
