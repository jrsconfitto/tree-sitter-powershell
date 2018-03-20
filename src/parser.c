#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 100
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 10,
  aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_SEMI = 14,
  aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH = 15,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 16,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 17,
  sym_identifier = 18,
  sym_string = 19,
  sym_number = 20,
  sym_comment = 21,
  sym_signature_block = 22,
  sym_script = 23,
  sym_param_block = 24,
  sym_parameter_declaration = 25,
  sym_attribute = 26,
  sym_attribute_arguments = 27,
  sym_attribute_argument = 28,
  sym_script_block = 29,
  sym_statement = 30,
  sym_if = 31,
  sym_while = 32,
  sym_do = 33,
  sym_statement_block = 34,
  sym_statement_terminator = 35,
  sym_boolean_value = 36,
  sym_user_variable = 37,
  aux_sym_param_block_repeat1 = 38,
  aux_sym_parameter_declaration_repeat1 = 39,
  aux_sym_attribute_arguments_repeat1 = 40,
  aux_sym_script_block_repeat1 = 41,
  aux_sym_statement_block_repeat1 = 42,
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
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[wW][hH][iI][lL][eE]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[dD][oO]/",
  [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[uU][nN][tT][iI][lL]/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = "/\\r|\\r\\n\\|\\r/",
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
  [sym_do] = "do",
  [sym_statement_block] = "statement_block",
  [sym_statement_terminator] = "statement_terminator",
  [sym_boolean_value] = "boolean_value",
  [sym_user_variable] = "user_variable",
  [aux_sym_param_block_repeat1] = "param_block_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_attribute_arguments_repeat1] = "attribute_arguments_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
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
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = {
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
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_terminator] = {
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
  [aux_sym_statement_block_repeat1] = {
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
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == ']')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      if (lookahead == '#')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '#')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '#')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '?')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 38:
      if (lookahead == ':')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == 'E')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
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
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(52);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 50:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 57:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 62:
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
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(40);
      if (lookahead == ']')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(64);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      END_STATE();
    case 64:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 65:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(66);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(70);
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
        ADVANCE(34);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(76);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 81:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == '\r')
        ADVANCE(83);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == '\r')
        ADVANCE(83);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(82);
      END_STATE();
    case 85:
      if (lookahead == '\r')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      END_STATE();
    case 87:
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
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 62},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 82},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 74},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 75},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 75},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 81},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 63},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 47},
  [83] = {.lex_state = 87},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 62},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 47},
  [88] = {.lex_state = 74},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 82},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 82},
  [97] = {.lex_state = 74},
  [98] = {.lex_state = 82},
  [99] = {.lex_state = 82},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_signature_block] = ACTIONS(3),
  },
  [1] = {
    [sym_script] = STATE(10),
    [sym_param_block] = STATE(11),
    [sym_script_block] = STATE(12),
    [sym_statement] = STATE(13),
    [sym_if] = STATE(8),
    [sym_while] = STATE(8),
    [sym_do] = STATE(8),
    [sym_boolean_value] = STATE(8),
    [sym_user_variable] = STATE(8),
    [aux_sym_script_block_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(28),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_comment] = ACTIONS(32),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym_comment] = ACTIONS(32),
  },
  [5] = {
    [sym_statement_block] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(32),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(44),
    [sym_number] = ACTIONS(42),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(42),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(50),
    [sym_number] = ACTIONS(48),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(48),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(56),
    [sym_number] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(54),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_comment] = ACTIONS(32),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_comment] = ACTIONS(32),
  },
  [11] = {
    [sym_script_block] = STATE(21),
    [sym_statement] = STATE(13),
    [sym_if] = STATE(8),
    [sym_while] = STATE(8),
    [sym_do] = STATE(8),
    [sym_boolean_value] = STATE(8),
    [sym_user_variable] = STATE(8),
    [aux_sym_script_block_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(62),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(62),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(68),
    [sym_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(66),
  },
  [14] = {
    [sym_statement] = STATE(13),
    [sym_if] = STATE(8),
    [sym_while] = STATE(8),
    [sym_do] = STATE(8),
    [sym_boolean_value] = STATE(8),
    [sym_user_variable] = STATE(8),
    [aux_sym_script_block_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(72),
  },
  [15] = {
    [sym_parameter_declaration] = STATE(26),
    [sym_attribute] = STATE(27),
    [sym_user_variable] = STATE(28),
    [aux_sym_parameter_declaration_repeat1] = STATE(29),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(32),
  },
  [16] = {
    [sym_boolean_value] = STATE(31),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(32),
  },
  [17] = {
    [sym_boolean_value] = STATE(32),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(32),
  },
  [18] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(88),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [19] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(32),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(32),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(100),
  },
  [22] = {
    [sym_statement] = STATE(13),
    [sym_if] = STATE(8),
    [sym_while] = STATE(8),
    [sym_do] = STATE(8),
    [sym_boolean_value] = STATE(8),
    [sym_user_variable] = STATE(8),
    [aux_sym_script_block_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_number] = ACTIONS(119),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(122),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(128),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(126),
  },
  [24] = {
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(32),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [sym_comment] = ACTIONS(32),
  },
  [26] = {
    [aux_sym_param_block_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(134),
    [sym_comment] = ACTIONS(32),
  },
  [27] = {
    [anon_sym_LBRACK] = ACTIONS(136),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [sym_comment] = ACTIONS(32),
  },
  [29] = {
    [sym_attribute] = STATE(27),
    [sym_user_variable] = STATE(48),
    [aux_sym_parameter_declaration_repeat1] = STATE(49),
    [anon_sym_LBRACK] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(32),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(40),
    [sym_comment] = ACTIONS(32),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(142),
    [sym_comment] = ACTIONS(32),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_comment] = ACTIONS(32),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(146),
    [sym_comment] = ACTIONS(32),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(148),
    [sym_comment] = ACTIONS(32),
  },
  [35] = {
    [sym_statement_block] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(32),
  },
  [36] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(32),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(44),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(26),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(50),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(56),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [40] = {
    [sym_statement_terminator] = STATE(56),
    [anon_sym_SEMI] = ACTIONS(152),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(26),
  },
  [41] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(154),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(156),
    [sym_comment] = ACTIONS(32),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(32),
  },
  [44] = {
    [sym_attribute_arguments] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(162),
    [sym_comment] = ACTIONS(32),
  },
  [45] = {
    [sym_parameter_declaration] = STATE(63),
    [sym_attribute] = STATE(27),
    [sym_user_variable] = STATE(28),
    [aux_sym_parameter_declaration_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(32),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(168),
    [sym_number] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(166),
  },
  [47] = {
    [aux_sym_param_block_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(170),
    [sym_comment] = ACTIONS(32),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [sym_comment] = ACTIONS(32),
  },
  [49] = {
    [sym_attribute] = STATE(27),
    [aux_sym_parameter_declaration_repeat1] = STATE(49),
    [anon_sym_LBRACK] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(177),
    [sym_comment] = ACTIONS(32),
  },
  [50] = {
    [sym_statement_block] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(32),
  },
  [51] = {
    [sym_statement_block] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(32),
  },
  [52] = {
    [sym_boolean_value] = STATE(69),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(32),
  },
  [53] = {
    [sym_boolean_value] = STATE(70),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(32),
  },
  [54] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(181),
    [sym_comment] = ACTIONS(32),
  },
  [55] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(187),
    [sym_number] = ACTIONS(185),
    [sym_comment] = ACTIONS(32),
  },
  [56] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(189),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(189),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(193),
    [sym_number] = ACTIONS(191),
    [sym_comment] = ACTIONS(32),
  },
  [57] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(195),
    [sym_comment] = ACTIONS(32),
  },
  [58] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(189),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(209),
    [sym_number] = ACTIONS(212),
    [sym_comment] = ACTIONS(32),
  },
  [59] = {
    [sym_boolean_value] = STATE(72),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(32),
  },
  [60] = {
    [sym_attribute_argument] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(32),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(32),
  },
  [62] = {
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_comment] = ACTIONS(32),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [sym_comment] = ACTIONS(32),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(229),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(229),
  },
  [65] = {
    [aux_sym_param_block_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(225),
    [sym_comment] = ACTIONS(32),
  },
  [66] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(236),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(242),
    [sym_number] = ACTIONS(240),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(240),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(248),
    [sym_number] = ACTIONS(246),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(246),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(32),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(32),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(32),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(256),
    [sym_comment] = ACTIONS(32),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(258),
    [sym_comment] = ACTIONS(32),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(262),
    [sym_comment] = ACTIONS(32),
  },
  [75] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_comment] = ACTIONS(32),
  },
  [76] = {
    [anon_sym_LBRACK] = ACTIONS(268),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(270),
    [sym_comment] = ACTIONS(32),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_number] = ACTIONS(272),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(272),
  },
  [78] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(276),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [79] = {
    [sym_statement_block] = STATE(89),
    [anon_sym_LBRACE] = ACTIONS(278),
    [sym_comment] = ACTIONS(32),
  },
  [80] = {
    [sym_statement_block] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(278),
    [sym_comment] = ACTIONS(32),
  },
  [81] = {
    [sym_boolean_value] = STATE(91),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(32),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(284),
    [sym_number] = ACTIONS(282),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(282),
  },
  [83] = {
    [sym_identifier] = ACTIONS(286),
    [sym_string] = ACTIONS(288),
    [sym_number] = ACTIONS(286),
    [sym_comment] = ACTIONS(32),
  },
  [84] = {
    [sym_attribute_argument] = STATE(93),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(32),
  },
  [85] = {
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_comment] = ACTIONS(32),
  },
  [86] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym_comment] = ACTIONS(32),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(296),
    [sym_number] = ACTIONS(294),
    [sym_comment] = ACTIONS(26),
    [sym_signature_block] = ACTIONS(294),
  },
  [88] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(97),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(298),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [89] = {
    [anon_sym_SEMI] = ACTIONS(242),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(242),
    [sym_comment] = ACTIONS(26),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(248),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(26),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_comment] = ACTIONS(32),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [sym_comment] = ACTIONS(32),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [sym_comment] = ACTIONS(32),
  },
  [94] = {
    [anon_sym_RBRACK] = ACTIONS(306),
    [sym_comment] = ACTIONS(32),
  },
  [95] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(304),
    [sym_comment] = ACTIONS(32),
  },
  [96] = {
    [anon_sym_SEMI] = ACTIONS(274),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(26),
  },
  [97] = {
    [sym_statement] = STATE(40),
    [sym_if] = STATE(39),
    [sym_while] = STATE(39),
    [sym_do] = STATE(39),
    [sym_boolean_value] = STATE(39),
    [sym_user_variable] = STATE(39),
    [aux_sym_statement_block_repeat1] = STATE(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(311),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(32),
  },
  [98] = {
    [anon_sym_SEMI] = ACTIONS(284),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(284),
    [sym_comment] = ACTIONS(26),
  },
  [99] = {
    [anon_sym_SEMI] = ACTIONS(296),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(296),
    [sym_comment] = ACTIONS(26),
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
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [104] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [107] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [110] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [113] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [116] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(7),
  [119] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(8),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [174] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(24),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_terminator, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [197] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(33),
  [200] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(34),
  [203] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(35),
  [206] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(37),
  [209] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(38),
  [212] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(39),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 5),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [233] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(45),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(84),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
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
