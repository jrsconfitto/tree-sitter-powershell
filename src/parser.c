#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 332
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_trap = 22,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH = 26,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_SEMI = 30,
  aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH = 31,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 32,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 33,
  sym_identifier = 34,
  sym_string = 35,
  sym_number = 36,
  sym_comment = 37,
  sym_signature_block = 38,
  sym_script = 39,
  sym_param_block = 40,
  sym_parameter_declaration = 41,
  sym_attribute = 42,
  sym_type_literal = 43,
  sym_attribute_arguments = 44,
  sym_attribute_argument = 45,
  sym_script_block = 46,
  sym_statement = 47,
  sym_if = 48,
  sym_elseif = 49,
  sym_else = 50,
  sym_while = 51,
  sym_do = 52,
  sym_for = 53,
  sym_foreach = 54,
  sym_foreach_parameter = 55,
  sym_try = 56,
  sym_catch = 57,
  sym_finally = 58,
  sym_trap = 59,
  sym_flow_control_statement = 60,
  sym_flow_break_continue = 61,
  sym_statement_block = 62,
  sym_statement_terminator = 63,
  sym_boolean_value = 64,
  sym_user_variable = 65,
  aux_sym_param_block_repeat1 = 66,
  aux_sym_parameter_declaration_repeat1 = 67,
  aux_sym_attribute_arguments_repeat1 = 68,
  aux_sym_script_block_repeat1 = 69,
  aux_sym_if_repeat1 = 70,
  aux_sym_try_repeat1 = 71,
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
  [anon_sym_trap] = "trap",
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
  [sym_type_literal] = "type_literal",
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
  [sym_trap] = "trap",
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
  [anon_sym_trap] = {
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
  [sym_type_literal] = {
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
  [sym_trap] = {
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
        ADVANCE(55);
      if (lookahead == '}')
        ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
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
      if (lookahead == 'a')
        ADVANCE(52);
      if (lookahead == 'y')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_trap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 97:
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
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 103:
      if (lookahead == 'r')
        ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'y')
        ADVANCE(107);
      END_STATE();
    case 105:
      if (lookahead == 'p')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_trap);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 123:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 147:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 152:
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
      if (lookahead == 'c')
        ADVANCE(153);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      END_STATE();
    case 153:
      if (lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'c')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'h')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 158:
      if (lookahead == 'i')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'a')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'l')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'y')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 165:
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
        ADVANCE(57);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 166:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(167);
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
        SKIP(166);
      END_STATE();
    case 167:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 168:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(169);
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
        SKIP(168);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 169:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(173);
      END_STATE();
    case 177:
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 178:
      if (lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 179:
      if (lookahead == 'i')
        ADVANCE(159);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 180:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 195:
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 196:
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
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 199:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(167);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      END_STATE();
    case 200:
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
        ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 201:
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(124);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 208:
      if (lookahead == '\r')
        ADVANCE(209);
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(208);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == '\r')
        ADVANCE(209);
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(208);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 211:
      if (lookahead == '\r')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      END_STATE();
    case 213:
      if (lookahead == '\r')
        ADVANCE(214);
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
        ADVANCE(57);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(213);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == '\r')
        ADVANCE(214);
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
        ADVANCE(211);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(213);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 216:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 218:
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 219:
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
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 220:
      if (lookahead == '\r')
        ADVANCE(221);
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(220);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == '\r')
        ADVANCE(221);
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
        ADVANCE(113);
      if (lookahead == 'F')
        ADVANCE(127);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(220);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 223:
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
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 224:
      if (lookahead == '\r')
        ADVANCE(225);
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
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(224);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == '\r')
        ADVANCE(225);
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
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(108);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(224);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 152},
  [3] = {.lex_state = 152},
  [4] = {.lex_state = 152},
  [5] = {.lex_state = 152},
  [6] = {.lex_state = 152},
  [7] = {.lex_state = 152},
  [8] = {.lex_state = 152},
  [9] = {.lex_state = 152},
  [10] = {.lex_state = 97},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 97},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 97},
  [15] = {.lex_state = 152},
  [16] = {.lex_state = 152},
  [17] = {.lex_state = 97},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 97},
  [20] = {.lex_state = 97},
  [21] = {.lex_state = 166},
  [22] = {.lex_state = 168},
  [23] = {.lex_state = 168},
  [24] = {.lex_state = 177},
  [25] = {.lex_state = 180},
  [26] = {.lex_state = 177},
  [27] = {.lex_state = 166},
  [28] = {.lex_state = 186},
  [29] = {.lex_state = 152},
  [30] = {.lex_state = 177},
  [31] = {.lex_state = 195},
  [32] = {.lex_state = 168},
  [33] = {.lex_state = 152},
  [34] = {.lex_state = 97},
  [35] = {.lex_state = 97},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 97},
  [39] = {.lex_state = 97},
  [40] = {.lex_state = 168},
  [41] = {.lex_state = 196},
  [42] = {.lex_state = 152},
  [43] = {.lex_state = 199},
  [44] = {.lex_state = 152},
  [45] = {.lex_state = 166},
  [46] = {.lex_state = 177},
  [47] = {.lex_state = 152},
  [48] = {.lex_state = 152},
  [49] = {.lex_state = 152},
  [50] = {.lex_state = 152},
  [51] = {.lex_state = 152},
  [52] = {.lex_state = 152},
  [53] = {.lex_state = 152},
  [54] = {.lex_state = 152},
  [55] = {.lex_state = 152},
  [56] = {.lex_state = 177},
  [57] = {.lex_state = 200},
  [58] = {.lex_state = 201},
  [59] = {.lex_state = 177},
  [60] = {.lex_state = 177},
  [61] = {.lex_state = 177},
  [62] = {.lex_state = 152},
  [63] = {.lex_state = 152},
  [64] = {.lex_state = 152},
  [65] = {.lex_state = 152},
  [66] = {.lex_state = 152},
  [67] = {.lex_state = 152},
  [68] = {.lex_state = 152},
  [69] = {.lex_state = 152},
  [70] = {.lex_state = 152},
  [71] = {.lex_state = 208},
  [72] = {.lex_state = 213},
  [73] = {.lex_state = 208},
  [74] = {.lex_state = 208},
  [75] = {.lex_state = 208},
  [76] = {.lex_state = 208},
  [77] = {.lex_state = 216},
  [78] = {.lex_state = 152},
  [79] = {.lex_state = 166},
  [80] = {.lex_state = 218},
  [81] = {.lex_state = 177},
  [82] = {.lex_state = 152},
  [83] = {.lex_state = 152},
  [84] = {.lex_state = 195},
  [85] = {.lex_state = 97},
  [86] = {.lex_state = 195},
  [87] = {.lex_state = 152},
  [88] = {.lex_state = 97},
  [89] = {.lex_state = 152},
  [90] = {.lex_state = 152},
  [91] = {.lex_state = 166},
  [92] = {.lex_state = 97},
  [93] = {.lex_state = 152},
  [94] = {.lex_state = 152},
  [95] = {.lex_state = 166},
  [96] = {.lex_state = 152},
  [97] = {.lex_state = 152},
  [98] = {.lex_state = 168},
  [99] = {.lex_state = 168},
  [100] = {.lex_state = 180},
  [101] = {.lex_state = 177},
  [102] = {.lex_state = 166},
  [103] = {.lex_state = 152},
  [104] = {.lex_state = 177},
  [105] = {.lex_state = 152},
  [106] = {.lex_state = 177},
  [107] = {.lex_state = 177},
  [108] = {.lex_state = 201},
  [109] = {.lex_state = 177},
  [110] = {.lex_state = 168},
  [111] = {.lex_state = 97},
  [112] = {.lex_state = 168},
  [113] = {.lex_state = 168},
  [114] = {.lex_state = 180},
  [115] = {.lex_state = 177},
  [116] = {.lex_state = 166},
  [117] = {.lex_state = 152},
  [118] = {.lex_state = 177},
  [119] = {.lex_state = 208},
  [120] = {.lex_state = 152},
  [121] = {.lex_state = 208},
  [122] = {.lex_state = 208},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 177},
  [125] = {.lex_state = 208},
  [126] = {.lex_state = 177},
  [127] = {.lex_state = 166},
  [128] = {.lex_state = 216},
  [129] = {.lex_state = 218},
  [130] = {.lex_state = 195},
  [131] = {.lex_state = 152},
  [132] = {.lex_state = 97},
  [133] = {.lex_state = 97},
  [134] = {.lex_state = 195},
  [135] = {.lex_state = 152},
  [136] = {.lex_state = 168},
  [137] = {.lex_state = 199},
  [138] = {.lex_state = 152},
  [139] = {.lex_state = 152},
  [140] = {.lex_state = 97},
  [141] = {.lex_state = 152},
  [142] = {.lex_state = 219},
  [143] = {.lex_state = 97},
  [144] = {.lex_state = 152},
  [145] = {.lex_state = 152},
  [146] = {.lex_state = 152},
  [147] = {.lex_state = 152},
  [148] = {.lex_state = 208},
  [149] = {.lex_state = 216},
  [150] = {.lex_state = 166},
  [151] = {.lex_state = 152},
  [152] = {.lex_state = 152},
  [153] = {.lex_state = 177},
  [154] = {.lex_state = 177},
  [155] = {.lex_state = 177},
  [156] = {.lex_state = 177},
  [157] = {.lex_state = 152},
  [158] = {.lex_state = 152},
  [159] = {.lex_state = 152},
  [160] = {.lex_state = 152},
  [161] = {.lex_state = 152},
  [162] = {.lex_state = 208},
  [163] = {.lex_state = 216},
  [164] = {.lex_state = 166},
  [165] = {.lex_state = 220},
  [166] = {.lex_state = 177},
  [167] = {.lex_state = 152},
  [168] = {.lex_state = 152},
  [169] = {.lex_state = 208},
  [170] = {.lex_state = 208},
  [171] = {.lex_state = 208},
  [172] = {.lex_state = 208},
  [173] = {.lex_state = 97},
  [174] = {.lex_state = 152},
  [175] = {.lex_state = 152},
  [176] = {.lex_state = 152},
  [177] = {.lex_state = 168},
  [178] = {.lex_state = 152},
  [179] = {.lex_state = 177},
  [180] = {.lex_state = 208},
  [181] = {.lex_state = 152},
  [182] = {.lex_state = 166},
  [183] = {.lex_state = 195},
  [184] = {.lex_state = 152},
  [185] = {.lex_state = 152},
  [186] = {.lex_state = 152},
  [187] = {.lex_state = 152},
  [188] = {.lex_state = 199},
  [189] = {.lex_state = 152},
  [190] = {.lex_state = 152},
  [191] = {.lex_state = 219},
  [192] = {.lex_state = 97},
  [193] = {.lex_state = 219},
  [194] = {.lex_state = 152},
  [195] = {.lex_state = 152},
  [196] = {.lex_state = 168},
  [197] = {.lex_state = 177},
  [198] = {.lex_state = 152},
  [199] = {.lex_state = 208},
  [200] = {.lex_state = 177},
  [201] = {.lex_state = 166},
  [202] = {.lex_state = 216},
  [203] = {.lex_state = 177},
  [204] = {.lex_state = 152},
  [205] = {.lex_state = 177},
  [206] = {.lex_state = 177},
  [207] = {.lex_state = 177},
  [208] = {.lex_state = 97},
  [209] = {.lex_state = 152},
  [210] = {.lex_state = 152},
  [211] = {.lex_state = 168},
  [212] = {.lex_state = 208},
  [213] = {.lex_state = 152},
  [214] = {.lex_state = 208},
  [215] = {.lex_state = 177},
  [216] = {.lex_state = 166},
  [217] = {.lex_state = 216},
  [218] = {.lex_state = 220},
  [219] = {.lex_state = 208},
  [220] = {.lex_state = 152},
  [221] = {.lex_state = 208},
  [222] = {.lex_state = 208},
  [223] = {.lex_state = 208},
  [224] = {.lex_state = 97},
  [225] = {.lex_state = 168},
  [226] = {.lex_state = 152},
  [227] = {.lex_state = 152},
  [228] = {.lex_state = 152},
  [229] = {.lex_state = 177},
  [230] = {.lex_state = 152},
  [231] = {.lex_state = 152},
  [232] = {.lex_state = 168},
  [233] = {.lex_state = 168},
  [234] = {.lex_state = 152},
  [235] = {.lex_state = 152},
  [236] = {.lex_state = 219},
  [237] = {.lex_state = 97},
  [238] = {.lex_state = 97},
  [239] = {.lex_state = 219},
  [240] = {.lex_state = 223},
  [241] = {.lex_state = 177},
  [242] = {.lex_state = 152},
  [243] = {.lex_state = 177},
  [244] = {.lex_state = 152},
  [245] = {.lex_state = 152},
  [246] = {.lex_state = 177},
  [247] = {.lex_state = 208},
  [248] = {.lex_state = 152},
  [249] = {.lex_state = 166},
  [250] = {.lex_state = 177},
  [251] = {.lex_state = 224},
  [252] = {.lex_state = 208},
  [253] = {.lex_state = 152},
  [254] = {.lex_state = 208},
  [255] = {.lex_state = 152},
  [256] = {.lex_state = 152},
  [257] = {.lex_state = 177},
  [258] = {.lex_state = 208},
  [259] = {.lex_state = 152},
  [260] = {.lex_state = 166},
  [261] = {.lex_state = 208},
  [262] = {.lex_state = 152},
  [263] = {.lex_state = 152},
  [264] = {.lex_state = 97},
  [265] = {.lex_state = 152},
  [266] = {.lex_state = 152},
  [267] = {.lex_state = 97},
  [268] = {.lex_state = 152},
  [269] = {.lex_state = 152},
  [270] = {.lex_state = 152},
  [271] = {.lex_state = 152},
  [272] = {.lex_state = 152},
  [273] = {.lex_state = 152},
  [274] = {.lex_state = 152},
  [275] = {.lex_state = 223},
  [276] = {.lex_state = 177},
  [277] = {.lex_state = 223},
  [278] = {.lex_state = 177},
  [279] = {.lex_state = 177},
  [280] = {.lex_state = 152},
  [281] = {.lex_state = 152},
  [282] = {.lex_state = 177},
  [283] = {.lex_state = 152},
  [284] = {.lex_state = 152},
  [285] = {.lex_state = 152},
  [286] = {.lex_state = 152},
  [287] = {.lex_state = 224},
  [288] = {.lex_state = 208},
  [289] = {.lex_state = 224},
  [290] = {.lex_state = 208},
  [291] = {.lex_state = 208},
  [292] = {.lex_state = 152},
  [293] = {.lex_state = 152},
  [294] = {.lex_state = 177},
  [295] = {.lex_state = 152},
  [296] = {.lex_state = 152},
  [297] = {.lex_state = 152},
  [298] = {.lex_state = 152},
  [299] = {.lex_state = 97},
  [300] = {.lex_state = 152},
  [301] = {.lex_state = 97},
  [302] = {.lex_state = 223},
  [303] = {.lex_state = 177},
  [304] = {.lex_state = 177},
  [305] = {.lex_state = 223},
  [306] = {.lex_state = 177},
  [307] = {.lex_state = 152},
  [308] = {.lex_state = 152},
  [309] = {.lex_state = 177},
  [310] = {.lex_state = 152},
  [311] = {.lex_state = 224},
  [312] = {.lex_state = 208},
  [313] = {.lex_state = 208},
  [314] = {.lex_state = 224},
  [315] = {.lex_state = 208},
  [316] = {.lex_state = 152},
  [317] = {.lex_state = 152},
  [318] = {.lex_state = 208},
  [319] = {.lex_state = 152},
  [320] = {.lex_state = 223},
  [321] = {.lex_state = 97},
  [322] = {.lex_state = 177},
  [323] = {.lex_state = 152},
  [324] = {.lex_state = 177},
  [325] = {.lex_state = 208},
  [326] = {.lex_state = 152},
  [327] = {.lex_state = 208},
  [328] = {.lex_state = 223},
  [329] = {.lex_state = 177},
  [330] = {.lex_state = 208},
  [331] = {.lex_state = 223},
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
    [anon_sym_trap] = ACTIONS(3),
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
    [sym_script] = STATE(16),
    [sym_param_block] = STATE(17),
    [sym_script_block] = STATE(18),
    [sym_statement] = STATE(19),
    [sym_if] = STATE(14),
    [sym_while] = STATE(14),
    [sym_do] = STATE(14),
    [sym_for] = STATE(14),
    [sym_foreach] = STATE(14),
    [sym_try] = STATE(14),
    [sym_trap] = STATE(14),
    [sym_flow_control_statement] = STATE(14),
    [sym_flow_break_continue] = STATE(10),
    [sym_boolean_value] = STATE(14),
    [sym_user_variable] = STATE(14),
    [aux_sym_script_block_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [anon_sym_try] = ACTIONS(24),
    [anon_sym_trap] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(42),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_comment] = ACTIONS(46),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_comment] = ACTIONS(46),
  },
  [5] = {
    [sym_statement_block] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym_comment] = ACTIONS(46),
  },
  [7] = {
    [sym_foreach_parameter] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_DASH] = ACTIONS(58),
    [sym_comment] = ACTIONS(46),
  },
  [8] = {
    [sym_statement_block] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [9] = {
    [sym_type_literal] = STATE(33),
    [sym_statement_block] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(64),
    [anon_sym_try] = ACTIONS(64),
    [anon_sym_trap] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(68),
    [sym_string] = ACTIONS(64),
    [sym_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(66),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(72),
    [anon_sym_try] = ACTIONS(72),
    [anon_sym_trap] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(72),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(72),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_try] = ACTIONS(78),
    [anon_sym_trap] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(82),
    [sym_string] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(80),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_try] = ACTIONS(84),
    [anon_sym_trap] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(88),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(86),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(90),
    [anon_sym_try] = ACTIONS(90),
    [anon_sym_trap] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(94),
    [sym_string] = ACTIONS(90),
    [sym_number] = ACTIONS(92),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(92),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(46),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(46),
  },
  [17] = {
    [sym_script_block] = STATE(37),
    [sym_statement] = STATE(19),
    [sym_if] = STATE(14),
    [sym_while] = STATE(14),
    [sym_do] = STATE(14),
    [sym_for] = STATE(14),
    [sym_foreach] = STATE(14),
    [sym_try] = STATE(14),
    [sym_trap] = STATE(14),
    [sym_flow_control_statement] = STATE(14),
    [sym_flow_break_continue] = STATE(10),
    [sym_boolean_value] = STATE(14),
    [sym_user_variable] = STATE(14),
    [aux_sym_script_block_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [anon_sym_try] = ACTIONS(24),
    [anon_sym_trap] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(100),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(100),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [anon_sym_try] = ACTIONS(102),
    [anon_sym_trap] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(104),
  },
  [20] = {
    [sym_statement] = STATE(19),
    [sym_if] = STATE(14),
    [sym_while] = STATE(14),
    [sym_do] = STATE(14),
    [sym_for] = STATE(14),
    [sym_foreach] = STATE(14),
    [sym_try] = STATE(14),
    [sym_trap] = STATE(14),
    [sym_flow_control_statement] = STATE(14),
    [sym_flow_break_continue] = STATE(10),
    [sym_boolean_value] = STATE(14),
    [sym_user_variable] = STATE(14),
    [aux_sym_script_block_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [anon_sym_try] = ACTIONS(24),
    [anon_sym_trap] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(110),
  },
  [21] = {
    [sym_parameter_declaration] = STATE(42),
    [sym_attribute] = STATE(43),
    [sym_user_variable] = STATE(44),
    [aux_sym_parameter_declaration_repeat1] = STATE(45),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [22] = {
    [sym_boolean_value] = STATE(47),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [23] = {
    [sym_boolean_value] = STATE(48),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [24] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(61),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(130),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(138),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [25] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [sym_comment] = ACTIONS(46),
  },
  [26] = {
    [sym_statement] = STATE(76),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_try] = ACTIONS(162),
    [anon_sym_trap] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(46),
  },
  [27] = {
    [sym_user_variable] = STATE(77),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [28] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(178),
    [sym_comment] = ACTIONS(46),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(46),
  },
  [30] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(130),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(182),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [31] = {
    [sym_catch] = STATE(84),
    [sym_finally] = STATE(85),
    [aux_sym_try_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(184),
    [anon_sym_try] = ACTIONS(184),
    [anon_sym_catch] = ACTIONS(188),
    [anon_sym_finally] = ACTIONS(190),
    [anon_sym_trap] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(192),
    [sym_string] = ACTIONS(184),
    [sym_number] = ACTIONS(186),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(186),
  },
  [32] = {
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(46),
  },
  [33] = {
    [sym_statement_block] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_try] = ACTIONS(196),
    [anon_sym_trap] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(198),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [anon_sym_try] = ACTIONS(202),
    [anon_sym_trap] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(202),
    [sym_number] = ACTIONS(204),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(204),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_comment] = ACTIONS(46),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(210),
  },
  [38] = {
    [sym_statement] = STATE(19),
    [sym_if] = STATE(14),
    [sym_while] = STATE(14),
    [sym_do] = STATE(14),
    [sym_for] = STATE(14),
    [sym_foreach] = STATE(14),
    [sym_try] = STATE(14),
    [sym_trap] = STATE(14),
    [sym_flow_control_statement] = STATE(14),
    [sym_flow_break_continue] = STATE(10),
    [sym_boolean_value] = STATE(14),
    [sym_user_variable] = STATE(14),
    [aux_sym_script_block_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(226),
    [anon_sym_try] = ACTIONS(229),
    [anon_sym_trap] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(244),
    [sym_string] = ACTIONS(247),
    [sym_number] = ACTIONS(250),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(253),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(255),
    [anon_sym_try] = ACTIONS(255),
    [anon_sym_trap] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(259),
    [sym_string] = ACTIONS(255),
    [sym_number] = ACTIONS(257),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(257),
  },
  [40] = {
    [sym_identifier] = ACTIONS(261),
    [sym_comment] = ACTIONS(46),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_try] = ACTIONS(84),
    [anon_sym_trap] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(88),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_comment] = ACTIONS(46),
  },
  [42] = {
    [aux_sym_param_block_repeat1] = STATE(93),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(265),
    [sym_comment] = ACTIONS(46),
  },
  [43] = {
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(269),
    [sym_comment] = ACTIONS(46),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [sym_comment] = ACTIONS(46),
  },
  [45] = {
    [sym_attribute] = STATE(43),
    [sym_user_variable] = STATE(94),
    [aux_sym_parameter_declaration_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [46] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_try] = ACTIONS(78),
    [anon_sym_trap] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(82),
    [sym_string] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [sym_comment] = ACTIONS(46),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(273),
    [sym_comment] = ACTIONS(46),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(275),
    [sym_comment] = ACTIONS(46),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(277),
    [sym_comment] = ACTIONS(46),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(279),
    [sym_comment] = ACTIONS(46),
  },
  [51] = {
    [sym_statement_block] = STATE(100),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(281),
    [sym_comment] = ACTIONS(46),
  },
  [53] = {
    [sym_foreach_parameter] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(58),
    [sym_comment] = ACTIONS(46),
  },
  [54] = {
    [sym_statement_block] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [55] = {
    [sym_type_literal] = STATE(105),
    [sym_statement_block] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(64),
    [anon_sym_try] = ACTIONS(64),
    [anon_sym_trap] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(68),
    [sym_string] = ACTIONS(64),
    [sym_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(46),
  },
  [57] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(72),
    [anon_sym_try] = ACTIONS(72),
    [anon_sym_trap] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(70),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_identifier] = ACTIONS(285),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(72),
    [sym_comment] = ACTIONS(46),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(287),
    [anon_sym_try] = ACTIONS(287),
    [anon_sym_catch] = ACTIONS(287),
    [anon_sym_finally] = ACTIONS(287),
    [anon_sym_trap] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(291),
    [sym_string] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [sym_comment] = ACTIONS(46),
  },
  [59] = {
    [anon_sym_RPAREN] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(90),
    [anon_sym_try] = ACTIONS(90),
    [anon_sym_trap] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(94),
    [sym_string] = ACTIONS(90),
    [sym_number] = ACTIONS(92),
    [sym_comment] = ACTIONS(46),
  },
  [60] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [anon_sym_try] = ACTIONS(102),
    [anon_sym_trap] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(46),
  },
  [61] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(109),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(130),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(293),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(295),
    [sym_comment] = ACTIONS(46),
  },
  [63] = {
    [sym_statement_block] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(297),
    [sym_comment] = ACTIONS(46),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(299),
    [sym_comment] = ACTIONS(46),
  },
  [66] = {
    [sym_statement_block] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(301),
    [sym_comment] = ACTIONS(46),
  },
  [68] = {
    [sym_foreach_parameter] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(58),
    [sym_comment] = ACTIONS(46),
  },
  [69] = {
    [sym_statement_block] = STATE(119),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [70] = {
    [sym_type_literal] = STATE(120),
    [sym_statement_block] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(68),
    [anon_sym_try] = ACTIONS(68),
    [anon_sym_trap] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(68),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_comment] = ACTIONS(40),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [anon_sym_try] = ACTIONS(74),
    [anon_sym_trap] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(74),
    [sym_identifier] = ACTIONS(307),
    [sym_string] = ACTIONS(74),
    [sym_number] = ACTIONS(74),
    [sym_comment] = ACTIONS(40),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(82),
    [anon_sym_try] = ACTIONS(82),
    [anon_sym_trap] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(82),
    [sym_string] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(40),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_trap] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(88),
    [sym_string] = ACTIONS(88),
    [sym_number] = ACTIONS(88),
    [sym_comment] = ACTIONS(40),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(94),
    [anon_sym_try] = ACTIONS(94),
    [anon_sym_trap] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(94),
    [sym_string] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(40),
  },
  [76] = {
    [sym_statement] = STATE(125),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_statement_terminator] = STATE(126),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(309),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_try] = ACTIONS(321),
    [anon_sym_trap] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(333),
    [sym_number] = ACTIONS(333),
    [sym_comment] = ACTIONS(40),
  },
  [77] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(335),
    [sym_comment] = ACTIONS(46),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym_comment] = ACTIONS(46),
  },
  [79] = {
    [sym_user_variable] = STATE(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(287),
    [anon_sym_try] = ACTIONS(287),
    [anon_sym_catch] = ACTIONS(287),
    [anon_sym_finally] = ACTIONS(287),
    [anon_sym_trap] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(291),
    [sym_string] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(289),
  },
  [81] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(109),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(130),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(339),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [82] = {
    [sym_attribute] = STATE(43),
    [sym_statement_block] = STATE(130),
    [aux_sym_parameter_declaration_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [83] = {
    [sym_statement_block] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(341),
    [anon_sym_try] = ACTIONS(341),
    [anon_sym_catch] = ACTIONS(341),
    [anon_sym_finally] = ACTIONS(341),
    [anon_sym_trap] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(345),
    [sym_string] = ACTIONS(341),
    [sym_number] = ACTIONS(343),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(343),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(347),
    [anon_sym_try] = ACTIONS(347),
    [anon_sym_trap] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_string] = ACTIONS(347),
    [sym_number] = ACTIONS(349),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(349),
  },
  [86] = {
    [sym_catch] = STATE(84),
    [sym_finally] = STATE(133),
    [aux_sym_try_repeat1] = STATE(134),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(347),
    [anon_sym_try] = ACTIONS(347),
    [anon_sym_catch] = ACTIONS(188),
    [anon_sym_finally] = ACTIONS(190),
    [anon_sym_trap] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_string] = ACTIONS(347),
    [sym_number] = ACTIONS(349),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(349),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym_comment] = ACTIONS(46),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(355),
    [anon_sym_try] = ACTIONS(355),
    [anon_sym_trap] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(359),
    [sym_string] = ACTIONS(355),
    [sym_number] = ACTIONS(357),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(357),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_comment] = ACTIONS(46),
  },
  [90] = {
    [sym_attribute_arguments] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_comment] = ACTIONS(46),
  },
  [91] = {
    [sym_parameter_declaration] = STATE(139),
    [sym_attribute] = STATE(43),
    [sym_user_variable] = STATE(44),
    [aux_sym_parameter_declaration_repeat1] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(367),
    [anon_sym_try] = ACTIONS(367),
    [anon_sym_trap] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(371),
    [sym_string] = ACTIONS(367),
    [sym_number] = ACTIONS(369),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(369),
  },
  [93] = {
    [aux_sym_param_block_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(373),
    [sym_comment] = ACTIONS(46),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [sym_comment] = ACTIONS(46),
  },
  [95] = {
    [sym_attribute] = STATE(43),
    [aux_sym_parameter_declaration_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(377),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(380),
    [sym_comment] = ACTIONS(46),
  },
  [96] = {
    [sym_statement_block] = STATE(142),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [97] = {
    [sym_statement_block] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [98] = {
    [sym_boolean_value] = STATE(144),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [99] = {
    [sym_boolean_value] = STATE(145),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [100] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(382),
    [sym_comment] = ACTIONS(46),
  },
  [101] = {
    [sym_statement] = STATE(148),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_try] = ACTIONS(162),
    [anon_sym_trap] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(46),
  },
  [102] = {
    [sym_user_variable] = STATE(149),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(46),
  },
  [104] = {
    [sym_catch] = STATE(153),
    [sym_finally] = STATE(154),
    [aux_sym_try_repeat1] = STATE(155),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(184),
    [anon_sym_try] = ACTIONS(184),
    [anon_sym_catch] = ACTIONS(388),
    [anon_sym_finally] = ACTIONS(390),
    [anon_sym_trap] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(192),
    [sym_string] = ACTIONS(184),
    [sym_number] = ACTIONS(186),
    [sym_comment] = ACTIONS(46),
  },
  [105] = {
    [sym_statement_block] = STATE(156),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_try] = ACTIONS(196),
    [anon_sym_trap] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(46),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [anon_sym_try] = ACTIONS(202),
    [anon_sym_trap] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(202),
    [sym_number] = ACTIONS(204),
    [sym_comment] = ACTIONS(46),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(392),
    [anon_sym_try] = ACTIONS(392),
    [anon_sym_catch] = ACTIONS(392),
    [anon_sym_finally] = ACTIONS(392),
    [anon_sym_trap] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(396),
    [sym_string] = ACTIONS(392),
    [sym_number] = ACTIONS(394),
    [sym_comment] = ACTIONS(46),
  },
  [109] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(109),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(410),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_trap] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(419),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(212),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(431),
    [sym_number] = ACTIONS(434),
    [sym_comment] = ACTIONS(46),
  },
  [110] = {
    [sym_boolean_value] = STATE(157),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(437),
    [anon_sym_try] = ACTIONS(437),
    [anon_sym_trap] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(441),
    [sym_string] = ACTIONS(437),
    [sym_number] = ACTIONS(439),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(439),
  },
  [112] = {
    [sym_boolean_value] = STATE(158),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [113] = {
    [sym_boolean_value] = STATE(159),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [114] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(46),
  },
  [115] = {
    [sym_statement] = STATE(162),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_try] = ACTIONS(162),
    [anon_sym_trap] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(46),
  },
  [116] = {
    [sym_user_variable] = STATE(163),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(447),
    [sym_comment] = ACTIONS(46),
  },
  [118] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(166),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(130),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(449),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [119] = {
    [sym_catch] = STATE(169),
    [sym_finally] = STATE(170),
    [aux_sym_try_repeat1] = STATE(171),
    [anon_sym_RPAREN] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [anon_sym_try] = ACTIONS(192),
    [anon_sym_catch] = ACTIONS(451),
    [anon_sym_finally] = ACTIONS(453),
    [anon_sym_trap] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(192),
    [sym_string] = ACTIONS(192),
    [sym_number] = ACTIONS(192),
    [sym_comment] = ACTIONS(40),
  },
  [120] = {
    [sym_statement_block] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(200),
    [anon_sym_try] = ACTIONS(200),
    [anon_sym_trap] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(200),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(200),
    [sym_number] = ACTIONS(200),
    [sym_comment] = ACTIONS(40),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym_try] = ACTIONS(206),
    [anon_sym_trap] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(206),
    [sym_number] = ACTIONS(206),
    [sym_comment] = ACTIONS(40),
  },
  [123] = {
    [sym_statement_block] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(455),
    [anon_sym_try] = ACTIONS(455),
    [anon_sym_trap] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(459),
    [sym_string] = ACTIONS(455),
    [sym_number] = ACTIONS(457),
    [sym_comment] = ACTIONS(46),
  },
  [125] = {
    [sym_statement] = STATE(178),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_statement_terminator] = STATE(179),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(461),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [anon_sym_try] = ACTIONS(473),
    [anon_sym_trap] = ACTIONS(475),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(483),
    [sym_number] = ACTIONS(483),
    [sym_comment] = ACTIONS(40),
  },
  [126] = {
    [sym_statement] = STATE(180),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(485),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_try] = ACTIONS(162),
    [anon_sym_trap] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(46),
  },
  [127] = {
    [sym_user_variable] = STATE(181),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [128] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(487),
    [sym_comment] = ACTIONS(46),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(392),
    [anon_sym_try] = ACTIONS(392),
    [anon_sym_catch] = ACTIONS(392),
    [anon_sym_finally] = ACTIONS(392),
    [anon_sym_trap] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(396),
    [sym_string] = ACTIONS(392),
    [sym_number] = ACTIONS(394),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(394),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_try] = ACTIONS(489),
    [anon_sym_catch] = ACTIONS(489),
    [anon_sym_finally] = ACTIONS(489),
    [anon_sym_trap] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(493),
    [sym_string] = ACTIONS(489),
    [sym_number] = ACTIONS(491),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(491),
  },
  [131] = {
    [sym_attribute] = STATE(43),
    [sym_statement_block] = STATE(183),
    [aux_sym_parameter_declaration_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(495),
    [anon_sym_try] = ACTIONS(495),
    [anon_sym_trap] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(499),
    [sym_string] = ACTIONS(495),
    [sym_number] = ACTIONS(497),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(497),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(501),
    [anon_sym_try] = ACTIONS(501),
    [anon_sym_trap] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(505),
    [sym_string] = ACTIONS(501),
    [sym_number] = ACTIONS(503),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(503),
  },
  [134] = {
    [sym_catch] = STATE(84),
    [aux_sym_try_repeat1] = STATE(134),
    [ts_builtin_sym_end] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(507),
    [anon_sym_try] = ACTIONS(507),
    [anon_sym_catch] = ACTIONS(511),
    [anon_sym_finally] = ACTIONS(507),
    [anon_sym_trap] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(514),
    [sym_string] = ACTIONS(507),
    [sym_number] = ACTIONS(509),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(509),
  },
  [135] = {
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(46),
  },
  [136] = {
    [sym_attribute_argument] = STATE(187),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym_identifier] = ACTIONS(520),
    [sym_comment] = ACTIONS(46),
  },
  [137] = {
    [anon_sym_LBRACK] = ACTIONS(522),
    [anon_sym_LBRACE] = ACTIONS(522),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(524),
    [sym_comment] = ACTIONS(46),
  },
  [138] = {
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym_comment] = ACTIONS(46),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_comment] = ACTIONS(46),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(532),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(530),
    [anon_sym_try] = ACTIONS(530),
    [anon_sym_trap] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(532),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(534),
    [sym_string] = ACTIONS(530),
    [sym_number] = ACTIONS(532),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(532),
  },
  [141] = {
    [aux_sym_param_block_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_comment] = ACTIONS(46),
  },
  [142] = {
    [sym_elseif] = STATE(191),
    [sym_else] = STATE(192),
    [aux_sym_if_repeat1] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [anon_sym_try] = ACTIONS(539),
    [anon_sym_trap] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(547),
    [sym_string] = ACTIONS(539),
    [sym_number] = ACTIONS(545),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(545),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(549),
    [anon_sym_try] = ACTIONS(549),
    [anon_sym_trap] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(553),
    [sym_string] = ACTIONS(549),
    [sym_number] = ACTIONS(551),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(551),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(555),
    [sym_comment] = ACTIONS(46),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym_comment] = ACTIONS(46),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(559),
    [sym_comment] = ACTIONS(46),
  },
  [147] = {
    [sym_statement_block] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [148] = {
    [sym_statement] = STATE(199),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_statement_terminator] = STATE(200),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(561),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_try] = ACTIONS(321),
    [anon_sym_trap] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(333),
    [sym_number] = ACTIONS(333),
    [sym_comment] = ACTIONS(40),
  },
  [149] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(46),
  },
  [150] = {
    [sym_user_variable] = STATE(202),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [151] = {
    [sym_attribute] = STATE(43),
    [sym_statement_block] = STATE(203),
    [aux_sym_parameter_declaration_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [152] = {
    [sym_statement_block] = STATE(205),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(341),
    [anon_sym_try] = ACTIONS(341),
    [anon_sym_catch] = ACTIONS(341),
    [anon_sym_finally] = ACTIONS(341),
    [anon_sym_trap] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(345),
    [sym_string] = ACTIONS(341),
    [sym_number] = ACTIONS(343),
    [sym_comment] = ACTIONS(46),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(347),
    [anon_sym_try] = ACTIONS(347),
    [anon_sym_trap] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_string] = ACTIONS(347),
    [sym_number] = ACTIONS(349),
    [sym_comment] = ACTIONS(46),
  },
  [155] = {
    [sym_catch] = STATE(153),
    [sym_finally] = STATE(206),
    [aux_sym_try_repeat1] = STATE(207),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(347),
    [anon_sym_try] = ACTIONS(347),
    [anon_sym_catch] = ACTIONS(388),
    [anon_sym_finally] = ACTIONS(390),
    [anon_sym_trap] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_string] = ACTIONS(347),
    [sym_number] = ACTIONS(349),
    [sym_comment] = ACTIONS(46),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(355),
    [anon_sym_try] = ACTIONS(355),
    [anon_sym_trap] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(359),
    [sym_string] = ACTIONS(355),
    [sym_number] = ACTIONS(357),
    [sym_comment] = ACTIONS(46),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(565),
    [sym_comment] = ACTIONS(46),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(567),
    [sym_comment] = ACTIONS(46),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(569),
    [sym_comment] = ACTIONS(46),
  },
  [160] = {
    [anon_sym_LPAREN] = ACTIONS(571),
    [sym_comment] = ACTIONS(46),
  },
  [161] = {
    [sym_statement_block] = STATE(212),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [162] = {
    [sym_statement] = STATE(214),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_statement_terminator] = STATE(215),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_try] = ACTIONS(321),
    [anon_sym_trap] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(333),
    [sym_number] = ACTIONS(333),
    [sym_comment] = ACTIONS(40),
  },
  [163] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(575),
    [sym_comment] = ACTIONS(46),
  },
  [164] = {
    [sym_user_variable] = STATE(217),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(291),
    [anon_sym_try] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_finally] = ACTIONS(291),
    [anon_sym_trap] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(291),
    [sym_string] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [sym_comment] = ACTIONS(40),
  },
  [166] = {
    [sym_statement] = STATE(60),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [aux_sym_script_block_repeat1] = STATE(109),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(130),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(577),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [167] = {
    [sym_attribute] = STATE(43),
    [sym_statement_block] = STATE(219),
    [aux_sym_parameter_declaration_repeat1] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [168] = {
    [sym_statement_block] = STATE(221),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(345),
    [anon_sym_try] = ACTIONS(345),
    [anon_sym_catch] = ACTIONS(345),
    [anon_sym_finally] = ACTIONS(345),
    [anon_sym_trap] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(345),
    [sym_string] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [sym_comment] = ACTIONS(40),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(351),
    [anon_sym_try] = ACTIONS(351),
    [anon_sym_trap] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_string] = ACTIONS(351),
    [sym_number] = ACTIONS(351),
    [sym_comment] = ACTIONS(40),
  },
  [171] = {
    [sym_catch] = STATE(169),
    [sym_finally] = STATE(222),
    [aux_sym_try_repeat1] = STATE(223),
    [anon_sym_RPAREN] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(351),
    [anon_sym_try] = ACTIONS(351),
    [anon_sym_catch] = ACTIONS(451),
    [anon_sym_finally] = ACTIONS(453),
    [anon_sym_trap] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(351),
    [sym_string] = ACTIONS(351),
    [sym_number] = ACTIONS(351),
    [sym_comment] = ACTIONS(40),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [anon_sym_trap] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(359),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(359),
    [sym_string] = ACTIONS(359),
    [sym_number] = ACTIONS(359),
    [sym_comment] = ACTIONS(40),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(579),
    [anon_sym_try] = ACTIONS(579),
    [anon_sym_trap] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(583),
    [sym_string] = ACTIONS(579),
    [sym_number] = ACTIONS(581),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(581),
  },
  [174] = {
    [sym_statement_block] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(585),
    [sym_comment] = ACTIONS(46),
  },
  [176] = {
    [sym_statement_block] = STATE(226),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(70),
    [sym_identifier] = ACTIONS(587),
    [sym_comment] = ACTIONS(46),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(589),
    [sym_comment] = ACTIONS(46),
  },
  [179] = {
    [sym_statement] = STATE(228),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(593),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [180] = {
    [sym_statement] = STATE(228),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_statement_terminator] = STATE(229),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(597),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [anon_sym_try] = ACTIONS(473),
    [anon_sym_trap] = ACTIONS(475),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(483),
    [sym_number] = ACTIONS(483),
    [sym_comment] = ACTIONS(40),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(599),
    [sym_comment] = ACTIONS(46),
  },
  [182] = {
    [sym_user_variable] = STATE(231),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(601),
    [anon_sym_try] = ACTIONS(601),
    [anon_sym_catch] = ACTIONS(601),
    [anon_sym_finally] = ACTIONS(601),
    [anon_sym_trap] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(605),
    [sym_string] = ACTIONS(601),
    [sym_number] = ACTIONS(603),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(603),
  },
  [184] = {
    [sym_attribute] = STATE(43),
    [aux_sym_parameter_declaration_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(607),
    [sym_comment] = ACTIONS(46),
  },
  [185] = {
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_comment] = ACTIONS(46),
  },
  [186] = {
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(613),
    [sym_comment] = ACTIONS(46),
  },
  [187] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym_comment] = ACTIONS(46),
  },
  [188] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(621),
    [sym_comment] = ACTIONS(46),
  },
  [189] = {
    [sym_statement_block] = STATE(236),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [190] = {
    [sym_statement_block] = STATE(237),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(623),
    [anon_sym_try] = ACTIONS(623),
    [anon_sym_trap] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(627),
    [sym_string] = ACTIONS(623),
    [sym_number] = ACTIONS(625),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(625),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_try] = ACTIONS(629),
    [anon_sym_trap] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(629),
    [sym_number] = ACTIONS(631),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(631),
  },
  [193] = {
    [sym_elseif] = STATE(191),
    [sym_else] = STATE(238),
    [aux_sym_if_repeat1] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_try] = ACTIONS(629),
    [anon_sym_trap] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(629),
    [sym_number] = ACTIONS(631),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(631),
  },
  [194] = {
    [sym_statement_block] = STATE(240),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [195] = {
    [sym_statement_block] = STATE(241),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [196] = {
    [sym_boolean_value] = STATE(242),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(437),
    [anon_sym_try] = ACTIONS(437),
    [anon_sym_trap] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(441),
    [sym_string] = ACTIONS(437),
    [sym_number] = ACTIONS(439),
    [sym_comment] = ACTIONS(46),
  },
  [198] = {
    [sym_statement_block] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [199] = {
    [sym_statement] = STATE(245),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_statement_terminator] = STATE(246),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [anon_sym_try] = ACTIONS(473),
    [anon_sym_trap] = ACTIONS(475),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(483),
    [sym_number] = ACTIONS(483),
    [sym_comment] = ACTIONS(40),
  },
  [200] = {
    [sym_statement] = STATE(247),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_try] = ACTIONS(162),
    [anon_sym_trap] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(46),
  },
  [201] = {
    [sym_user_variable] = STATE(248),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [202] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(639),
    [sym_comment] = ACTIONS(46),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_try] = ACTIONS(489),
    [anon_sym_catch] = ACTIONS(489),
    [anon_sym_finally] = ACTIONS(489),
    [anon_sym_trap] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(493),
    [sym_string] = ACTIONS(489),
    [sym_number] = ACTIONS(491),
    [sym_comment] = ACTIONS(46),
  },
  [204] = {
    [sym_attribute] = STATE(43),
    [sym_statement_block] = STATE(250),
    [aux_sym_parameter_declaration_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(495),
    [anon_sym_try] = ACTIONS(495),
    [anon_sym_trap] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(499),
    [sym_string] = ACTIONS(495),
    [sym_number] = ACTIONS(497),
    [sym_comment] = ACTIONS(46),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(501),
    [anon_sym_try] = ACTIONS(501),
    [anon_sym_trap] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(505),
    [sym_string] = ACTIONS(501),
    [sym_number] = ACTIONS(503),
    [sym_comment] = ACTIONS(46),
  },
  [207] = {
    [sym_catch] = STATE(153),
    [aux_sym_try_repeat1] = STATE(207),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(507),
    [anon_sym_try] = ACTIONS(507),
    [anon_sym_catch] = ACTIONS(641),
    [anon_sym_finally] = ACTIONS(507),
    [anon_sym_trap] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(514),
    [sym_string] = ACTIONS(507),
    [sym_number] = ACTIONS(509),
    [sym_comment] = ACTIONS(46),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(644),
    [anon_sym_try] = ACTIONS(644),
    [anon_sym_trap] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(648),
    [sym_string] = ACTIONS(644),
    [sym_number] = ACTIONS(646),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(646),
  },
  [209] = {
    [sym_statement_block] = STATE(251),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [210] = {
    [sym_statement_block] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [211] = {
    [sym_boolean_value] = STATE(253),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_try] = ACTIONS(441),
    [anon_sym_trap] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(441),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(441),
    [sym_string] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
    [sym_comment] = ACTIONS(40),
  },
  [213] = {
    [sym_statement_block] = STATE(254),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [214] = {
    [sym_statement] = STATE(256),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_statement_terminator] = STATE(257),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(650),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [anon_sym_try] = ACTIONS(473),
    [anon_sym_trap] = ACTIONS(475),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(483),
    [sym_number] = ACTIONS(483),
    [sym_comment] = ACTIONS(40),
  },
  [215] = {
    [sym_statement] = STATE(258),
    [sym_if] = STATE(75),
    [sym_while] = STATE(75),
    [sym_do] = STATE(75),
    [sym_for] = STATE(75),
    [sym_foreach] = STATE(75),
    [sym_try] = STATE(75),
    [sym_trap] = STATE(75),
    [sym_flow_control_statement] = STATE(75),
    [sym_flow_break_continue] = STATE(71),
    [sym_boolean_value] = STATE(75),
    [sym_user_variable] = STATE(75),
    [anon_sym_RPAREN] = ACTIONS(652),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_try] = ACTIONS(162),
    [anon_sym_trap] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(172),
    [sym_string] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(46),
  },
  [216] = {
    [sym_user_variable] = STATE(259),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [217] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(654),
    [sym_comment] = ACTIONS(46),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [anon_sym_try] = ACTIONS(396),
    [anon_sym_catch] = ACTIONS(396),
    [anon_sym_finally] = ACTIONS(396),
    [anon_sym_trap] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(396),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(396),
    [sym_string] = ACTIONS(396),
    [sym_number] = ACTIONS(396),
    [sym_comment] = ACTIONS(40),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(493),
    [anon_sym_try] = ACTIONS(493),
    [anon_sym_catch] = ACTIONS(493),
    [anon_sym_finally] = ACTIONS(493),
    [anon_sym_trap] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(493),
    [sym_string] = ACTIONS(493),
    [sym_number] = ACTIONS(493),
    [sym_comment] = ACTIONS(40),
  },
  [220] = {
    [sym_attribute] = STATE(43),
    [sym_statement_block] = STATE(261),
    [aux_sym_parameter_declaration_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [221] = {
    [anon_sym_RPAREN] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_try] = ACTIONS(499),
    [anon_sym_trap] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(499),
    [sym_string] = ACTIONS(499),
    [sym_number] = ACTIONS(499),
    [sym_comment] = ACTIONS(40),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(505),
    [anon_sym_try] = ACTIONS(505),
    [anon_sym_trap] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(505),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(505),
    [sym_string] = ACTIONS(505),
    [sym_number] = ACTIONS(505),
    [sym_comment] = ACTIONS(40),
  },
  [223] = {
    [sym_catch] = STATE(169),
    [aux_sym_try_repeat1] = STATE(223),
    [anon_sym_RPAREN] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(514),
    [anon_sym_try] = ACTIONS(514),
    [anon_sym_catch] = ACTIONS(656),
    [anon_sym_finally] = ACTIONS(514),
    [anon_sym_trap] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(514),
    [sym_string] = ACTIONS(514),
    [sym_number] = ACTIONS(514),
    [sym_comment] = ACTIONS(40),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(659),
    [anon_sym_try] = ACTIONS(659),
    [anon_sym_trap] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(659),
    [sym_number] = ACTIONS(661),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(661),
  },
  [225] = {
    [sym_boolean_value] = STATE(262),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
  },
  [226] = {
    [sym_catch] = STATE(153),
    [sym_finally] = STATE(154),
    [aux_sym_try_repeat1] = STATE(263),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_catch] = ACTIONS(388),
    [anon_sym_finally] = ACTIONS(390),
    [sym_comment] = ACTIONS(46),
  },
  [227] = {
    [sym_statement_block] = STATE(264),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(665),
    [sym_comment] = ACTIONS(46),
  },
  [229] = {
    [sym_statement] = STATE(266),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(593),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [230] = {
    [sym_statement_block] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(667),
    [sym_comment] = ACTIONS(46),
  },
  [232] = {
    [sym_identifier] = ACTIONS(669),
    [sym_string] = ACTIONS(671),
    [sym_number] = ACTIONS(669),
    [sym_comment] = ACTIONS(46),
  },
  [233] = {
    [sym_attribute_argument] = STATE(270),
    [sym_identifier] = ACTIONS(520),
    [sym_comment] = ACTIONS(46),
  },
  [234] = {
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym_comment] = ACTIONS(46),
  },
  [235] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(272),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_RPAREN] = ACTIONS(675),
    [sym_comment] = ACTIONS(46),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(677),
    [anon_sym_try] = ACTIONS(677),
    [anon_sym_trap] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(681),
    [sym_string] = ACTIONS(677),
    [sym_number] = ACTIONS(679),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(679),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(683),
    [anon_sym_try] = ACTIONS(683),
    [anon_sym_trap] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(687),
    [sym_string] = ACTIONS(683),
    [sym_number] = ACTIONS(685),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(685),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(689),
    [anon_sym_try] = ACTIONS(689),
    [anon_sym_trap] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(693),
    [sym_string] = ACTIONS(689),
    [sym_number] = ACTIONS(691),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(691),
  },
  [239] = {
    [sym_elseif] = STATE(191),
    [aux_sym_if_repeat1] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(695),
    [anon_sym_try] = ACTIONS(695),
    [anon_sym_trap] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(702),
    [sym_string] = ACTIONS(695),
    [sym_number] = ACTIONS(700),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(700),
  },
  [240] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(276),
    [aux_sym_if_repeat1] = STATE(277),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(706),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [anon_sym_try] = ACTIONS(539),
    [anon_sym_trap] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(539),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(547),
    [sym_string] = ACTIONS(539),
    [sym_number] = ACTIONS(545),
    [sym_comment] = ACTIONS(46),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(549),
    [anon_sym_try] = ACTIONS(549),
    [anon_sym_trap] = ACTIONS(549),
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
    [sym_comment] = ACTIONS(46),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_comment] = ACTIONS(46),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(579),
    [anon_sym_try] = ACTIONS(579),
    [anon_sym_trap] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(583),
    [sym_string] = ACTIONS(579),
    [sym_number] = ACTIONS(581),
    [sym_comment] = ACTIONS(46),
  },
  [244] = {
    [sym_statement_block] = STATE(279),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [245] = {
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_comment] = ACTIONS(46),
  },
  [246] = {
    [sym_statement] = STATE(281),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(710),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(593),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [247] = {
    [sym_statement] = STATE(281),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_statement_terminator] = STATE(282),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [anon_sym_try] = ACTIONS(473),
    [anon_sym_trap] = ACTIONS(475),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(483),
    [sym_number] = ACTIONS(483),
    [sym_comment] = ACTIONS(40),
  },
  [248] = {
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(46),
  },
  [249] = {
    [sym_user_variable] = STATE(284),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [250] = {
    [anon_sym_RPAREN] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(601),
    [anon_sym_try] = ACTIONS(601),
    [anon_sym_catch] = ACTIONS(601),
    [anon_sym_finally] = ACTIONS(601),
    [anon_sym_trap] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(605),
    [sym_string] = ACTIONS(601),
    [sym_number] = ACTIONS(603),
    [sym_comment] = ACTIONS(46),
  },
  [251] = {
    [sym_elseif] = STATE(287),
    [sym_else] = STATE(288),
    [aux_sym_if_repeat1] = STATE(289),
    [anon_sym_RPAREN] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(547),
    [anon_sym_try] = ACTIONS(547),
    [anon_sym_trap] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(547),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(547),
    [sym_string] = ACTIONS(547),
    [sym_number] = ACTIONS(547),
    [sym_comment] = ACTIONS(40),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(553),
    [anon_sym_try] = ACTIONS(553),
    [anon_sym_trap] = ACTIONS(553),
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
    [sym_comment] = ACTIONS(40),
  },
  [253] = {
    [anon_sym_RPAREN] = ACTIONS(720),
    [sym_comment] = ACTIONS(46),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(583),
    [anon_sym_try] = ACTIONS(583),
    [anon_sym_trap] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(583),
    [anon_sym_SEMI] = ACTIONS(583),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(583),
    [sym_string] = ACTIONS(583),
    [sym_number] = ACTIONS(583),
    [sym_comment] = ACTIONS(40),
  },
  [255] = {
    [sym_statement_block] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(722),
    [sym_comment] = ACTIONS(46),
  },
  [257] = {
    [sym_statement] = STATE(293),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(722),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(593),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [258] = {
    [sym_statement] = STATE(293),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_statement_terminator] = STATE(294),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [anon_sym_try] = ACTIONS(473),
    [anon_sym_trap] = ACTIONS(475),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(329),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(483),
    [sym_number] = ACTIONS(483),
    [sym_comment] = ACTIONS(40),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(726),
    [sym_comment] = ACTIONS(46),
  },
  [260] = {
    [sym_user_variable] = STATE(296),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
  },
  [261] = {
    [anon_sym_RPAREN] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(605),
    [anon_sym_try] = ACTIONS(605),
    [anon_sym_catch] = ACTIONS(605),
    [anon_sym_finally] = ACTIONS(605),
    [anon_sym_trap] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(605),
    [anon_sym_SEMI] = ACTIONS(605),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(605),
    [sym_string] = ACTIONS(605),
    [sym_number] = ACTIONS(605),
    [sym_comment] = ACTIONS(40),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(46),
  },
  [263] = {
    [sym_catch] = STATE(153),
    [sym_finally] = STATE(206),
    [aux_sym_try_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_catch] = ACTIONS(388),
    [anon_sym_finally] = ACTIONS(390),
    [sym_comment] = ACTIONS(46),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(730),
    [anon_sym_try] = ACTIONS(730),
    [anon_sym_trap] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(734),
    [sym_string] = ACTIONS(730),
    [sym_number] = ACTIONS(732),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(732),
  },
  [265] = {
    [sym_statement_block] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(736),
    [sym_comment] = ACTIONS(46),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(740),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(738),
    [anon_sym_try] = ACTIONS(738),
    [anon_sym_trap] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(740),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(742),
    [sym_string] = ACTIONS(738),
    [sym_number] = ACTIONS(740),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(740),
  },
  [268] = {
    [sym_statement_block] = STATE(301),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [269] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_comment] = ACTIONS(46),
  },
  [270] = {
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_RPAREN] = ACTIONS(746),
    [sym_comment] = ACTIONS(46),
  },
  [271] = {
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_comment] = ACTIONS(46),
  },
  [272] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(272),
    [anon_sym_COMMA] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(746),
    [sym_comment] = ACTIONS(46),
  },
  [273] = {
    [sym_statement_block] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [274] = {
    [sym_statement_block] = STATE(303),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(623),
    [anon_sym_try] = ACTIONS(623),
    [anon_sym_trap] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(623),
    [anon_sym_RBRACE] = ACTIONS(623),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(625),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(627),
    [sym_string] = ACTIONS(623),
    [sym_number] = ACTIONS(625),
    [sym_comment] = ACTIONS(46),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_try] = ACTIONS(629),
    [anon_sym_trap] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(629),
    [sym_number] = ACTIONS(631),
    [sym_comment] = ACTIONS(46),
  },
  [277] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(304),
    [aux_sym_if_repeat1] = STATE(305),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(706),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_try] = ACTIONS(629),
    [anon_sym_trap] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(629),
    [sym_number] = ACTIONS(631),
    [sym_comment] = ACTIONS(46),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(644),
    [anon_sym_try] = ACTIONS(644),
    [anon_sym_trap] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(644),
    [anon_sym_RBRACE] = ACTIONS(644),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(648),
    [sym_string] = ACTIONS(644),
    [sym_number] = ACTIONS(646),
    [sym_comment] = ACTIONS(46),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(659),
    [anon_sym_try] = ACTIONS(659),
    [anon_sym_trap] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(659),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(659),
    [sym_number] = ACTIONS(661),
    [sym_comment] = ACTIONS(46),
  },
  [280] = {
    [sym_statement_block] = STATE(306),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(753),
    [sym_comment] = ACTIONS(46),
  },
  [282] = {
    [sym_statement] = STATE(308),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(753),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(593),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [283] = {
    [sym_statement_block] = STATE(309),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(755),
    [sym_comment] = ACTIONS(46),
  },
  [285] = {
    [sym_statement_block] = STATE(311),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [286] = {
    [sym_statement_block] = STATE(312),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(627),
    [anon_sym_try] = ACTIONS(627),
    [anon_sym_trap] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(627),
    [anon_sym_SEMI] = ACTIONS(627),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(627),
    [sym_string] = ACTIONS(627),
    [sym_number] = ACTIONS(627),
    [sym_comment] = ACTIONS(40),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_try] = ACTIONS(633),
    [anon_sym_trap] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(633),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(633),
    [sym_number] = ACTIONS(633),
    [sym_comment] = ACTIONS(40),
  },
  [289] = {
    [sym_elseif] = STATE(287),
    [sym_else] = STATE(313),
    [aux_sym_if_repeat1] = STATE(314),
    [anon_sym_RPAREN] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_try] = ACTIONS(633),
    [anon_sym_trap] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(633),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(633),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(633),
    [sym_number] = ACTIONS(633),
    [sym_comment] = ACTIONS(40),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(648),
    [anon_sym_try] = ACTIONS(648),
    [anon_sym_trap] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(648),
    [anon_sym_SEMI] = ACTIONS(648),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(648),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(648),
    [sym_string] = ACTIONS(648),
    [sym_number] = ACTIONS(648),
    [sym_comment] = ACTIONS(40),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(663),
    [anon_sym_try] = ACTIONS(663),
    [anon_sym_trap] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(663),
    [sym_number] = ACTIONS(663),
    [sym_comment] = ACTIONS(40),
  },
  [292] = {
    [sym_statement_block] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(757),
    [sym_comment] = ACTIONS(46),
  },
  [294] = {
    [sym_statement] = STATE(317),
    [sym_if] = STATE(59),
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_try] = STATE(59),
    [sym_trap] = STATE(59),
    [sym_flow_control_statement] = STATE(59),
    [sym_flow_break_continue] = STATE(56),
    [sym_boolean_value] = STATE(59),
    [sym_user_variable] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(593),
    [anon_sym_trap] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(46),
  },
  [295] = {
    [sym_statement_block] = STATE(318),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [296] = {
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym_comment] = ACTIONS(46),
  },
  [297] = {
    [sym_statement_block] = STATE(320),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [298] = {
    [sym_catch] = STATE(153),
    [aux_sym_try_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_catch] = ACTIONS(641),
    [anon_sym_finally] = ACTIONS(507),
    [sym_comment] = ACTIONS(46),
  },
  [299] = {
    [ts_builtin_sym_end] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(761),
    [anon_sym_try] = ACTIONS(761),
    [anon_sym_trap] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(765),
    [sym_string] = ACTIONS(761),
    [sym_number] = ACTIONS(763),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(763),
  },
  [300] = {
    [sym_statement_block] = STATE(321),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(46),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(767),
    [anon_sym_try] = ACTIONS(767),
    [anon_sym_trap] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(771),
    [sym_string] = ACTIONS(767),
    [sym_number] = ACTIONS(769),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(769),
  },
  [302] = {
    [anon_sym_RPAREN] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(677),
    [anon_sym_try] = ACTIONS(677),
    [anon_sym_trap] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(677),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(681),
    [sym_string] = ACTIONS(677),
    [sym_number] = ACTIONS(679),
    [sym_comment] = ACTIONS(46),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(683),
    [anon_sym_try] = ACTIONS(683),
    [anon_sym_trap] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(687),
    [sym_string] = ACTIONS(683),
    [sym_number] = ACTIONS(685),
    [sym_comment] = ACTIONS(46),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(689),
    [anon_sym_try] = ACTIONS(689),
    [anon_sym_trap] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(689),
    [anon_sym_RBRACE] = ACTIONS(689),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(693),
    [sym_string] = ACTIONS(689),
    [sym_number] = ACTIONS(691),
    [sym_comment] = ACTIONS(46),
  },
  [305] = {
    [sym_elseif] = STATE(275),
    [aux_sym_if_repeat1] = STATE(305),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(695),
    [anon_sym_try] = ACTIONS(695),
    [anon_sym_trap] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [anon_sym_RBRACE] = ACTIONS(695),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(702),
    [sym_string] = ACTIONS(695),
    [sym_number] = ACTIONS(700),
    [sym_comment] = ACTIONS(46),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(730),
    [anon_sym_try] = ACTIONS(730),
    [anon_sym_trap] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(730),
    [anon_sym_RBRACE] = ACTIONS(730),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(734),
    [sym_string] = ACTIONS(730),
    [sym_number] = ACTIONS(732),
    [sym_comment] = ACTIONS(46),
  },
  [307] = {
    [sym_statement_block] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(776),
    [sym_comment] = ACTIONS(46),
  },
  [309] = {
    [anon_sym_RPAREN] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(740),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(738),
    [anon_sym_try] = ACTIONS(738),
    [anon_sym_trap] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(738),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(740),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(742),
    [sym_string] = ACTIONS(738),
    [sym_number] = ACTIONS(740),
    [sym_comment] = ACTIONS(46),
  },
  [310] = {
    [sym_statement_block] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [311] = {
    [anon_sym_RPAREN] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(681),
    [anon_sym_try] = ACTIONS(681),
    [anon_sym_trap] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(681),
    [anon_sym_SEMI] = ACTIONS(681),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(681),
    [sym_string] = ACTIONS(681),
    [sym_number] = ACTIONS(681),
    [sym_comment] = ACTIONS(40),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(687),
    [anon_sym_try] = ACTIONS(687),
    [anon_sym_trap] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(687),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(687),
    [sym_string] = ACTIONS(687),
    [sym_number] = ACTIONS(687),
    [sym_comment] = ACTIONS(40),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(693),
    [anon_sym_try] = ACTIONS(693),
    [anon_sym_trap] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(693),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(693),
    [sym_string] = ACTIONS(693),
    [sym_number] = ACTIONS(693),
    [sym_comment] = ACTIONS(40),
  },
  [314] = {
    [sym_elseif] = STATE(287),
    [aux_sym_if_repeat1] = STATE(314),
    [anon_sym_RPAREN] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(778),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(702),
    [anon_sym_try] = ACTIONS(702),
    [anon_sym_trap] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(702),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(702),
    [sym_string] = ACTIONS(702),
    [sym_number] = ACTIONS(702),
    [sym_comment] = ACTIONS(40),
  },
  [315] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(734),
    [anon_sym_try] = ACTIONS(734),
    [anon_sym_trap] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(734),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(734),
    [sym_string] = ACTIONS(734),
    [sym_number] = ACTIONS(734),
    [sym_comment] = ACTIONS(40),
  },
  [316] = {
    [sym_statement_block] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [317] = {
    [anon_sym_RPAREN] = ACTIONS(781),
    [sym_comment] = ACTIONS(46),
  },
  [318] = {
    [anon_sym_RPAREN] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(742),
    [anon_sym_try] = ACTIONS(742),
    [anon_sym_trap] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(742),
    [anon_sym_SEMI] = ACTIONS(742),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(742),
    [sym_string] = ACTIONS(742),
    [sym_number] = ACTIONS(742),
    [sym_comment] = ACTIONS(40),
  },
  [319] = {
    [sym_statement_block] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [320] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(276),
    [aux_sym_if_repeat1] = STATE(328),
    [anon_sym_RPAREN] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(706),
    [sym_comment] = ACTIONS(46),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(783),
    [anon_sym_try] = ACTIONS(783),
    [anon_sym_trap] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(787),
    [sym_string] = ACTIONS(783),
    [sym_number] = ACTIONS(785),
    [sym_comment] = ACTIONS(40),
    [sym_signature_block] = ACTIONS(785),
  },
  [322] = {
    [anon_sym_RPAREN] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(761),
    [anon_sym_try] = ACTIONS(761),
    [anon_sym_trap] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(761),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(765),
    [sym_string] = ACTIONS(761),
    [sym_number] = ACTIONS(763),
    [sym_comment] = ACTIONS(46),
  },
  [323] = {
    [sym_statement_block] = STATE(329),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(46),
  },
  [324] = {
    [anon_sym_RPAREN] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(767),
    [anon_sym_try] = ACTIONS(767),
    [anon_sym_trap] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(767),
    [anon_sym_RBRACE] = ACTIONS(767),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(771),
    [sym_string] = ACTIONS(767),
    [sym_number] = ACTIONS(769),
    [sym_comment] = ACTIONS(46),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(765),
    [anon_sym_try] = ACTIONS(765),
    [anon_sym_trap] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(765),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(765),
    [sym_string] = ACTIONS(765),
    [sym_number] = ACTIONS(765),
    [sym_comment] = ACTIONS(40),
  },
  [326] = {
    [sym_statement_block] = STATE(330),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
  },
  [327] = {
    [anon_sym_RPAREN] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(771),
    [anon_sym_try] = ACTIONS(771),
    [anon_sym_trap] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(771),
    [anon_sym_SEMI] = ACTIONS(771),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(771),
    [sym_string] = ACTIONS(771),
    [sym_number] = ACTIONS(771),
    [sym_comment] = ACTIONS(40),
  },
  [328] = {
    [sym_elseif] = STATE(275),
    [sym_else] = STATE(304),
    [aux_sym_if_repeat1] = STATE(331),
    [anon_sym_RPAREN] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(706),
    [sym_comment] = ACTIONS(46),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(783),
    [anon_sym_try] = ACTIONS(783),
    [anon_sym_trap] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(783),
    [anon_sym_RBRACE] = ACTIONS(783),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(787),
    [sym_string] = ACTIONS(783),
    [sym_number] = ACTIONS(785),
    [sym_comment] = ACTIONS(46),
  },
  [330] = {
    [anon_sym_RPAREN] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(787),
    [anon_sym_try] = ACTIONS(787),
    [anon_sym_trap] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(787),
    [anon_sym_SEMI] = ACTIONS(787),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(787),
    [sym_string] = ACTIONS(787),
    [sym_number] = ACTIONS(787),
    [sym_comment] = ACTIONS(40),
  },
  [331] = {
    [sym_elseif] = STATE(275),
    [aux_sym_if_repeat1] = STATE(331),
    [anon_sym_RPAREN] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [sym_comment] = ACTIONS(46),
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
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [214] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [217] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [220] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [223] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [226] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(7),
  [229] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(8),
  [232] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(9),
  [235] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(10),
  [238] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(11),
  [241] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(12),
  [244] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(13),
  [247] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(14),
  [250] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(14),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 3),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 3),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 4),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 4),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [377] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(40),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [398] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(49),
  [401] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(50),
  [404] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(51),
  [407] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(52),
  [410] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(53),
  [413] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(54),
  [416] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(55),
  [419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(56),
  [422] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(57),
  [425] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(46),
  [428] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(41),
  [431] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(59),
  [434] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(59),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_terminator, 1),
  [459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [511] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(82),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 5),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 5),
  [536] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(91),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(244),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [641] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(151),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(255),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [656] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(167),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [697] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(189),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [716] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(285),
  [718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [724] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [734] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [742] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [750] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(233),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [773] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(273),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [778] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(285),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
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
