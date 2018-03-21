#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 137
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 10,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 12,
  aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH = 13,
  anon_sym_try = 14,
  anon_sym_catch = 15,
  anon_sym_finally = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_SEMI = 19,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 20,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 21,
  sym_identifier = 22,
  sym_string = 23,
  sym_number = 24,
  sym_comment = 25,
  sym_signature_block = 26,
  sym_script = 27,
  sym_param_block = 28,
  sym_parameter_declaration = 29,
  sym_attribute = 30,
  sym_attribute_arguments = 31,
  sym_attribute_argument = 32,
  sym_script_block = 33,
  sym_statement = 34,
  sym_if = 35,
  sym_elseif = 36,
  sym_else = 37,
  sym_while = 38,
  sym_do = 39,
  sym_try = 40,
  sym_catch = 41,
  sym_finally = 42,
  sym_statement_block = 43,
  sym_boolean_value = 44,
  sym_user_variable = 45,
  aux_sym_param_block_repeat1 = 46,
  aux_sym_parameter_declaration_repeat1 = 47,
  aux_sym_attribute_arguments_repeat1 = 48,
  aux_sym_script_block_repeat1 = 49,
  aux_sym_if_repeat1 = 50,
  aux_sym_try_repeat1 = 51,
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
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = "/[eE][lL][sS][eE][iI][fF]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[eE][lL][sS][eE]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[wW][hH][iI][lL][eE]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = "/[dD][oO]/",
  [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[uU][nN][tT][iI][lL]/",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
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
  [sym_elseif] = "elseif",
  [sym_else] = "else",
  [sym_while] = "while",
  [sym_do] = "do",
  [sym_try] = "try",
  [sym_catch] = "catch",
  [sym_finally] = "finally",
  [sym_statement_block] = "statement_block",
  [sym_boolean_value] = "boolean_value",
  [sym_user_variable] = "user_variable",
  [aux_sym_param_block_repeat1] = "param_block_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_attribute_arguments_repeat1] = "attribute_arguments_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_try_repeat1] = "try_repeat1",
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
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
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
  [sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
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
  [sym_try] = {
    .visible = true,
    .named = true,
  },
  [sym_catch] = {
    .visible = true,
    .named = true,
  },
  [sym_finally] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
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
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_try_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(55);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'y')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 53:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 60:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 65:
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
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == ']')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(67);
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
        SKIP(66);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 68:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      END_STATE();
    case 69:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 't')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'c')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'h')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 83:
      if (lookahead == 'i')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'n')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'l')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'l')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'y')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 90:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(91);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(90);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 96:
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
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 97:
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
        SKIP(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      END_STATE();
    case 100:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 101:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(91);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 108:
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
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 109:
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
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 110:
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
        SKIP(110);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 66},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 96},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 97},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 66},
  [33] = {.lex_state = 100},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 65},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 101},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 65},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 77},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 96},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 66},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 66},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 68},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 101},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 108},
  [69] = {.lex_state = 96},
  [70] = {.lex_state = 65},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 96},
  [74] = {.lex_state = 97},
  [75] = {.lex_state = 99},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 65},
  [78] = {.lex_state = 47},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 109},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 65},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 65},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 65},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 96},
  [92] = {.lex_state = 65},
  [93] = {.lex_state = 65},
  [94] = {.lex_state = 65},
  [95] = {.lex_state = 65},
  [96] = {.lex_state = 99},
  [97] = {.lex_state = 65},
  [98] = {.lex_state = 65},
  [99] = {.lex_state = 109},
  [100] = {.lex_state = 47},
  [101] = {.lex_state = 109},
  [102] = {.lex_state = 65},
  [103] = {.lex_state = 65},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 65},
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 47},
  [111] = {.lex_state = 110},
  [112] = {.lex_state = 97},
  [113] = {.lex_state = 65},
  [114] = {.lex_state = 65},
  [115] = {.lex_state = 109},
  [116] = {.lex_state = 47},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 109},
  [119] = {.lex_state = 111},
  [120] = {.lex_state = 77},
  [121] = {.lex_state = 65},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 65},
  [124] = {.lex_state = 65},
  [125] = {.lex_state = 65},
  [126] = {.lex_state = 65},
  [127] = {.lex_state = 65},
  [128] = {.lex_state = 65},
  [129] = {.lex_state = 111},
  [130] = {.lex_state = 77},
  [131] = {.lex_state = 111},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 111},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 111},
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
    [sym_script] = STATE(11),
    [sym_param_block] = STATE(12),
    [sym_script_block] = STATE(13),
    [sym_statement] = STATE(14),
    [sym_if] = STATE(9),
    [sym_while] = STATE(9),
    [sym_do] = STATE(9),
    [sym_try] = STATE(9),
    [sym_boolean_value] = STATE(9),
    [sym_user_variable] = STATE(9),
    [aux_sym_script_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [anon_sym_try] = ACTIONS(20),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(24),
    [sym_string] = ACTIONS(26),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(32),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(38),
    [sym_comment] = ACTIONS(36),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym_comment] = ACTIONS(36),
  },
  [5] = {
    [sym_statement_block] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [sym_statement_block] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_try] = ACTIONS(46),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(50),
    [sym_string] = ACTIONS(46),
    [sym_number] = ACTIONS(48),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(48),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_try] = ACTIONS(52),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(56),
    [sym_string] = ACTIONS(52),
    [sym_number] = ACTIONS(54),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(54),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_try] = ACTIONS(58),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(62),
    [sym_string] = ACTIONS(58),
    [sym_number] = ACTIONS(60),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(60),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(36),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_comment] = ACTIONS(36),
  },
  [12] = {
    [sym_script_block] = STATE(24),
    [sym_statement] = STATE(14),
    [sym_if] = STATE(9),
    [sym_while] = STATE(9),
    [sym_do] = STATE(9),
    [sym_try] = STATE(9),
    [sym_boolean_value] = STATE(9),
    [sym_user_variable] = STATE(9),
    [aux_sym_script_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [anon_sym_try] = ACTIONS(20),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(24),
    [sym_string] = ACTIONS(26),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(68),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(68),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [anon_sym_try] = ACTIONS(70),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(72),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(72),
  },
  [15] = {
    [sym_statement] = STATE(14),
    [sym_if] = STATE(9),
    [sym_while] = STATE(9),
    [sym_do] = STATE(9),
    [sym_try] = STATE(9),
    [sym_boolean_value] = STATE(9),
    [sym_user_variable] = STATE(9),
    [aux_sym_script_block_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [anon_sym_try] = ACTIONS(20),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(24),
    [sym_string] = ACTIONS(26),
    [sym_number] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(78),
  },
  [16] = {
    [sym_parameter_declaration] = STATE(29),
    [sym_attribute] = STATE(30),
    [sym_user_variable] = STATE(31),
    [aux_sym_parameter_declaration_repeat1] = STATE(32),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [17] = {
    [sym_boolean_value] = STATE(34),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [18] = {
    [sym_boolean_value] = STATE(35),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [19] = {
    [sym_statement] = STATE(42),
    [sym_if] = STATE(41),
    [sym_while] = STATE(41),
    [sym_do] = STATE(41),
    [sym_try] = STATE(41),
    [sym_boolean_value] = STATE(41),
    [sym_user_variable] = STATE(41),
    [aux_sym_script_block_repeat1] = STATE(43),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(92),
    [anon_sym_try] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(96),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(100),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
  },
  [20] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(36),
  },
  [21] = {
    [sym_statement] = STATE(42),
    [sym_if] = STATE(41),
    [sym_while] = STATE(41),
    [sym_do] = STATE(41),
    [sym_try] = STATE(41),
    [sym_boolean_value] = STATE(41),
    [sym_user_variable] = STATE(41),
    [aux_sym_script_block_repeat1] = STATE(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(92),
    [anon_sym_try] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(108),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(100),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
  },
  [22] = {
    [sym_catch] = STATE(49),
    [sym_finally] = STATE(50),
    [aux_sym_try_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(110),
    [anon_sym_try] = ACTIONS(110),
    [anon_sym_catch] = ACTIONS(112),
    [anon_sym_finally] = ACTIONS(114),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(118),
    [sym_string] = ACTIONS(110),
    [sym_number] = ACTIONS(116),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(116),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(122),
  },
  [25] = {
    [sym_statement] = STATE(14),
    [sym_if] = STATE(9),
    [sym_while] = STATE(9),
    [sym_do] = STATE(9),
    [sym_try] = STATE(9),
    [sym_boolean_value] = STATE(9),
    [sym_user_variable] = STATE(9),
    [aux_sym_script_block_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(132),
    [anon_sym_try] = ACTIONS(135),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(141),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(147),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(150),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(152),
    [anon_sym_try] = ACTIONS(152),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(156),
    [sym_string] = ACTIONS(152),
    [sym_number] = ACTIONS(154),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(154),
  },
  [27] = {
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(36),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_try] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(56),
    [sym_string] = ACTIONS(52),
    [sym_number] = ACTIONS(54),
    [sym_comment] = ACTIONS(36),
  },
  [29] = {
    [aux_sym_param_block_repeat1] = STATE(56),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym_comment] = ACTIONS(36),
  },
  [30] = {
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(36),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [32] = {
    [sym_attribute] = STATE(30),
    [sym_user_variable] = STATE(57),
    [aux_sym_parameter_declaration_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_try] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(46),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(50),
    [sym_string] = ACTIONS(46),
    [sym_number] = ACTIONS(48),
    [sym_comment] = ACTIONS(36),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(170),
    [sym_comment] = ACTIONS(36),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(174),
    [sym_comment] = ACTIONS(36),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(36),
  },
  [38] = {
    [sym_statement_block] = STATE(63),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [39] = {
    [sym_statement_block] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [40] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(178),
    [anon_sym_try] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
    [anon_sym_finally] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(182),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(36),
  },
  [41] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_try] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(62),
    [sym_string] = ACTIONS(58),
    [sym_number] = ACTIONS(60),
    [sym_comment] = ACTIONS(36),
  },
  [42] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [anon_sym_try] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(72),
    [sym_comment] = ACTIONS(36),
  },
  [43] = {
    [sym_statement] = STATE(42),
    [sym_if] = STATE(41),
    [sym_while] = STATE(41),
    [sym_do] = STATE(41),
    [sym_try] = STATE(41),
    [sym_boolean_value] = STATE(41),
    [sym_user_variable] = STATE(41),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(92),
    [anon_sym_try] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(184),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(100),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(186),
    [sym_comment] = ACTIONS(36),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [anon_sym_try] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
    [anon_sym_finally] = ACTIONS(178),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(182),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(180),
  },
  [46] = {
    [sym_statement] = STATE(42),
    [sym_if] = STATE(41),
    [sym_while] = STATE(41),
    [sym_do] = STATE(41),
    [sym_try] = STATE(41),
    [sym_boolean_value] = STATE(41),
    [sym_user_variable] = STATE(41),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(92),
    [anon_sym_try] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(188),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(100),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
  },
  [47] = {
    [sym_attribute] = STATE(30),
    [sym_statement_block] = STATE(69),
    [aux_sym_parameter_declaration_repeat1] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [48] = {
    [sym_statement_block] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(190),
    [anon_sym_try] = ACTIONS(190),
    [anon_sym_catch] = ACTIONS(190),
    [anon_sym_finally] = ACTIONS(190),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(194),
    [sym_string] = ACTIONS(190),
    [sym_number] = ACTIONS(192),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(192),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_try] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(198),
  },
  [51] = {
    [sym_catch] = STATE(49),
    [sym_finally] = STATE(72),
    [aux_sym_try_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_try] = ACTIONS(196),
    [anon_sym_catch] = ACTIONS(112),
    [anon_sym_finally] = ACTIONS(114),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(198),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_comment] = ACTIONS(36),
  },
  [53] = {
    [sym_attribute_arguments] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(206),
    [sym_comment] = ACTIONS(36),
  },
  [54] = {
    [sym_parameter_declaration] = STATE(77),
    [sym_attribute] = STATE(30),
    [sym_user_variable] = STATE(31),
    [aux_sym_parameter_declaration_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(208),
    [anon_sym_try] = ACTIONS(208),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(212),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(210),
  },
  [56] = {
    [aux_sym_param_block_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(214),
    [sym_comment] = ACTIONS(36),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [sym_comment] = ACTIONS(36),
  },
  [58] = {
    [sym_attribute] = STATE(30),
    [aux_sym_parameter_declaration_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(36),
  },
  [59] = {
    [sym_statement_block] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [60] = {
    [sym_statement_block] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [61] = {
    [sym_boolean_value] = STATE(82),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [62] = {
    [sym_boolean_value] = STATE(83),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [63] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(223),
    [sym_comment] = ACTIONS(36),
  },
  [64] = {
    [sym_catch] = STATE(87),
    [sym_finally] = STATE(88),
    [aux_sym_try_repeat1] = STATE(89),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(110),
    [anon_sym_try] = ACTIONS(110),
    [anon_sym_catch] = ACTIONS(225),
    [anon_sym_finally] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(110),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(118),
    [sym_string] = ACTIONS(110),
    [sym_number] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [65] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(229),
    [anon_sym_try] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_finally] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(233),
    [sym_string] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [sym_comment] = ACTIONS(36),
  },
  [66] = {
    [sym_statement] = STATE(42),
    [sym_if] = STATE(41),
    [sym_while] = STATE(41),
    [sym_do] = STATE(41),
    [sym_try] = STATE(41),
    [sym_boolean_value] = STATE(41),
    [sym_user_variable] = STATE(41),
    [aux_sym_script_block_repeat1] = STATE(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(241),
    [anon_sym_try] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(124),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_string] = ACTIONS(253),
    [sym_number] = ACTIONS(256),
    [sym_comment] = ACTIONS(36),
  },
  [67] = {
    [sym_boolean_value] = STATE(90),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(229),
    [anon_sym_try] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_finally] = ACTIONS(229),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(233),
    [sym_string] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(231),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(259),
    [anon_sym_try] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [anon_sym_finally] = ACTIONS(259),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(263),
    [sym_string] = ACTIONS(259),
    [sym_number] = ACTIONS(261),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(261),
  },
  [70] = {
    [sym_attribute] = STATE(30),
    [sym_statement_block] = STATE(91),
    [aux_sym_parameter_declaration_repeat1] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(269),
    [sym_string] = ACTIONS(265),
    [sym_number] = ACTIONS(267),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(267),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(271),
    [anon_sym_try] = ACTIONS(271),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(275),
    [sym_string] = ACTIONS(271),
    [sym_number] = ACTIONS(273),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(273),
  },
  [73] = {
    [sym_catch] = STATE(49),
    [aux_sym_try_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(277),
    [anon_sym_try] = ACTIONS(277),
    [anon_sym_catch] = ACTIONS(279),
    [anon_sym_finally] = ACTIONS(277),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(284),
    [sym_string] = ACTIONS(277),
    [sym_number] = ACTIONS(282),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(282),
  },
  [74] = {
    [sym_attribute_argument] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(286),
    [sym_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(36),
  },
  [75] = {
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(290),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(294),
    [sym_comment] = ACTIONS(36),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [sym_comment] = ACTIONS(36),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(298),
    [anon_sym_try] = ACTIONS(298),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(302),
    [sym_string] = ACTIONS(298),
    [sym_number] = ACTIONS(300),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(300),
  },
  [79] = {
    [aux_sym_param_block_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(296),
    [sym_comment] = ACTIONS(36),
  },
  [80] = {
    [sym_elseif] = STATE(99),
    [sym_else] = STATE(100),
    [aux_sym_if_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(307),
    [anon_sym_try] = ACTIONS(307),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(315),
    [sym_string] = ACTIONS(307),
    [sym_number] = ACTIONS(313),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(313),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [anon_sym_try] = ACTIONS(317),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(321),
    [sym_string] = ACTIONS(317),
    [sym_number] = ACTIONS(319),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(319),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [sym_comment] = ACTIONS(36),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(325),
    [sym_comment] = ACTIONS(36),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(36),
  },
  [85] = {
    [sym_attribute] = STATE(30),
    [sym_statement_block] = STATE(105),
    [aux_sym_parameter_declaration_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [86] = {
    [sym_statement_block] = STATE(107),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [87] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(190),
    [anon_sym_try] = ACTIONS(190),
    [anon_sym_catch] = ACTIONS(190),
    [anon_sym_finally] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(194),
    [sym_string] = ACTIONS(190),
    [sym_number] = ACTIONS(192),
    [sym_comment] = ACTIONS(36),
  },
  [88] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_try] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(36),
  },
  [89] = {
    [sym_catch] = STATE(87),
    [sym_finally] = STATE(108),
    [aux_sym_try_repeat1] = STATE(109),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_try] = ACTIONS(196),
    [anon_sym_catch] = ACTIONS(225),
    [anon_sym_finally] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(36),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [sym_comment] = ACTIONS(36),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(331),
    [anon_sym_try] = ACTIONS(331),
    [anon_sym_catch] = ACTIONS(331),
    [anon_sym_finally] = ACTIONS(331),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(335),
    [sym_string] = ACTIONS(331),
    [sym_number] = ACTIONS(333),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(333),
  },
  [92] = {
    [sym_attribute] = STATE(30),
    [aux_sym_parameter_declaration_repeat1] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(337),
    [sym_comment] = ACTIONS(36),
  },
  [93] = {
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_comment] = ACTIONS(36),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(343),
    [sym_comment] = ACTIONS(36),
  },
  [95] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(347),
    [sym_comment] = ACTIONS(36),
  },
  [96] = {
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_comment] = ACTIONS(36),
  },
  [97] = {
    [sym_statement_block] = STATE(115),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [98] = {
    [sym_statement_block] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(353),
    [anon_sym_try] = ACTIONS(353),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(357),
    [sym_string] = ACTIONS(353),
    [sym_number] = ACTIONS(355),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(355),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_string] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(361),
  },
  [101] = {
    [sym_elseif] = STATE(99),
    [sym_else] = STATE(117),
    [aux_sym_if_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_string] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(361),
  },
  [102] = {
    [sym_statement_block] = STATE(119),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [103] = {
    [sym_statement_block] = STATE(120),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [104] = {
    [sym_boolean_value] = STATE(121),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [105] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(259),
    [anon_sym_try] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [anon_sym_finally] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(263),
    [sym_string] = ACTIONS(259),
    [sym_number] = ACTIONS(261),
    [sym_comment] = ACTIONS(36),
  },
  [106] = {
    [sym_attribute] = STATE(30),
    [sym_statement_block] = STATE(122),
    [aux_sym_parameter_declaration_repeat1] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [107] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(269),
    [sym_string] = ACTIONS(265),
    [sym_number] = ACTIONS(267),
    [sym_comment] = ACTIONS(36),
  },
  [108] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(271),
    [anon_sym_try] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(275),
    [sym_string] = ACTIONS(271),
    [sym_number] = ACTIONS(273),
    [sym_comment] = ACTIONS(36),
  },
  [109] = {
    [sym_catch] = STATE(87),
    [aux_sym_try_repeat1] = STATE(109),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(277),
    [anon_sym_try] = ACTIONS(277),
    [anon_sym_catch] = ACTIONS(365),
    [anon_sym_finally] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(284),
    [sym_string] = ACTIONS(277),
    [sym_number] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(368),
    [anon_sym_try] = ACTIONS(368),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(372),
    [sym_string] = ACTIONS(368),
    [sym_number] = ACTIONS(370),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(370),
  },
  [111] = {
    [sym_identifier] = ACTIONS(374),
    [sym_string] = ACTIONS(376),
    [sym_number] = ACTIONS(374),
    [sym_comment] = ACTIONS(36),
  },
  [112] = {
    [sym_attribute_argument] = STATE(124),
    [sym_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(36),
  },
  [113] = {
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(36),
  },
  [114] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(380),
    [sym_comment] = ACTIONS(36),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(382),
    [anon_sym_try] = ACTIONS(382),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(386),
    [sym_string] = ACTIONS(382),
    [sym_number] = ACTIONS(384),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(384),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [anon_sym_try] = ACTIONS(388),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(392),
    [sym_string] = ACTIONS(388),
    [sym_number] = ACTIONS(390),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(390),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(394),
    [anon_sym_try] = ACTIONS(394),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(398),
    [sym_string] = ACTIONS(394),
    [sym_number] = ACTIONS(396),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(396),
  },
  [118] = {
    [sym_elseif] = STATE(99),
    [aux_sym_if_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(400),
    [anon_sym_try] = ACTIONS(400),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(407),
    [sym_string] = ACTIONS(400),
    [sym_number] = ACTIONS(405),
    [sym_comment] = ACTIONS(30),
    [sym_signature_block] = ACTIONS(405),
  },
  [119] = {
    [sym_elseif] = STATE(129),
    [sym_else] = STATE(130),
    [aux_sym_if_repeat1] = STATE(131),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(307),
    [anon_sym_try] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(315),
    [sym_string] = ACTIONS(307),
    [sym_number] = ACTIONS(313),
    [sym_comment] = ACTIONS(36),
  },
  [120] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [anon_sym_try] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(321),
    [sym_string] = ACTIONS(317),
    [sym_number] = ACTIONS(319),
    [sym_comment] = ACTIONS(36),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(413),
    [sym_comment] = ACTIONS(36),
  },
  [122] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(331),
    [anon_sym_try] = ACTIONS(331),
    [anon_sym_catch] = ACTIONS(331),
    [anon_sym_finally] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(335),
    [sym_string] = ACTIONS(331),
    [sym_number] = ACTIONS(333),
    [sym_comment] = ACTIONS(36),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [sym_comment] = ACTIONS(36),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [sym_comment] = ACTIONS(36),
  },
  [125] = {
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_comment] = ACTIONS(36),
  },
  [126] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(417),
    [sym_comment] = ACTIONS(36),
  },
  [127] = {
    [sym_statement_block] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [128] = {
    [sym_statement_block] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_comment] = ACTIONS(36),
  },
  [129] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(353),
    [anon_sym_try] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(357),
    [sym_string] = ACTIONS(353),
    [sym_number] = ACTIONS(355),
    [sym_comment] = ACTIONS(36),
  },
  [130] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_string] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_comment] = ACTIONS(36),
  },
  [131] = {
    [sym_elseif] = STATE(129),
    [sym_else] = STATE(135),
    [aux_sym_if_repeat1] = STATE(136),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_string] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_comment] = ACTIONS(36),
  },
  [132] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(368),
    [anon_sym_try] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(368),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(372),
    [sym_string] = ACTIONS(368),
    [sym_number] = ACTIONS(370),
    [sym_comment] = ACTIONS(36),
  },
  [133] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(382),
    [anon_sym_try] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(386),
    [sym_string] = ACTIONS(382),
    [sym_number] = ACTIONS(384),
    [sym_comment] = ACTIONS(36),
  },
  [134] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [anon_sym_try] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(392),
    [sym_string] = ACTIONS(388),
    [sym_number] = ACTIONS(390),
    [sym_comment] = ACTIONS(36),
  },
  [135] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(394),
    [anon_sym_try] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(394),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(398),
    [sym_string] = ACTIONS(394),
    [sym_number] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [136] = {
    [sym_elseif] = STATE(129),
    [aux_sym_if_repeat1] = STATE(136),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(400),
    [anon_sym_try] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(400),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(407),
    [sym_string] = ACTIONS(400),
    [sym_number] = ACTIONS(405),
    [sym_comment] = ACTIONS(36),
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
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [129] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [132] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [135] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [138] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(7),
  [141] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(8),
  [144] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(9),
  [147] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(9),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [218] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(27),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [235] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(36),
  [238] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(37),
  [241] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(38),
  [244] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(39),
  [247] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(33),
  [250] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(28),
  [253] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(41),
  [256] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(41),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [279] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(47),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 5),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [304] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(54),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [365] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(85),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [402] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(97),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [421] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [424] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(127),
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
