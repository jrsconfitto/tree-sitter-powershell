#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 332
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH = 14,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH = 16,
  anon_sym_DASH = 17,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH = 18,
  anon_sym_try = 19,
  anon_sym_catch = 20,
  anon_sym_finally = 21,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 22,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_SEMI = 29,
  aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH = 30,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 31,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 32,
  sym_identifier = 33,
  sym_string = 34,
  sym_number = 35,
  sym_comment = 36,
  sym_signature_block = 37,
  sym_script = 38,
  sym_param_block = 39,
  sym_parameter_declaration = 40,
  sym_attribute = 41,
  sym_attribute_arguments = 42,
  sym_attribute_argument = 43,
  sym_script_block = 44,
  sym_statement = 45,
  sym_if = 46,
  sym_elseif = 47,
  sym_else = 48,
  sym_while = 49,
  sym_do = 50,
  sym_for = 51,
  sym_foreach = 52,
  sym_foreach_parameter = 53,
  sym_try = 54,
  sym_catch = 55,
  sym_finally = 56,
  sym_flow_control_statement = 57,
  sym_flow_break_continue = 58,
  sym_statement_block = 59,
  sym_statement_terminator = 60,
  sym_boolean_value = 61,
  sym_user_variable = 62,
  aux_sym_param_block_repeat1 = 63,
  aux_sym_parameter_declaration_repeat1 = 64,
  aux_sym_attribute_arguments_repeat1 = 65,
  aux_sym_script_block_repeat1 = 66,
  aux_sym_if_repeat1 = 67,
  aux_sym_try_repeat1 = 68,
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
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[fF][oO][rR]/",
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = "/[fF][oO][rR][eE][aA][cC][hH]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[iI][nN]/",
  [anon_sym_DASH] = "-",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[pP][aA][rR][aA][lL][lL][eE][lL]/",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[rR][eE][tT][uU][rR][nN]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = "/[tT][hH][rR][oO][wW]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[eE][xX][iI][tT]/",
  [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = "/[bB][rR][eE][aA][kK]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][oO][nN][tT][iI][nN][uU][eE]/",
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
  [sym_elseif] = "elseif",
  [sym_else] = "else",
  [sym_while] = "while",
  [sym_do] = "do",
  [sym_for] = "for",
  [sym_foreach] = "foreach",
  [sym_foreach_parameter] = "foreach_parameter",
  [sym_try] = "try",
  [sym_catch] = "catch",
  [sym_finally] = "finally",
  [sym_flow_control_statement] = "flow_control_statement",
  [sym_flow_break_continue] = "flow_break_continue",
  [sym_statement_block] = "statement_block",
  [sym_statement_terminator] = "statement_terminator",
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
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = {
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
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_parameter] = {
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
  [sym_flow_control_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_break_continue] = {
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
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '+')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'X')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(28);
      if (lookahead == 'x')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      if (lookahead == '#')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '#')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(37);
      if (lookahead == '>')
        ADVANCE(38);
      if (lookahead == '?')
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 39:
      if (lookahead == ':')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(36);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 95:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 101:
      if (lookahead == 'r')
        ADVANCE(102);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 'y')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 119:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 130:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 143:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 148:
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
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      END_STATE();
    case 149:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 150:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(151);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      END_STATE();
    case 151:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 152:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(153);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(154);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(157);
      END_STATE();
    case 161:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(163);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'c')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'h')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 167:
      if (lookahead == 'i')
        ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 168:
      if (lookahead == 'n')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'a')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'l')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'y')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 174:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(175);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 180:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 189:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 190:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 193:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      END_STATE();
    case 194:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 195:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(175);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(197);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(120);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 202:
      if (lookahead == '\r')
        ADVANCE(203);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(202);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == '\r')
        ADVANCE(203);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '|')
        ADVANCE(205);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(202);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 205:
      if (lookahead == '\r')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      END_STATE();
    case 207:
      if (lookahead == '\r')
        ADVANCE(208);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(207);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == '\r')
        ADVANCE(208);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(205);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(207);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 210:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(192);
      END_STATE();
    case 212:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 213:
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 214:
      if (lookahead == '\r')
        ADVANCE(215);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(214);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == '\r')
        ADVANCE(215);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(109);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '|')
        ADVANCE(205);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(214);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 217:
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 220:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 221:
      if (lookahead == '\r')
        ADVANCE(222);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(221);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == '\r')
        ADVANCE(222);
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
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '|')
        ADVANCE(205);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(221);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 148},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 148},
  [6] = {.lex_state = 148},
  [7] = {.lex_state = 148},
  [8] = {.lex_state = 148},
  [9] = {.lex_state = 95},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 148},
  [15] = {.lex_state = 148},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 95},
  [19] = {.lex_state = 95},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 152},
  [22] = {.lex_state = 152},
  [23] = {.lex_state = 161},
  [24] = {.lex_state = 174},
  [25] = {.lex_state = 161},
  [26] = {.lex_state = 150},
  [27] = {.lex_state = 180},
  [28] = {.lex_state = 148},
  [29] = {.lex_state = 161},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 148},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 148},
  [39] = {.lex_state = 193},
  [40] = {.lex_state = 148},
  [41] = {.lex_state = 150},
  [42] = {.lex_state = 161},
  [43] = {.lex_state = 148},
  [44] = {.lex_state = 148},
  [45] = {.lex_state = 148},
  [46] = {.lex_state = 148},
  [47] = {.lex_state = 148},
  [48] = {.lex_state = 148},
  [49] = {.lex_state = 148},
  [50] = {.lex_state = 148},
  [51] = {.lex_state = 161},
  [52] = {.lex_state = 194},
  [53] = {.lex_state = 195},
  [54] = {.lex_state = 161},
  [55] = {.lex_state = 161},
  [56] = {.lex_state = 161},
  [57] = {.lex_state = 148},
  [58] = {.lex_state = 148},
  [59] = {.lex_state = 148},
  [60] = {.lex_state = 148},
  [61] = {.lex_state = 148},
  [62] = {.lex_state = 148},
  [63] = {.lex_state = 148},
  [64] = {.lex_state = 148},
  [65] = {.lex_state = 202},
  [66] = {.lex_state = 207},
  [67] = {.lex_state = 202},
  [68] = {.lex_state = 202},
  [69] = {.lex_state = 202},
  [70] = {.lex_state = 202},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 148},
  [73] = {.lex_state = 150},
  [74] = {.lex_state = 212},
  [75] = {.lex_state = 161},
  [76] = {.lex_state = 148},
  [77] = {.lex_state = 148},
  [78] = {.lex_state = 189},
  [79] = {.lex_state = 95},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 148},
  [82] = {.lex_state = 148},
  [83] = {.lex_state = 150},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 148},
  [86] = {.lex_state = 148},
  [87] = {.lex_state = 150},
  [88] = {.lex_state = 148},
  [89] = {.lex_state = 148},
  [90] = {.lex_state = 152},
  [91] = {.lex_state = 152},
  [92] = {.lex_state = 174},
  [93] = {.lex_state = 161},
  [94] = {.lex_state = 150},
  [95] = {.lex_state = 148},
  [96] = {.lex_state = 161},
  [97] = {.lex_state = 161},
  [98] = {.lex_state = 195},
  [99] = {.lex_state = 161},
  [100] = {.lex_state = 152},
  [101] = {.lex_state = 95},
  [102] = {.lex_state = 152},
  [103] = {.lex_state = 152},
  [104] = {.lex_state = 174},
  [105] = {.lex_state = 161},
  [106] = {.lex_state = 150},
  [107] = {.lex_state = 148},
  [108] = {.lex_state = 161},
  [109] = {.lex_state = 202},
  [110] = {.lex_state = 202},
  [111] = {.lex_state = 148},
  [112] = {.lex_state = 161},
  [113] = {.lex_state = 202},
  [114] = {.lex_state = 161},
  [115] = {.lex_state = 150},
  [116] = {.lex_state = 210},
  [117] = {.lex_state = 212},
  [118] = {.lex_state = 189},
  [119] = {.lex_state = 148},
  [120] = {.lex_state = 95},
  [121] = {.lex_state = 95},
  [122] = {.lex_state = 189},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 193},
  [125] = {.lex_state = 148},
  [126] = {.lex_state = 148},
  [127] = {.lex_state = 95},
  [128] = {.lex_state = 148},
  [129] = {.lex_state = 213},
  [130] = {.lex_state = 95},
  [131] = {.lex_state = 148},
  [132] = {.lex_state = 148},
  [133] = {.lex_state = 148},
  [134] = {.lex_state = 148},
  [135] = {.lex_state = 202},
  [136] = {.lex_state = 210},
  [137] = {.lex_state = 150},
  [138] = {.lex_state = 148},
  [139] = {.lex_state = 148},
  [140] = {.lex_state = 161},
  [141] = {.lex_state = 161},
  [142] = {.lex_state = 161},
  [143] = {.lex_state = 148},
  [144] = {.lex_state = 148},
  [145] = {.lex_state = 148},
  [146] = {.lex_state = 148},
  [147] = {.lex_state = 148},
  [148] = {.lex_state = 202},
  [149] = {.lex_state = 210},
  [150] = {.lex_state = 150},
  [151] = {.lex_state = 214},
  [152] = {.lex_state = 161},
  [153] = {.lex_state = 148},
  [154] = {.lex_state = 148},
  [155] = {.lex_state = 202},
  [156] = {.lex_state = 202},
  [157] = {.lex_state = 202},
  [158] = {.lex_state = 95},
  [159] = {.lex_state = 148},
  [160] = {.lex_state = 148},
  [161] = {.lex_state = 148},
  [162] = {.lex_state = 217},
  [163] = {.lex_state = 202},
  [164] = {.lex_state = 161},
  [165] = {.lex_state = 202},
  [166] = {.lex_state = 148},
  [167] = {.lex_state = 150},
  [168] = {.lex_state = 189},
  [169] = {.lex_state = 148},
  [170] = {.lex_state = 148},
  [171] = {.lex_state = 148},
  [172] = {.lex_state = 148},
  [173] = {.lex_state = 193},
  [174] = {.lex_state = 148},
  [175] = {.lex_state = 148},
  [176] = {.lex_state = 213},
  [177] = {.lex_state = 95},
  [178] = {.lex_state = 213},
  [179] = {.lex_state = 148},
  [180] = {.lex_state = 148},
  [181] = {.lex_state = 152},
  [182] = {.lex_state = 161},
  [183] = {.lex_state = 148},
  [184] = {.lex_state = 202},
  [185] = {.lex_state = 161},
  [186] = {.lex_state = 150},
  [187] = {.lex_state = 210},
  [188] = {.lex_state = 161},
  [189] = {.lex_state = 148},
  [190] = {.lex_state = 161},
  [191] = {.lex_state = 161},
  [192] = {.lex_state = 161},
  [193] = {.lex_state = 95},
  [194] = {.lex_state = 148},
  [195] = {.lex_state = 148},
  [196] = {.lex_state = 152},
  [197] = {.lex_state = 202},
  [198] = {.lex_state = 148},
  [199] = {.lex_state = 202},
  [200] = {.lex_state = 161},
  [201] = {.lex_state = 150},
  [202] = {.lex_state = 210},
  [203] = {.lex_state = 214},
  [204] = {.lex_state = 202},
  [205] = {.lex_state = 148},
  [206] = {.lex_state = 202},
  [207] = {.lex_state = 202},
  [208] = {.lex_state = 202},
  [209] = {.lex_state = 95},
  [210] = {.lex_state = 152},
  [211] = {.lex_state = 202},
  [212] = {.lex_state = 148},
  [213] = {.lex_state = 148},
  [214] = {.lex_state = 202},
  [215] = {.lex_state = 161},
  [216] = {.lex_state = 148},
  [217] = {.lex_state = 148},
  [218] = {.lex_state = 152},
  [219] = {.lex_state = 152},
  [220] = {.lex_state = 148},
  [221] = {.lex_state = 148},
  [222] = {.lex_state = 213},
  [223] = {.lex_state = 95},
  [224] = {.lex_state = 95},
  [225] = {.lex_state = 213},
  [226] = {.lex_state = 220},
  [227] = {.lex_state = 161},
  [228] = {.lex_state = 148},
  [229] = {.lex_state = 161},
  [230] = {.lex_state = 148},
  [231] = {.lex_state = 202},
  [232] = {.lex_state = 161},
  [233] = {.lex_state = 202},
  [234] = {.lex_state = 148},
  [235] = {.lex_state = 150},
  [236] = {.lex_state = 161},
  [237] = {.lex_state = 221},
  [238] = {.lex_state = 202},
  [239] = {.lex_state = 148},
  [240] = {.lex_state = 202},
  [241] = {.lex_state = 148},
  [242] = {.lex_state = 202},
  [243] = {.lex_state = 161},
  [244] = {.lex_state = 202},
  [245] = {.lex_state = 148},
  [246] = {.lex_state = 150},
  [247] = {.lex_state = 202},
  [248] = {.lex_state = 148},
  [249] = {.lex_state = 202},
  [250] = {.lex_state = 95},
  [251] = {.lex_state = 148},
  [252] = {.lex_state = 148},
  [253] = {.lex_state = 202},
  [254] = {.lex_state = 95},
  [255] = {.lex_state = 148},
  [256] = {.lex_state = 148},
  [257] = {.lex_state = 148},
  [258] = {.lex_state = 148},
  [259] = {.lex_state = 148},
  [260] = {.lex_state = 148},
  [261] = {.lex_state = 148},
  [262] = {.lex_state = 220},
  [263] = {.lex_state = 161},
  [264] = {.lex_state = 220},
  [265] = {.lex_state = 161},
  [266] = {.lex_state = 161},
  [267] = {.lex_state = 148},
  [268] = {.lex_state = 148},
  [269] = {.lex_state = 202},
  [270] = {.lex_state = 161},
  [271] = {.lex_state = 148},
  [272] = {.lex_state = 148},
  [273] = {.lex_state = 148},
  [274] = {.lex_state = 148},
  [275] = {.lex_state = 221},
  [276] = {.lex_state = 202},
  [277] = {.lex_state = 221},
  [278] = {.lex_state = 202},
  [279] = {.lex_state = 202},
  [280] = {.lex_state = 148},
  [281] = {.lex_state = 148},
  [282] = {.lex_state = 202},
  [283] = {.lex_state = 161},
  [284] = {.lex_state = 148},
  [285] = {.lex_state = 148},
  [286] = {.lex_state = 148},
  [287] = {.lex_state = 202},
  [288] = {.lex_state = 95},
  [289] = {.lex_state = 148},
  [290] = {.lex_state = 148},
  [291] = {.lex_state = 95},
  [292] = {.lex_state = 220},
  [293] = {.lex_state = 161},
  [294] = {.lex_state = 161},
  [295] = {.lex_state = 220},
  [296] = {.lex_state = 161},
  [297] = {.lex_state = 148},
  [298] = {.lex_state = 148},
  [299] = {.lex_state = 202},
  [300] = {.lex_state = 161},
  [301] = {.lex_state = 148},
  [302] = {.lex_state = 221},
  [303] = {.lex_state = 202},
  [304] = {.lex_state = 202},
  [305] = {.lex_state = 221},
  [306] = {.lex_state = 202},
  [307] = {.lex_state = 148},
  [308] = {.lex_state = 148},
  [309] = {.lex_state = 202},
  [310] = {.lex_state = 202},
  [311] = {.lex_state = 148},
  [312] = {.lex_state = 221},
  [313] = {.lex_state = 95},
  [314] = {.lex_state = 148},
  [315] = {.lex_state = 161},
  [316] = {.lex_state = 148},
  [317] = {.lex_state = 148},
  [318] = {.lex_state = 161},
  [319] = {.lex_state = 202},
  [320] = {.lex_state = 148},
  [321] = {.lex_state = 148},
  [322] = {.lex_state = 202},
  [323] = {.lex_state = 221},
  [324] = {.lex_state = 95},
  [325] = {.lex_state = 161},
  [326] = {.lex_state = 148},
  [327] = {.lex_state = 202},
  [328] = {.lex_state = 148},
  [329] = {.lex_state = 221},
  [330] = {.lex_state = 161},
  [331] = {.lex_state = 202},
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
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(5),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_signature_block] = ACTIONS(3),
  },
  [1] = {
    [sym_script] = STATE(15),
    [sym_param_block] = STATE(16),
    [sym_script_block] = STATE(17),
    [sym_statement] = STATE(18),
    [sym_if] = STATE(13),
    [sym_while] = STATE(13),
    [sym_do] = STATE(13),
    [sym_for] = STATE(13),
    [sym_foreach] = STATE(13),
    [sym_try] = STATE(13),
    [sym_flow_control_statement] = STATE(13),
    [sym_flow_break_continue] = STATE(9),
    [sym_boolean_value] = STATE(13),
    [sym_user_variable] = STATE(13),
    [aux_sym_script_block_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [anon_sym_try] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [sym_number] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(40),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(46),
    [sym_comment] = ACTIONS(44),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_comment] = ACTIONS(44),
  },
  [5] = {
    [sym_statement_block] = STATE(24),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(52),
    [sym_comment] = ACTIONS(44),
  },
  [7] = {
    [sym_foreach_parameter] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(44),
  },
  [8] = {
    [sym_statement_block] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(60),
    [anon_sym_try] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(64),
    [sym_string] = ACTIONS(60),
    [sym_number] = ACTIONS(62),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(62),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(68),
    [anon_sym_try] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_string] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(68),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [anon_sym_try] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_string] = ACTIONS(74),
    [sym_number] = ACTIONS(76),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(76),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(80),
    [anon_sym_try] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(82),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_try] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(90),
    [sym_string] = ACTIONS(86),
    [sym_number] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(88),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(44),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(44),
  },
  [16] = {
    [sym_script_block] = STATE(33),
    [sym_statement] = STATE(18),
    [sym_if] = STATE(13),
    [sym_while] = STATE(13),
    [sym_do] = STATE(13),
    [sym_for] = STATE(13),
    [sym_foreach] = STATE(13),
    [sym_try] = STATE(13),
    [sym_flow_control_statement] = STATE(13),
    [sym_flow_break_continue] = STATE(9),
    [sym_boolean_value] = STATE(13),
    [sym_user_variable] = STATE(13),
    [aux_sym_script_block_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [anon_sym_try] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [sym_number] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(96),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(96),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [anon_sym_try] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(100),
  },
  [19] = {
    [sym_statement] = STATE(18),
    [sym_if] = STATE(13),
    [sym_while] = STATE(13),
    [sym_do] = STATE(13),
    [sym_for] = STATE(13),
    [sym_foreach] = STATE(13),
    [sym_try] = STATE(13),
    [sym_flow_control_statement] = STATE(13),
    [sym_flow_break_continue] = STATE(9),
    [sym_boolean_value] = STATE(13),
    [sym_user_variable] = STATE(13),
    [aux_sym_script_block_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [anon_sym_try] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [sym_number] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(106),
  },
  [20] = {
    [sym_parameter_declaration] = STATE(38),
    [sym_attribute] = STATE(39),
    [sym_user_variable] = STATE(40),
    [aux_sym_parameter_declaration_repeat1] = STATE(41),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [21] = {
    [sym_boolean_value] = STATE(43),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [22] = {
    [sym_boolean_value] = STATE(44),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [23] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(132),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(44),
  },
  [25] = {
    [sym_statement] = STATE(70),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [26] = {
    [sym_user_variable] = STATE(71),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [27] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(44),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(172),
    [sym_comment] = ACTIONS(44),
  },
  [29] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(75),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(174),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [30] = {
    [sym_catch] = STATE(78),
    [sym_finally] = STATE(79),
    [aux_sym_try_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [anon_sym_try] = ACTIONS(176),
    [anon_sym_catch] = ACTIONS(180),
    [anon_sym_finally] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(184),
    [sym_string] = ACTIONS(176),
    [sym_number] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(178),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_try] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(186),
    [sym_number] = ACTIONS(188),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(188),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_comment] = ACTIONS(44),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(194),
  },
  [34] = {
    [sym_statement] = STATE(18),
    [sym_if] = STATE(13),
    [sym_while] = STATE(13),
    [sym_do] = STATE(13),
    [sym_for] = STATE(13),
    [sym_foreach] = STATE(13),
    [sym_try] = STATE(13),
    [sym_flow_control_statement] = STATE(13),
    [sym_flow_break_continue] = STATE(9),
    [sym_boolean_value] = STATE(13),
    [sym_user_variable] = STATE(13),
    [aux_sym_script_block_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [anon_sym_try] = ACTIONS(213),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(225),
    [sym_string] = ACTIONS(228),
    [sym_number] = ACTIONS(231),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(234),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [anon_sym_try] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(240),
    [sym_string] = ACTIONS(236),
    [sym_number] = ACTIONS(238),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(238),
  },
  [36] = {
    [sym_identifier] = ACTIONS(242),
    [sym_comment] = ACTIONS(44),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [anon_sym_try] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [38] = {
    [aux_sym_param_block_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(246),
    [sym_comment] = ACTIONS(44),
  },
  [39] = {
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_comment] = ACTIONS(44),
  },
  [40] = {
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(44),
  },
  [41] = {
    [sym_attribute] = STATE(39),
    [sym_user_variable] = STATE(86),
    [aux_sym_parameter_declaration_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [anon_sym_try] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_string] = ACTIONS(74),
    [sym_number] = ACTIONS(76),
    [sym_comment] = ACTIONS(44),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(44),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(256),
    [sym_comment] = ACTIONS(44),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(258),
    [sym_comment] = ACTIONS(44),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(260),
    [sym_comment] = ACTIONS(44),
  },
  [47] = {
    [sym_statement_block] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(262),
    [sym_comment] = ACTIONS(44),
  },
  [49] = {
    [sym_foreach_parameter] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(44),
  },
  [50] = {
    [sym_statement_block] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [51] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(60),
    [anon_sym_try] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(64),
    [sym_string] = ACTIONS(60),
    [sym_number] = ACTIONS(62),
    [sym_comment] = ACTIONS(44),
  },
  [52] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(68),
    [anon_sym_try] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(66),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(70),
    [sym_identifier] = ACTIONS(266),
    [sym_string] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [53] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_try] = ACTIONS(268),
    [anon_sym_catch] = ACTIONS(268),
    [anon_sym_finally] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(272),
    [sym_string] = ACTIONS(268),
    [sym_number] = ACTIONS(270),
    [sym_comment] = ACTIONS(44),
  },
  [54] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_try] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(90),
    [sym_string] = ACTIONS(86),
    [sym_number] = ACTIONS(88),
    [sym_comment] = ACTIONS(44),
  },
  [55] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [anon_sym_try] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_comment] = ACTIONS(44),
  },
  [56] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(99),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(274),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(276),
    [sym_comment] = ACTIONS(44),
  },
  [58] = {
    [sym_statement_block] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [sym_comment] = ACTIONS(44),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(280),
    [sym_comment] = ACTIONS(44),
  },
  [61] = {
    [sym_statement_block] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(44),
  },
  [63] = {
    [sym_foreach_parameter] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(44),
  },
  [64] = {
    [sym_statement_block] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(64),
    [anon_sym_try] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [anon_sym_SEMI] = ACTIONS(64),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(64),
    [sym_string] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_comment] = ACTIONS(38),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(70),
    [anon_sym_try] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(70),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(70),
    [sym_identifier] = ACTIONS(288),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [sym_comment] = ACTIONS(38),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_try] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_try] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [sym_comment] = ACTIONS(38),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(90),
    [anon_sym_try] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(90),
    [sym_string] = ACTIONS(90),
    [sym_number] = ACTIONS(90),
    [sym_comment] = ACTIONS(38),
  },
  [70] = {
    [sym_statement] = STATE(113),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(114),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [71] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(314),
    [sym_comment] = ACTIONS(44),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(316),
    [sym_comment] = ACTIONS(44),
  },
  [73] = {
    [sym_user_variable] = STATE(116),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(268),
    [anon_sym_try] = ACTIONS(268),
    [anon_sym_catch] = ACTIONS(268),
    [anon_sym_finally] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(272),
    [sym_string] = ACTIONS(268),
    [sym_number] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(270),
  },
  [75] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(99),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(318),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [76] = {
    [sym_attribute] = STATE(39),
    [sym_statement_block] = STATE(118),
    [aux_sym_parameter_declaration_repeat1] = STATE(119),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [77] = {
    [sym_statement_block] = STATE(120),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(320),
    [anon_sym_try] = ACTIONS(320),
    [anon_sym_catch] = ACTIONS(320),
    [anon_sym_finally] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(324),
    [sym_string] = ACTIONS(320),
    [sym_number] = ACTIONS(322),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(322),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_try] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(330),
    [sym_string] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(328),
  },
  [80] = {
    [sym_catch] = STATE(78),
    [sym_finally] = STATE(121),
    [aux_sym_try_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_try] = ACTIONS(326),
    [anon_sym_catch] = ACTIONS(180),
    [anon_sym_finally] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(330),
    [sym_string] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(328),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [sym_comment] = ACTIONS(44),
  },
  [82] = {
    [sym_attribute_arguments] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(336),
    [sym_comment] = ACTIONS(44),
  },
  [83] = {
    [sym_parameter_declaration] = STATE(126),
    [sym_attribute] = STATE(39),
    [sym_user_variable] = STATE(40),
    [aux_sym_parameter_declaration_repeat1] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(338),
    [anon_sym_try] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(342),
    [sym_string] = ACTIONS(338),
    [sym_number] = ACTIONS(340),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(340),
  },
  [85] = {
    [aux_sym_param_block_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(344),
    [sym_comment] = ACTIONS(44),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(44),
  },
  [87] = {
    [sym_attribute] = STATE(39),
    [aux_sym_parameter_declaration_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_comment] = ACTIONS(44),
  },
  [88] = {
    [sym_statement_block] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [89] = {
    [sym_statement_block] = STATE(130),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [90] = {
    [sym_boolean_value] = STATE(131),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [91] = {
    [sym_boolean_value] = STATE(132),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [92] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [93] = {
    [sym_statement] = STATE(135),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [94] = {
    [sym_user_variable] = STATE(136),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(357),
    [sym_comment] = ACTIONS(44),
  },
  [96] = {
    [sym_catch] = STATE(140),
    [sym_finally] = STATE(141),
    [aux_sym_try_repeat1] = STATE(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [anon_sym_try] = ACTIONS(176),
    [anon_sym_catch] = ACTIONS(359),
    [anon_sym_finally] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(184),
    [sym_string] = ACTIONS(176),
    [sym_number] = ACTIONS(178),
    [sym_comment] = ACTIONS(44),
  },
  [97] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_try] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(186),
    [sym_number] = ACTIONS(188),
    [sym_comment] = ACTIONS(44),
  },
  [98] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(363),
    [anon_sym_try] = ACTIONS(363),
    [anon_sym_catch] = ACTIONS(363),
    [anon_sym_finally] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(367),
    [sym_string] = ACTIONS(363),
    [sym_number] = ACTIONS(365),
    [sym_comment] = ACTIONS(44),
  },
  [99] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(99),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(381),
    [anon_sym_try] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(390),
    [anon_sym_RBRACE] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(396),
    [sym_string] = ACTIONS(399),
    [sym_number] = ACTIONS(402),
    [sym_comment] = ACTIONS(44),
  },
  [100] = {
    [sym_boolean_value] = STATE(143),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [anon_sym_try] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(409),
    [sym_string] = ACTIONS(405),
    [sym_number] = ACTIONS(407),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(407),
  },
  [102] = {
    [sym_boolean_value] = STATE(144),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [103] = {
    [sym_boolean_value] = STATE(145),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [104] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(411),
    [sym_comment] = ACTIONS(44),
  },
  [105] = {
    [sym_statement] = STATE(148),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [106] = {
    [sym_user_variable] = STATE(149),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(415),
    [sym_comment] = ACTIONS(44),
  },
  [108] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(152),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(417),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [109] = {
    [sym_catch] = STATE(155),
    [sym_finally] = STATE(156),
    [aux_sym_try_repeat1] = STATE(157),
    [anon_sym_RPAREN] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(184),
    [anon_sym_try] = ACTIONS(184),
    [anon_sym_catch] = ACTIONS(419),
    [anon_sym_finally] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(184),
    [sym_string] = ACTIONS(184),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [anon_sym_try] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(190),
    [sym_number] = ACTIONS(190),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [sym_statement_block] = STATE(158),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(423),
    [anon_sym_try] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(427),
    [sym_string] = ACTIONS(423),
    [sym_number] = ACTIONS(425),
    [sym_comment] = ACTIONS(44),
  },
  [113] = {
    [sym_statement] = STATE(163),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(164),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(429),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [sym_statement] = STATE(165),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [115] = {
    [sym_user_variable] = STATE(166),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [116] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(439),
    [sym_comment] = ACTIONS(44),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(363),
    [anon_sym_try] = ACTIONS(363),
    [anon_sym_catch] = ACTIONS(363),
    [anon_sym_finally] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(367),
    [sym_string] = ACTIONS(363),
    [sym_number] = ACTIONS(365),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(365),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_try] = ACTIONS(441),
    [anon_sym_catch] = ACTIONS(441),
    [anon_sym_finally] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(445),
    [sym_string] = ACTIONS(441),
    [sym_number] = ACTIONS(443),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(443),
  },
  [119] = {
    [sym_attribute] = STATE(39),
    [sym_statement_block] = STATE(168),
    [aux_sym_parameter_declaration_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(447),
    [anon_sym_try] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(451),
    [sym_string] = ACTIONS(447),
    [sym_number] = ACTIONS(449),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(449),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [anon_sym_try] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(457),
    [sym_string] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(455),
  },
  [122] = {
    [sym_catch] = STATE(78),
    [aux_sym_try_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(459),
    [anon_sym_try] = ACTIONS(459),
    [anon_sym_catch] = ACTIONS(463),
    [anon_sym_finally] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(466),
    [sym_string] = ACTIONS(459),
    [sym_number] = ACTIONS(461),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(461),
  },
  [123] = {
    [sym_attribute_argument] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(44),
  },
  [124] = {
    [anon_sym_LBRACK] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(472),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(474),
    [sym_comment] = ACTIONS(44),
  },
  [125] = {
    [anon_sym_RBRACK] = ACTIONS(476),
    [sym_comment] = ACTIONS(44),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_comment] = ACTIONS(44),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(480),
    [anon_sym_try] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(484),
    [sym_string] = ACTIONS(480),
    [sym_number] = ACTIONS(482),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(482),
  },
  [128] = {
    [aux_sym_param_block_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_comment] = ACTIONS(44),
  },
  [129] = {
    [sym_elseif] = STATE(176),
    [sym_else] = STATE(177),
    [aux_sym_if_repeat1] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_try] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(497),
    [sym_string] = ACTIONS(489),
    [sym_number] = ACTIONS(495),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(495),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_try] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(503),
    [sym_string] = ACTIONS(499),
    [sym_number] = ACTIONS(501),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(501),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(505),
    [sym_comment] = ACTIONS(44),
  },
  [132] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [sym_comment] = ACTIONS(44),
  },
  [133] = {
    [anon_sym_LPAREN] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [134] = {
    [sym_statement_block] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [135] = {
    [sym_statement] = STATE(184),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(185),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(44),
  },
  [137] = {
    [sym_user_variable] = STATE(187),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [138] = {
    [sym_attribute] = STATE(39),
    [sym_statement_block] = STATE(188),
    [aux_sym_parameter_declaration_repeat1] = STATE(189),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [139] = {
    [sym_statement_block] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [140] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(320),
    [anon_sym_try] = ACTIONS(320),
    [anon_sym_catch] = ACTIONS(320),
    [anon_sym_finally] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(324),
    [sym_string] = ACTIONS(320),
    [sym_number] = ACTIONS(322),
    [sym_comment] = ACTIONS(44),
  },
  [141] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_try] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(330),
    [sym_string] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_comment] = ACTIONS(44),
  },
  [142] = {
    [sym_catch] = STATE(140),
    [sym_finally] = STATE(191),
    [aux_sym_try_repeat1] = STATE(192),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_try] = ACTIONS(326),
    [anon_sym_catch] = ACTIONS(359),
    [anon_sym_finally] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(330),
    [sym_string] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_comment] = ACTIONS(44),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_comment] = ACTIONS(44),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(517),
    [sym_comment] = ACTIONS(44),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(519),
    [sym_comment] = ACTIONS(44),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(521),
    [sym_comment] = ACTIONS(44),
  },
  [147] = {
    [sym_statement_block] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [148] = {
    [sym_statement] = STATE(199),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(200),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [149] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(525),
    [sym_comment] = ACTIONS(44),
  },
  [150] = {
    [sym_user_variable] = STATE(202),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(272),
    [anon_sym_try] = ACTIONS(272),
    [anon_sym_catch] = ACTIONS(272),
    [anon_sym_finally] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(272),
    [sym_string] = ACTIONS(272),
    [sym_number] = ACTIONS(272),
    [sym_comment] = ACTIONS(38),
  },
  [152] = {
    [sym_statement] = STATE(55),
    [sym_if] = STATE(54),
    [sym_while] = STATE(54),
    [sym_do] = STATE(54),
    [sym_for] = STATE(54),
    [sym_foreach] = STATE(54),
    [sym_try] = STATE(54),
    [sym_flow_control_statement] = STATE(54),
    [sym_flow_break_continue] = STATE(51),
    [sym_boolean_value] = STATE(54),
    [sym_user_variable] = STATE(54),
    [aux_sym_script_block_repeat1] = STATE(99),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(527),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [153] = {
    [sym_attribute] = STATE(39),
    [sym_statement_block] = STATE(204),
    [aux_sym_parameter_declaration_repeat1] = STATE(205),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [154] = {
    [sym_statement_block] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(324),
    [anon_sym_try] = ACTIONS(324),
    [anon_sym_catch] = ACTIONS(324),
    [anon_sym_finally] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(324),
    [sym_string] = ACTIONS(324),
    [sym_number] = ACTIONS(324),
    [sym_comment] = ACTIONS(38),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(330),
    [anon_sym_try] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(330),
    [sym_string] = ACTIONS(330),
    [sym_number] = ACTIONS(330),
    [sym_comment] = ACTIONS(38),
  },
  [157] = {
    [sym_catch] = STATE(155),
    [sym_finally] = STATE(207),
    [aux_sym_try_repeat1] = STATE(208),
    [anon_sym_RPAREN] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(330),
    [anon_sym_try] = ACTIONS(330),
    [anon_sym_catch] = ACTIONS(419),
    [anon_sym_finally] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(330),
    [sym_string] = ACTIONS(330),
    [sym_number] = ACTIONS(330),
    [sym_comment] = ACTIONS(38),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(531),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(529),
    [anon_sym_try] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(531),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(533),
    [sym_string] = ACTIONS(529),
    [sym_number] = ACTIONS(531),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(531),
  },
  [159] = {
    [sym_statement_block] = STATE(209),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [160] = {
    [anon_sym_LPAREN] = ACTIONS(535),
    [sym_comment] = ACTIONS(44),
  },
  [161] = {
    [sym_statement_block] = STATE(211),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(70),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(70),
    [sym_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [sym_statement_terminator] = STATE(213),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [164] = {
    [sym_statement] = STATE(214),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [165] = {
    [sym_statement] = STATE(214),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(215),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(537),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [167] = {
    [sym_user_variable] = STATE(217),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(549),
    [anon_sym_try] = ACTIONS(549),
    [anon_sym_catch] = ACTIONS(549),
    [anon_sym_finally] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(553),
    [sym_string] = ACTIONS(549),
    [sym_number] = ACTIONS(551),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(551),
  },
  [169] = {
    [sym_attribute] = STATE(39),
    [aux_sym_parameter_declaration_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(44),
  },
  [170] = {
    [anon_sym_RBRACK] = ACTIONS(557),
    [sym_comment] = ACTIONS(44),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(559),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_EQ] = ACTIONS(561),
    [sym_comment] = ACTIONS(44),
  },
  [172] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(565),
    [sym_comment] = ACTIONS(44),
  },
  [173] = {
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(569),
    [sym_comment] = ACTIONS(44),
  },
  [174] = {
    [sym_statement_block] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [175] = {
    [sym_statement_block] = STATE(223),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(571),
    [anon_sym_try] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(575),
    [sym_string] = ACTIONS(571),
    [sym_number] = ACTIONS(573),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(573),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(577),
    [anon_sym_try] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(581),
    [sym_string] = ACTIONS(577),
    [sym_number] = ACTIONS(579),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(579),
  },
  [178] = {
    [sym_elseif] = STATE(176),
    [sym_else] = STATE(224),
    [aux_sym_if_repeat1] = STATE(225),
    [ts_builtin_sym_end] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(577),
    [anon_sym_try] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(581),
    [sym_string] = ACTIONS(577),
    [sym_number] = ACTIONS(579),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(579),
  },
  [179] = {
    [sym_statement_block] = STATE(226),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [180] = {
    [sym_statement_block] = STATE(227),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [181] = {
    [sym_boolean_value] = STATE(228),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [182] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [anon_sym_try] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(409),
    [sym_string] = ACTIONS(405),
    [sym_number] = ACTIONS(407),
    [sym_comment] = ACTIONS(44),
  },
  [183] = {
    [sym_statement_block] = STATE(229),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [184] = {
    [sym_statement] = STATE(231),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(232),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [185] = {
    [sym_statement] = STATE(233),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [186] = {
    [sym_user_variable] = STATE(234),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [187] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(587),
    [sym_comment] = ACTIONS(44),
  },
  [188] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_try] = ACTIONS(441),
    [anon_sym_catch] = ACTIONS(441),
    [anon_sym_finally] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(445),
    [sym_string] = ACTIONS(441),
    [sym_number] = ACTIONS(443),
    [sym_comment] = ACTIONS(44),
  },
  [189] = {
    [sym_attribute] = STATE(39),
    [sym_statement_block] = STATE(236),
    [aux_sym_parameter_declaration_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [190] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(447),
    [anon_sym_try] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(451),
    [sym_string] = ACTIONS(447),
    [sym_number] = ACTIONS(449),
    [sym_comment] = ACTIONS(44),
  },
  [191] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [anon_sym_try] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(457),
    [sym_string] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [sym_comment] = ACTIONS(44),
  },
  [192] = {
    [sym_catch] = STATE(140),
    [aux_sym_try_repeat1] = STATE(192),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(459),
    [anon_sym_try] = ACTIONS(459),
    [anon_sym_catch] = ACTIONS(589),
    [anon_sym_finally] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(466),
    [sym_string] = ACTIONS(459),
    [sym_number] = ACTIONS(461),
    [sym_comment] = ACTIONS(44),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [anon_sym_try] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(596),
    [sym_string] = ACTIONS(592),
    [sym_number] = ACTIONS(594),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(594),
  },
  [194] = {
    [sym_statement_block] = STATE(237),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [195] = {
    [sym_statement_block] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [196] = {
    [sym_boolean_value] = STATE(239),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(409),
    [anon_sym_try] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(409),
    [anon_sym_SEMI] = ACTIONS(409),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [sym_statement_block] = STATE(240),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [199] = {
    [sym_statement] = STATE(242),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(243),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [sym_statement] = STATE(244),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [201] = {
    [sym_user_variable] = STATE(245),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [202] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(602),
    [sym_comment] = ACTIONS(44),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(367),
    [anon_sym_try] = ACTIONS(367),
    [anon_sym_catch] = ACTIONS(367),
    [anon_sym_finally] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(367),
    [sym_string] = ACTIONS(367),
    [sym_number] = ACTIONS(367),
    [sym_comment] = ACTIONS(38),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(445),
    [anon_sym_try] = ACTIONS(445),
    [anon_sym_catch] = ACTIONS(445),
    [anon_sym_finally] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(445),
    [sym_string] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
    [sym_attribute] = STATE(39),
    [sym_statement_block] = STATE(247),
    [aux_sym_parameter_declaration_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(451),
    [anon_sym_try] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(451),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(451),
    [sym_string] = ACTIONS(451),
    [sym_number] = ACTIONS(451),
    [sym_comment] = ACTIONS(38),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(457),
    [anon_sym_try] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(457),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(457),
    [sym_string] = ACTIONS(457),
    [sym_number] = ACTIONS(457),
    [sym_comment] = ACTIONS(38),
  },
  [208] = {
    [sym_catch] = STATE(155),
    [aux_sym_try_repeat1] = STATE(208),
    [anon_sym_RPAREN] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(466),
    [anon_sym_try] = ACTIONS(466),
    [anon_sym_catch] = ACTIONS(604),
    [anon_sym_finally] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(466),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(466),
    [sym_string] = ACTIONS(466),
    [sym_number] = ACTIONS(466),
    [sym_comment] = ACTIONS(38),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(607),
    [anon_sym_try] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(611),
    [sym_string] = ACTIONS(607),
    [sym_number] = ACTIONS(609),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(609),
  },
  [210] = {
    [sym_boolean_value] = STATE(248),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [211] = {
    [sym_catch] = STATE(155),
    [sym_finally] = STATE(156),
    [aux_sym_try_repeat1] = STATE(249),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_catch] = ACTIONS(419),
    [anon_sym_finally] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(184),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [212] = {
    [sym_statement_block] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(613),
    [sym_comment] = ACTIONS(44),
  },
  [214] = {
    [sym_statement_terminator] = STATE(252),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [215] = {
    [sym_statement] = STATE(253),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(613),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [216] = {
    [sym_statement_block] = STATE(254),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym_comment] = ACTIONS(44),
  },
  [218] = {
    [sym_identifier] = ACTIONS(619),
    [sym_string] = ACTIONS(621),
    [sym_number] = ACTIONS(619),
    [sym_comment] = ACTIONS(44),
  },
  [219] = {
    [sym_attribute_argument] = STATE(257),
    [sym_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(44),
  },
  [220] = {
    [anon_sym_RBRACK] = ACTIONS(623),
    [sym_comment] = ACTIONS(44),
  },
  [221] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(625),
    [sym_comment] = ACTIONS(44),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(627),
    [anon_sym_try] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(631),
    [sym_string] = ACTIONS(627),
    [sym_number] = ACTIONS(629),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(629),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_try] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(637),
    [sym_string] = ACTIONS(633),
    [sym_number] = ACTIONS(635),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(635),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(639),
    [anon_sym_try] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(643),
    [sym_string] = ACTIONS(639),
    [sym_number] = ACTIONS(641),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(641),
  },
  [225] = {
    [sym_elseif] = STATE(176),
    [aux_sym_if_repeat1] = STATE(225),
    [ts_builtin_sym_end] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(645),
    [anon_sym_try] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(652),
    [sym_string] = ACTIONS(645),
    [sym_number] = ACTIONS(650),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(650),
  },
  [226] = {
    [sym_elseif] = STATE(262),
    [sym_else] = STATE(263),
    [aux_sym_if_repeat1] = STATE(264),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(654),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(656),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_try] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(497),
    [sym_string] = ACTIONS(489),
    [sym_number] = ACTIONS(495),
    [sym_comment] = ACTIONS(44),
  },
  [227] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_try] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(503),
    [sym_string] = ACTIONS(499),
    [sym_number] = ACTIONS(501),
    [sym_comment] = ACTIONS(44),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(44),
  },
  [229] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(531),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(529),
    [anon_sym_try] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(531),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(533),
    [sym_string] = ACTIONS(529),
    [sym_number] = ACTIONS(531),
    [sym_comment] = ACTIONS(44),
  },
  [230] = {
    [sym_statement_block] = STATE(266),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [231] = {
    [sym_statement_terminator] = STATE(268),
    [anon_sym_RPAREN] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [232] = {
    [sym_statement] = STATE(269),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(662),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [233] = {
    [sym_statement] = STATE(269),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(270),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(44),
  },
  [235] = {
    [sym_user_variable] = STATE(272),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [236] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(549),
    [anon_sym_try] = ACTIONS(549),
    [anon_sym_catch] = ACTIONS(549),
    [anon_sym_finally] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(553),
    [sym_string] = ACTIONS(549),
    [sym_number] = ACTIONS(551),
    [sym_comment] = ACTIONS(44),
  },
  [237] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(276),
    [aux_sym_if_repeat1] = STATE(277),
    [anon_sym_RPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(497),
    [anon_sym_try] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(497),
    [sym_string] = ACTIONS(497),
    [sym_number] = ACTIONS(497),
    [sym_comment] = ACTIONS(38),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(503),
    [anon_sym_try] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(503),
    [sym_string] = ACTIONS(503),
    [sym_number] = ACTIONS(503),
    [sym_comment] = ACTIONS(38),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(44),
  },
  [240] = {
    [anon_sym_RPAREN] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(533),
    [anon_sym_try] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(533),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(533),
    [sym_string] = ACTIONS(533),
    [sym_number] = ACTIONS(533),
    [sym_comment] = ACTIONS(38),
  },
  [241] = {
    [sym_statement_block] = STATE(279),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [242] = {
    [sym_statement_terminator] = STATE(281),
    [anon_sym_RPAREN] = ACTIONS(672),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [243] = {
    [sym_statement] = STATE(282),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(674),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [244] = {
    [sym_statement] = STATE(282),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_statement_terminator] = STATE(283),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(672),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(433),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [245] = {
    [anon_sym_RPAREN] = ACTIONS(676),
    [sym_comment] = ACTIONS(44),
  },
  [246] = {
    [sym_user_variable] = STATE(285),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(44),
  },
  [247] = {
    [anon_sym_RPAREN] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(553),
    [anon_sym_try] = ACTIONS(553),
    [anon_sym_catch] = ACTIONS(553),
    [anon_sym_finally] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [anon_sym_SEMI] = ACTIONS(553),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(553),
    [sym_string] = ACTIONS(553),
    [sym_number] = ACTIONS(553),
    [sym_comment] = ACTIONS(38),
  },
  [248] = {
    [anon_sym_RPAREN] = ACTIONS(678),
    [sym_comment] = ACTIONS(44),
  },
  [249] = {
    [sym_catch] = STATE(155),
    [sym_finally] = STATE(207),
    [aux_sym_try_repeat1] = STATE(287),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_catch] = ACTIONS(419),
    [anon_sym_finally] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(330),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(330),
    [sym_comment] = ACTIONS(38),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym_try] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(684),
    [sym_string] = ACTIONS(680),
    [sym_number] = ACTIONS(682),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(682),
  },
  [251] = {
    [sym_statement_block] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(686),
    [sym_comment] = ACTIONS(44),
  },
  [253] = {
    [sym_statement_terminator] = STATE(290),
    [anon_sym_RPAREN] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(692),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(690),
    [anon_sym_try] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(692),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(694),
    [sym_string] = ACTIONS(690),
    [sym_number] = ACTIONS(692),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(692),
  },
  [255] = {
    [sym_statement_block] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [sym_comment] = ACTIONS(44),
  },
  [257] = {
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(698),
    [sym_comment] = ACTIONS(44),
  },
  [258] = {
    [anon_sym_RBRACK] = ACTIONS(700),
    [sym_comment] = ACTIONS(44),
  },
  [259] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(698),
    [sym_comment] = ACTIONS(44),
  },
  [260] = {
    [sym_statement_block] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [261] = {
    [sym_statement_block] = STATE(293),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [262] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(571),
    [anon_sym_try] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(571),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(575),
    [sym_string] = ACTIONS(571),
    [sym_number] = ACTIONS(573),
    [sym_comment] = ACTIONS(44),
  },
  [263] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(577),
    [anon_sym_try] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(581),
    [sym_string] = ACTIONS(577),
    [sym_number] = ACTIONS(579),
    [sym_comment] = ACTIONS(44),
  },
  [264] = {
    [sym_elseif] = STATE(262),
    [sym_else] = STATE(294),
    [aux_sym_if_repeat1] = STATE(295),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(654),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(656),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(577),
    [anon_sym_try] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(581),
    [sym_string] = ACTIONS(577),
    [sym_number] = ACTIONS(579),
    [sym_comment] = ACTIONS(44),
  },
  [265] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [anon_sym_try] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(596),
    [sym_string] = ACTIONS(592),
    [sym_number] = ACTIONS(594),
    [sym_comment] = ACTIONS(44),
  },
  [266] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(607),
    [anon_sym_try] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(611),
    [sym_string] = ACTIONS(607),
    [sym_number] = ACTIONS(609),
    [sym_comment] = ACTIONS(44),
  },
  [267] = {
    [sym_statement_block] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym_comment] = ACTIONS(44),
  },
  [269] = {
    [sym_statement_terminator] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(707),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [270] = {
    [sym_statement] = STATE(299),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [271] = {
    [sym_statement_block] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(709),
    [sym_comment] = ACTIONS(44),
  },
  [273] = {
    [sym_statement_block] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [274] = {
    [sym_statement_block] = STATE(303),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(575),
    [anon_sym_try] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(575),
    [anon_sym_SEMI] = ACTIONS(575),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(575),
    [sym_string] = ACTIONS(575),
    [sym_number] = ACTIONS(575),
    [sym_comment] = ACTIONS(38),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(581),
    [anon_sym_try] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(581),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(581),
    [sym_string] = ACTIONS(581),
    [sym_number] = ACTIONS(581),
    [sym_comment] = ACTIONS(38),
  },
  [277] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(304),
    [aux_sym_if_repeat1] = STATE(305),
    [anon_sym_RPAREN] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(581),
    [anon_sym_try] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(581),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(581),
    [sym_string] = ACTIONS(581),
    [sym_number] = ACTIONS(581),
    [sym_comment] = ACTIONS(38),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(596),
    [anon_sym_try] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(596),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(596),
    [sym_string] = ACTIONS(596),
    [sym_number] = ACTIONS(596),
    [sym_comment] = ACTIONS(38),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(611),
    [anon_sym_try] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(611),
    [anon_sym_SEMI] = ACTIONS(611),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(611),
    [sym_string] = ACTIONS(611),
    [sym_number] = ACTIONS(611),
    [sym_comment] = ACTIONS(38),
  },
  [280] = {
    [sym_statement_block] = STATE(306),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(711),
    [sym_comment] = ACTIONS(44),
  },
  [282] = {
    [sym_statement_terminator] = STATE(308),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [283] = {
    [sym_statement] = STATE(309),
    [sym_if] = STATE(69),
    [sym_while] = STATE(69),
    [sym_do] = STATE(69),
    [sym_for] = STATE(69),
    [sym_foreach] = STATE(69),
    [sym_try] = STATE(69),
    [sym_flow_control_statement] = STATE(69),
    [sym_flow_break_continue] = STATE(65),
    [sym_boolean_value] = STATE(69),
    [sym_user_variable] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_try] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [284] = {
    [sym_statement_block] = STATE(310),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(715),
    [sym_comment] = ACTIONS(44),
  },
  [286] = {
    [sym_statement_block] = STATE(312),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [287] = {
    [sym_catch] = STATE(155),
    [aux_sym_try_repeat1] = STATE(287),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_catch] = ACTIONS(604),
    [anon_sym_finally] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(466),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(466),
    [sym_comment] = ACTIONS(38),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_try] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(717),
    [sym_number] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(719),
  },
  [289] = {
    [sym_statement_block] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(44),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(725),
    [anon_sym_try] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(729),
    [sym_string] = ACTIONS(725),
    [sym_number] = ACTIONS(727),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(727),
  },
  [292] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(627),
    [anon_sym_try] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(627),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(631),
    [sym_string] = ACTIONS(627),
    [sym_number] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [293] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_try] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_RBRACE] = ACTIONS(633),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(637),
    [sym_string] = ACTIONS(633),
    [sym_number] = ACTIONS(635),
    [sym_comment] = ACTIONS(44),
  },
  [294] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(639),
    [anon_sym_try] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(643),
    [sym_string] = ACTIONS(639),
    [sym_number] = ACTIONS(641),
    [sym_comment] = ACTIONS(44),
  },
  [295] = {
    [sym_elseif] = STATE(262),
    [aux_sym_if_repeat1] = STATE(295),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(645),
    [anon_sym_try] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(652),
    [sym_string] = ACTIONS(645),
    [sym_number] = ACTIONS(650),
    [sym_comment] = ACTIONS(44),
  },
  [296] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym_try] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(684),
    [sym_string] = ACTIONS(680),
    [sym_number] = ACTIONS(682),
    [sym_comment] = ACTIONS(44),
  },
  [297] = {
    [sym_statement_block] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [sym_comment] = ACTIONS(44),
  },
  [299] = {
    [sym_statement_terminator] = STATE(317),
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [300] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(692),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(690),
    [anon_sym_try] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(692),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(694),
    [sym_string] = ACTIONS(690),
    [sym_number] = ACTIONS(692),
    [sym_comment] = ACTIONS(44),
  },
  [301] = {
    [sym_statement_block] = STATE(318),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [302] = {
    [anon_sym_RPAREN] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(631),
    [anon_sym_try] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(631),
    [anon_sym_SEMI] = ACTIONS(631),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(631),
    [sym_string] = ACTIONS(631),
    [sym_number] = ACTIONS(631),
    [sym_comment] = ACTIONS(38),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(637),
    [anon_sym_try] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(637),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(637),
    [sym_string] = ACTIONS(637),
    [sym_number] = ACTIONS(637),
    [sym_comment] = ACTIONS(38),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(643),
    [anon_sym_try] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [anon_sym_SEMI] = ACTIONS(643),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(643),
    [sym_string] = ACTIONS(643),
    [sym_number] = ACTIONS(643),
    [sym_comment] = ACTIONS(38),
  },
  [305] = {
    [sym_elseif] = STATE(275),
    [aux_sym_if_repeat1] = STATE(305),
    [anon_sym_RPAREN] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(652),
    [anon_sym_try] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(652),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(652),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(652),
    [sym_string] = ACTIONS(652),
    [sym_number] = ACTIONS(652),
    [sym_comment] = ACTIONS(38),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(684),
    [anon_sym_try] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(684),
    [anon_sym_SEMI] = ACTIONS(684),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(684),
    [sym_string] = ACTIONS(684),
    [sym_number] = ACTIONS(684),
    [sym_comment] = ACTIONS(38),
  },
  [307] = {
    [sym_statement_block] = STATE(319),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_comment] = ACTIONS(44),
  },
  [309] = {
    [sym_statement_terminator] = STATE(321),
    [anon_sym_RPAREN] = ACTIONS(743),
    [anon_sym_SEMI] = ACTIONS(308),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [310] = {
    [anon_sym_RPAREN] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(694),
    [anon_sym_try] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(694),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(694),
    [sym_string] = ACTIONS(694),
    [sym_number] = ACTIONS(694),
    [sym_comment] = ACTIONS(38),
  },
  [311] = {
    [sym_statement_block] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [312] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(276),
    [aux_sym_if_repeat1] = STATE(323),
    [anon_sym_RPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(497),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(497),
    [sym_comment] = ACTIONS(38),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(745),
    [anon_sym_try] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(749),
    [sym_string] = ACTIONS(745),
    [sym_number] = ACTIONS(747),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(747),
  },
  [314] = {
    [sym_statement_block] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [315] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_try] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(717),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(717),
    [sym_number] = ACTIONS(719),
    [sym_comment] = ACTIONS(44),
  },
  [316] = {
    [sym_statement_block] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [317] = {
    [anon_sym_RPAREN] = ACTIONS(751),
    [sym_comment] = ACTIONS(44),
  },
  [318] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(725),
    [anon_sym_try] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [anon_sym_RBRACE] = ACTIONS(725),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(729),
    [sym_string] = ACTIONS(725),
    [sym_number] = ACTIONS(727),
    [sym_comment] = ACTIONS(44),
  },
  [319] = {
    [anon_sym_RPAREN] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(721),
    [anon_sym_try] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(721),
    [anon_sym_SEMI] = ACTIONS(721),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(721),
    [sym_number] = ACTIONS(721),
    [sym_comment] = ACTIONS(38),
  },
  [320] = {
    [sym_statement_block] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [321] = {
    [anon_sym_RPAREN] = ACTIONS(753),
    [sym_comment] = ACTIONS(44),
  },
  [322] = {
    [anon_sym_RPAREN] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(729),
    [anon_sym_try] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(729),
    [anon_sym_SEMI] = ACTIONS(729),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(729),
    [sym_string] = ACTIONS(729),
    [sym_number] = ACTIONS(729),
    [sym_comment] = ACTIONS(38),
  },
  [323] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(304),
    [aux_sym_if_repeat1] = STATE(329),
    [anon_sym_RPAREN] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(581),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(581),
    [sym_comment] = ACTIONS(38),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(755),
    [anon_sym_try] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(759),
    [sym_string] = ACTIONS(755),
    [sym_number] = ACTIONS(757),
    [sym_comment] = ACTIONS(38),
    [sym_signature_block] = ACTIONS(757),
  },
  [325] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(745),
    [anon_sym_try] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(745),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(745),
    [anon_sym_RBRACE] = ACTIONS(745),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(749),
    [sym_string] = ACTIONS(745),
    [sym_number] = ACTIONS(747),
    [sym_comment] = ACTIONS(44),
  },
  [326] = {
    [sym_statement_block] = STATE(330),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [327] = {
    [anon_sym_RPAREN] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(749),
    [anon_sym_try] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(749),
    [sym_string] = ACTIONS(749),
    [sym_number] = ACTIONS(749),
    [sym_comment] = ACTIONS(38),
  },
  [328] = {
    [sym_statement_block] = STATE(331),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(44),
  },
  [329] = {
    [sym_elseif] = STATE(275),
    [aux_sym_if_repeat1] = STATE(329),
    [anon_sym_RPAREN] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(652),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(652),
    [sym_comment] = ACTIONS(38),
  },
  [330] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(755),
    [anon_sym_try] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(755),
    [anon_sym_RBRACE] = ACTIONS(755),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(759),
    [sym_string] = ACTIONS(755),
    [sym_number] = ACTIONS(757),
    [sym_comment] = ACTIONS(44),
  },
  [331] = {
    [anon_sym_RPAREN] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(759),
    [anon_sym_try] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(759),
    [anon_sym_SEMI] = ACTIONS(759),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(759),
    [sym_string] = ACTIONS(759),
    [sym_number] = ACTIONS(759),
    [sym_comment] = ACTIONS(38),
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
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [198] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [201] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [204] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [210] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(7),
  [213] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(8),
  [216] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(9),
  [219] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(10),
  [222] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(11),
  [225] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(12),
  [228] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(13),
  [231] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(13),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [348] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(36),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [369] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(45),
  [372] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(46),
  [375] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(47),
  [378] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(48),
  [381] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(49),
  [384] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(50),
  [387] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(51),
  [390] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(52),
  [393] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(42),
  [396] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(37),
  [399] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(54),
  [402] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(54),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_terminator, 1),
  [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [463] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(76),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 5),
  [484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [486] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(83),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(212),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [589] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(138),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [604] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(153),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(251),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [647] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(174),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [666] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [688] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [694] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [702] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(219),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(297),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(307),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [731] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(260),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [736] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(316),
  [738] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(273),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(320),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 10),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 10),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 10),
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
