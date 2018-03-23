#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 421
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 8,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 10,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 12,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 13,
  aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH = 14,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 16,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH = 17,
  anon_sym_DASH = 18,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH = 22,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH = 26,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH = 27,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH = 28,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 29,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 30,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 31,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH = 32,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH = 33,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_SEMI = 37,
  aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH = 38,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 39,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 40,
  sym_identifier = 41,
  sym_string = 42,
  sym_number = 43,
  sym_comment = 44,
  sym_signature_block = 45,
  sym_script = 46,
  sym_param_block = 47,
  sym_parameter_list = 48,
  sym_parameter_declaration = 49,
  sym_attribute = 50,
  sym_type_literal = 51,
  sym_array_declaration = 52,
  sym_attribute_arguments = 53,
  sym_attribute_argument = 54,
  sym_script_block = 55,
  sym_statement = 56,
  sym_function_definition = 57,
  sym_if = 58,
  sym_elseif = 59,
  sym_else = 60,
  sym_while = 61,
  sym_do = 62,
  sym_for = 63,
  sym_foreach = 64,
  sym_foreach_parameter = 65,
  sym_try = 66,
  sym_catch = 67,
  sym_finally = 68,
  sym_trap = 69,
  sym_data = 70,
  sym_flow_control_statement = 71,
  sym_flow_break_continue = 72,
  sym_switch = 73,
  sym_switch_parameter = 74,
  sym_switch_condition = 75,
  sym_switch_body = 76,
  sym_switch_clause = 77,
  sym_switch_clause_condition = 78,
  sym_statement_block = 79,
  sym_statement_terminator = 80,
  sym_boolean_value = 81,
  sym_user_variable = 82,
  aux_sym_parameter_list_repeat1 = 83,
  aux_sym_parameter_declaration_repeat1 = 84,
  aux_sym_array_declaration_repeat1 = 85,
  aux_sym_attribute_arguments_repeat1 = 86,
  aux_sym_script_block_repeat1 = 87,
  aux_sym_if_repeat1 = 88,
  aux_sym_try_repeat1 = 89,
  aux_sym_catch_repeat1 = 90,
  aux_sym_switch_repeat1 = 91,
  aux_sym_switch_body_repeat1 = 92,
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
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[fF][uU][nN][cC][tT][iI][oO][nN]/",
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
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = "/[tT][rR][yY]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = "/[cC][aA][tT][cC][hH]/",
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = "/[fF][iI][nN][aA][lL][lL][yY]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = "/[tT][rR][aA][pP]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = "/[dD][aA][tT][aA]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[rR][eE][tT][uU][rR][nN]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = "/[tT][hH][rR][oO][wW]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[eE][xX][iI][tT]/",
  [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = "/[bB][rR][eE][aA][kK]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][oO][nN][tT][iI][nN][uU][eE]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = "/[sS][wW][iI][tT][cC][hH]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = "/[rR][eE][gG][eE][xX]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[wW][iI][lL][dD][cC][aA][rR][dD]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[eE][xX][aA][cC][tT]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS][iI][tT][iI][vV][eE]/",
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
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_attribute] = "attribute",
  [sym_type_literal] = "type_literal",
  [sym_array_declaration] = "array_declaration",
  [sym_attribute_arguments] = "attribute_arguments",
  [sym_attribute_argument] = "attribute_argument",
  [sym_script_block] = "script_block",
  [sym_statement] = "statement",
  [sym_function_definition] = "function_definition",
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
  [sym_data] = "data",
  [sym_flow_control_statement] = "flow_control_statement",
  [sym_flow_break_continue] = "flow_break_continue",
  [sym_switch] = "switch",
  [sym_switch_parameter] = "switch_parameter",
  [sym_switch_condition] = "switch_condition",
  [sym_switch_body] = "switch_body",
  [sym_switch_clause] = "switch_clause",
  [sym_switch_clause_condition] = "switch_clause_condition",
  [sym_statement_block] = "statement_block",
  [sym_statement_terminator] = "statement_terminator",
  [sym_boolean_value] = "boolean_value",
  [sym_user_variable] = "user_variable",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_array_declaration_repeat1] = "array_declaration_repeat1",
  [aux_sym_attribute_arguments_repeat1] = "attribute_arguments_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_try_repeat1] = "try_repeat1",
  [aux_sym_catch_repeat1] = "catch_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_switch_body_repeat1] = "switch_body_repeat1",
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
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
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
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = {
    .visible = false,
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
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [sym_parameter_list] = {
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
  [sym_array_declaration] = {
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
  [sym_function_definition] = {
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
  [sym_data] = {
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
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_body] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_clause_condition] = {
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
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_declaration_repeat1] = {
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
  [aux_sym_catch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_body_repeat1] = {
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
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(97);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
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
        ADVANCE(51);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
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
        ADVANCE(51);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
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
        ADVANCE(51);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(98);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(103);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 112:
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 131:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 162:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(174);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(176);
      END_STATE();
    case 174:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 177:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 182:
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
        ADVANCE(42);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 184:
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(97);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 185:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(186);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      END_STATE();
    case 186:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 187:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(188);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      END_STATE();
    case 188:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(194);
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
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(192);
      END_STATE();
    case 196:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 208:
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(119);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(142);
      END_STATE();
    case 211:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(212);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 217:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(236);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 231:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 236:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 257:
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 258:
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(258);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 259:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(150);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 261:
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(97);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 262:
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(212);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(262);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(264);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(132);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 269:
      if (lookahead == '\r')
        ADVANCE(270);
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(269);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == '\r')
        ADVANCE(270);
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
      if (lookahead == '|')
        ADVANCE(272);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(269);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 272:
      if (lookahead == '\r')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      END_STATE();
    case 274:
      if (lookahead == '\r')
        ADVANCE(275);
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(97);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(274);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == '\r')
        ADVANCE(275);
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
      if (lookahead == '|')
        ADVANCE(272);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(97);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(274);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 277:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(260);
      END_STATE();
    case 279:
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 280:
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 281:
      if (lookahead == '\r')
        ADVANCE(282);
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(281);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == '\r')
        ADVANCE(282);
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
      if (lookahead == '|')
        ADVANCE(272);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(281);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 284:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(20);
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
        SKIP(284);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 285:
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 286:
      if (lookahead == '\r')
        ADVANCE(287);
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(286);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH);
      if (lookahead == '\n')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == '\r')
        ADVANCE(287);
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
      if (lookahead == '|')
        ADVANCE(272);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(286);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 182},
  [3] = {.lex_state = 183},
  [4] = {.lex_state = 182},
  [5] = {.lex_state = 182},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 182},
  [8] = {.lex_state = 182},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 182},
  [11] = {.lex_state = 183},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 184},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 112},
  [16] = {.lex_state = 112},
  [17] = {.lex_state = 112},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 182},
  [20] = {.lex_state = 112},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 112},
  [23] = {.lex_state = 112},
  [24] = {.lex_state = 185},
  [25] = {.lex_state = 112},
  [26] = {.lex_state = 182},
  [27] = {.lex_state = 187},
  [28] = {.lex_state = 187},
  [29] = {.lex_state = 208},
  [30] = {.lex_state = 211},
  [31] = {.lex_state = 208},
  [32] = {.lex_state = 185},
  [33] = {.lex_state = 217},
  [34] = {.lex_state = 182},
  [35] = {.lex_state = 208},
  [36] = {.lex_state = 257},
  [37] = {.lex_state = 183},
  [38] = {.lex_state = 182},
  [39] = {.lex_state = 112},
  [40] = {.lex_state = 182},
  [41] = {.lex_state = 112},
  [42] = {.lex_state = 112},
  [43] = {.lex_state = 187},
  [44] = {.lex_state = 217},
  [45] = {.lex_state = 182},
  [46] = {.lex_state = 182},
  [47] = {.lex_state = 182},
  [48] = {.lex_state = 182},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 112},
  [51] = {.lex_state = 112},
  [52] = {.lex_state = 183},
  [53] = {.lex_state = 258},
  [54] = {.lex_state = 182},
  [55] = {.lex_state = 185},
  [56] = {.lex_state = 182},
  [57] = {.lex_state = 185},
  [58] = {.lex_state = 185},
  [59] = {.lex_state = 182},
  [60] = {.lex_state = 112},
  [61] = {.lex_state = 208},
  [62] = {.lex_state = 182},
  [63] = {.lex_state = 182},
  [64] = {.lex_state = 183},
  [65] = {.lex_state = 182},
  [66] = {.lex_state = 182},
  [67] = {.lex_state = 182},
  [68] = {.lex_state = 182},
  [69] = {.lex_state = 182},
  [70] = {.lex_state = 182},
  [71] = {.lex_state = 182},
  [72] = {.lex_state = 183},
  [73] = {.lex_state = 208},
  [74] = {.lex_state = 261},
  [75] = {.lex_state = 182},
  [76] = {.lex_state = 262},
  [77] = {.lex_state = 208},
  [78] = {.lex_state = 208},
  [79] = {.lex_state = 208},
  [80] = {.lex_state = 182},
  [81] = {.lex_state = 182},
  [82] = {.lex_state = 183},
  [83] = {.lex_state = 182},
  [84] = {.lex_state = 182},
  [85] = {.lex_state = 182},
  [86] = {.lex_state = 182},
  [87] = {.lex_state = 182},
  [88] = {.lex_state = 182},
  [89] = {.lex_state = 182},
  [90] = {.lex_state = 183},
  [91] = {.lex_state = 269},
  [92] = {.lex_state = 274},
  [93] = {.lex_state = 182},
  [94] = {.lex_state = 269},
  [95] = {.lex_state = 269},
  [96] = {.lex_state = 269},
  [97] = {.lex_state = 269},
  [98] = {.lex_state = 277},
  [99] = {.lex_state = 182},
  [100] = {.lex_state = 185},
  [101] = {.lex_state = 279},
  [102] = {.lex_state = 208},
  [103] = {.lex_state = 182},
  [104] = {.lex_state = 182},
  [105] = {.lex_state = 257},
  [106] = {.lex_state = 112},
  [107] = {.lex_state = 257},
  [108] = {.lex_state = 182},
  [109] = {.lex_state = 112},
  [110] = {.lex_state = 112},
  [111] = {.lex_state = 182},
  [112] = {.lex_state = 182},
  [113] = {.lex_state = 183},
  [114] = {.lex_state = 112},
  [115] = {.lex_state = 182},
  [116] = {.lex_state = 182},
  [117] = {.lex_state = 182},
  [118] = {.lex_state = 182},
  [119] = {.lex_state = 185},
  [120] = {.lex_state = 112},
  [121] = {.lex_state = 182},
  [122] = {.lex_state = 182},
  [123] = {.lex_state = 185},
  [124] = {.lex_state = 182},
  [125] = {.lex_state = 182},
  [126] = {.lex_state = 112},
  [127] = {.lex_state = 182},
  [128] = {.lex_state = 182},
  [129] = {.lex_state = 182},
  [130] = {.lex_state = 187},
  [131] = {.lex_state = 187},
  [132] = {.lex_state = 211},
  [133] = {.lex_state = 208},
  [134] = {.lex_state = 185},
  [135] = {.lex_state = 182},
  [136] = {.lex_state = 208},
  [137] = {.lex_state = 182},
  [138] = {.lex_state = 208},
  [139] = {.lex_state = 182},
  [140] = {.lex_state = 208},
  [141] = {.lex_state = 208},
  [142] = {.lex_state = 182},
  [143] = {.lex_state = 182},
  [144] = {.lex_state = 262},
  [145] = {.lex_state = 208},
  [146] = {.lex_state = 187},
  [147] = {.lex_state = 112},
  [148] = {.lex_state = 182},
  [149] = {.lex_state = 187},
  [150] = {.lex_state = 187},
  [151] = {.lex_state = 211},
  [152] = {.lex_state = 208},
  [153] = {.lex_state = 185},
  [154] = {.lex_state = 182},
  [155] = {.lex_state = 208},
  [156] = {.lex_state = 269},
  [157] = {.lex_state = 182},
  [158] = {.lex_state = 269},
  [159] = {.lex_state = 182},
  [160] = {.lex_state = 269},
  [161] = {.lex_state = 269},
  [162] = {.lex_state = 182},
  [163] = {.lex_state = 182},
  [164] = {.lex_state = 182},
  [165] = {.lex_state = 208},
  [166] = {.lex_state = 269},
  [167] = {.lex_state = 208},
  [168] = {.lex_state = 185},
  [169] = {.lex_state = 277},
  [170] = {.lex_state = 279},
  [171] = {.lex_state = 182},
  [172] = {.lex_state = 257},
  [173] = {.lex_state = 182},
  [174] = {.lex_state = 112},
  [175] = {.lex_state = 112},
  [176] = {.lex_state = 257},
  [177] = {.lex_state = 183},
  [178] = {.lex_state = 182},
  [179] = {.lex_state = 182},
  [180] = {.lex_state = 182},
  [181] = {.lex_state = 112},
  [182] = {.lex_state = 182},
  [183] = {.lex_state = 183},
  [184] = {.lex_state = 182},
  [185] = {.lex_state = 183},
  [186] = {.lex_state = 112},
  [187] = {.lex_state = 183},
  [188] = {.lex_state = 185},
  [189] = {.lex_state = 182},
  [190] = {.lex_state = 182},
  [191] = {.lex_state = 112},
  [192] = {.lex_state = 182},
  [193] = {.lex_state = 182},
  [194] = {.lex_state = 182},
  [195] = {.lex_state = 280},
  [196] = {.lex_state = 112},
  [197] = {.lex_state = 182},
  [198] = {.lex_state = 208},
  [199] = {.lex_state = 182},
  [200] = {.lex_state = 182},
  [201] = {.lex_state = 182},
  [202] = {.lex_state = 182},
  [203] = {.lex_state = 269},
  [204] = {.lex_state = 277},
  [205] = {.lex_state = 185},
  [206] = {.lex_state = 182},
  [207] = {.lex_state = 182},
  [208] = {.lex_state = 208},
  [209] = {.lex_state = 208},
  [210] = {.lex_state = 208},
  [211] = {.lex_state = 208},
  [212] = {.lex_state = 208},
  [213] = {.lex_state = 183},
  [214] = {.lex_state = 208},
  [215] = {.lex_state = 182},
  [216] = {.lex_state = 182},
  [217] = {.lex_state = 182},
  [218] = {.lex_state = 269},
  [219] = {.lex_state = 182},
  [220] = {.lex_state = 182},
  [221] = {.lex_state = 182},
  [222] = {.lex_state = 182},
  [223] = {.lex_state = 269},
  [224] = {.lex_state = 277},
  [225] = {.lex_state = 185},
  [226] = {.lex_state = 281},
  [227] = {.lex_state = 208},
  [228] = {.lex_state = 182},
  [229] = {.lex_state = 182},
  [230] = {.lex_state = 269},
  [231] = {.lex_state = 269},
  [232] = {.lex_state = 269},
  [233] = {.lex_state = 269},
  [234] = {.lex_state = 269},
  [235] = {.lex_state = 183},
  [236] = {.lex_state = 269},
  [237] = {.lex_state = 182},
  [238] = {.lex_state = 112},
  [239] = {.lex_state = 182},
  [240] = {.lex_state = 182},
  [241] = {.lex_state = 182},
  [242] = {.lex_state = 183},
  [243] = {.lex_state = 182},
  [244] = {.lex_state = 208},
  [245] = {.lex_state = 269},
  [246] = {.lex_state = 182},
  [247] = {.lex_state = 185},
  [248] = {.lex_state = 257},
  [249] = {.lex_state = 182},
  [250] = {.lex_state = 182},
  [251] = {.lex_state = 182},
  [252] = {.lex_state = 182},
  [253] = {.lex_state = 182},
  [254] = {.lex_state = 208},
  [255] = {.lex_state = 183},
  [256] = {.lex_state = 112},
  [257] = {.lex_state = 183},
  [258] = {.lex_state = 182},
  [259] = {.lex_state = 182},
  [260] = {.lex_state = 182},
  [261] = {.lex_state = 185},
  [262] = {.lex_state = 182},
  [263] = {.lex_state = 182},
  [264] = {.lex_state = 182},
  [265] = {.lex_state = 280},
  [266] = {.lex_state = 112},
  [267] = {.lex_state = 280},
  [268] = {.lex_state = 208},
  [269] = {.lex_state = 182},
  [270] = {.lex_state = 182},
  [271] = {.lex_state = 187},
  [272] = {.lex_state = 208},
  [273] = {.lex_state = 182},
  [274] = {.lex_state = 269},
  [275] = {.lex_state = 208},
  [276] = {.lex_state = 185},
  [277] = {.lex_state = 277},
  [278] = {.lex_state = 208},
  [279] = {.lex_state = 182},
  [280] = {.lex_state = 208},
  [281] = {.lex_state = 208},
  [282] = {.lex_state = 208},
  [283] = {.lex_state = 208},
  [284] = {.lex_state = 183},
  [285] = {.lex_state = 208},
  [286] = {.lex_state = 112},
  [287] = {.lex_state = 269},
  [288] = {.lex_state = 182},
  [289] = {.lex_state = 182},
  [290] = {.lex_state = 187},
  [291] = {.lex_state = 269},
  [292] = {.lex_state = 182},
  [293] = {.lex_state = 269},
  [294] = {.lex_state = 208},
  [295] = {.lex_state = 185},
  [296] = {.lex_state = 277},
  [297] = {.lex_state = 281},
  [298] = {.lex_state = 269},
  [299] = {.lex_state = 182},
  [300] = {.lex_state = 269},
  [301] = {.lex_state = 269},
  [302] = {.lex_state = 269},
  [303] = {.lex_state = 269},
  [304] = {.lex_state = 183},
  [305] = {.lex_state = 269},
  [306] = {.lex_state = 112},
  [307] = {.lex_state = 187},
  [308] = {.lex_state = 187},
  [309] = {.lex_state = 182},
  [310] = {.lex_state = 182},
  [311] = {.lex_state = 208},
  [312] = {.lex_state = 182},
  [313] = {.lex_state = 182},
  [314] = {.lex_state = 182},
  [315] = {.lex_state = 182},
  [316] = {.lex_state = 183},
  [317] = {.lex_state = 208},
  [318] = {.lex_state = 284},
  [319] = {.lex_state = 183},
  [320] = {.lex_state = 182},
  [321] = {.lex_state = 182},
  [322] = {.lex_state = 280},
  [323] = {.lex_state = 112},
  [324] = {.lex_state = 112},
  [325] = {.lex_state = 280},
  [326] = {.lex_state = 285},
  [327] = {.lex_state = 208},
  [328] = {.lex_state = 182},
  [329] = {.lex_state = 208},
  [330] = {.lex_state = 182},
  [331] = {.lex_state = 182},
  [332] = {.lex_state = 208},
  [333] = {.lex_state = 269},
  [334] = {.lex_state = 182},
  [335] = {.lex_state = 185},
  [336] = {.lex_state = 208},
  [337] = {.lex_state = 208},
  [338] = {.lex_state = 286},
  [339] = {.lex_state = 269},
  [340] = {.lex_state = 182},
  [341] = {.lex_state = 269},
  [342] = {.lex_state = 182},
  [343] = {.lex_state = 182},
  [344] = {.lex_state = 208},
  [345] = {.lex_state = 269},
  [346] = {.lex_state = 182},
  [347] = {.lex_state = 185},
  [348] = {.lex_state = 269},
  [349] = {.lex_state = 269},
  [350] = {.lex_state = 182},
  [351] = {.lex_state = 187},
  [352] = {.lex_state = 112},
  [353] = {.lex_state = 182},
  [354] = {.lex_state = 182},
  [355] = {.lex_state = 112},
  [356] = {.lex_state = 182},
  [357] = {.lex_state = 183},
  [358] = {.lex_state = 182},
  [359] = {.lex_state = 182},
  [360] = {.lex_state = 182},
  [361] = {.lex_state = 182},
  [362] = {.lex_state = 182},
  [363] = {.lex_state = 182},
  [364] = {.lex_state = 285},
  [365] = {.lex_state = 208},
  [366] = {.lex_state = 285},
  [367] = {.lex_state = 208},
  [368] = {.lex_state = 208},
  [369] = {.lex_state = 182},
  [370] = {.lex_state = 182},
  [371] = {.lex_state = 208},
  [372] = {.lex_state = 182},
  [373] = {.lex_state = 182},
  [374] = {.lex_state = 182},
  [375] = {.lex_state = 182},
  [376] = {.lex_state = 286},
  [377] = {.lex_state = 269},
  [378] = {.lex_state = 286},
  [379] = {.lex_state = 269},
  [380] = {.lex_state = 269},
  [381] = {.lex_state = 182},
  [382] = {.lex_state = 182},
  [383] = {.lex_state = 208},
  [384] = {.lex_state = 182},
  [385] = {.lex_state = 182},
  [386] = {.lex_state = 182},
  [387] = {.lex_state = 187},
  [388] = {.lex_state = 112},
  [389] = {.lex_state = 182},
  [390] = {.lex_state = 112},
  [391] = {.lex_state = 285},
  [392] = {.lex_state = 208},
  [393] = {.lex_state = 208},
  [394] = {.lex_state = 285},
  [395] = {.lex_state = 208},
  [396] = {.lex_state = 182},
  [397] = {.lex_state = 182},
  [398] = {.lex_state = 208},
  [399] = {.lex_state = 182},
  [400] = {.lex_state = 286},
  [401] = {.lex_state = 269},
  [402] = {.lex_state = 269},
  [403] = {.lex_state = 286},
  [404] = {.lex_state = 269},
  [405] = {.lex_state = 182},
  [406] = {.lex_state = 182},
  [407] = {.lex_state = 269},
  [408] = {.lex_state = 182},
  [409] = {.lex_state = 285},
  [410] = {.lex_state = 112},
  [411] = {.lex_state = 208},
  [412] = {.lex_state = 182},
  [413] = {.lex_state = 208},
  [414] = {.lex_state = 269},
  [415] = {.lex_state = 182},
  [416] = {.lex_state = 269},
  [417] = {.lex_state = 285},
  [418] = {.lex_state = 208},
  [419] = {.lex_state = 269},
  [420] = {.lex_state = 285},
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
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(3),
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
    [sym_script] = STATE(19),
    [sym_param_block] = STATE(20),
    [sym_script_block] = STATE(21),
    [sym_statement] = STATE(22),
    [sym_function_definition] = STATE(17),
    [sym_if] = STATE(17),
    [sym_while] = STATE(17),
    [sym_do] = STATE(17),
    [sym_for] = STATE(17),
    [sym_foreach] = STATE(17),
    [sym_try] = STATE(17),
    [sym_trap] = STATE(17),
    [sym_data] = STATE(17),
    [sym_flow_control_statement] = STATE(17),
    [sym_flow_break_continue] = STATE(12),
    [sym_switch] = STATE(17),
    [sym_boolean_value] = STATE(17),
    [sym_user_variable] = STATE(17),
    [aux_sym_script_block_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(40),
    [sym_string] = ACTIONS(42),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(48),
  },
  [2] = {
    [sym_parameter_list] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_comment] = ACTIONS(52),
  },
  [3] = {
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(52),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_comment] = ACTIONS(52),
  },
  [6] = {
    [sym_statement_block] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(52),
  },
  [8] = {
    [sym_foreach_parameter] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(52),
  },
  [9] = {
    [sym_statement_block] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [10] = {
    [sym_type_literal] = STATE(38),
    [sym_statement_block] = STATE(39),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [11] = {
    [sym_statement_block] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(52),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_string] = ACTIONS(74),
    [sym_number] = ACTIONS(76),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(76),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(82),
  },
  [14] = {
    [sym_switch_parameter] = STATE(45),
    [sym_switch_condition] = STATE(46),
    [aux_sym_switch_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(96),
    [sym_string] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(94),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(100),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(108),
    [sym_string] = ACTIONS(104),
    [sym_number] = ACTIONS(106),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(106),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(52),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(52),
  },
  [20] = {
    [sym_script_block] = STATE(49),
    [sym_statement] = STATE(22),
    [sym_function_definition] = STATE(17),
    [sym_if] = STATE(17),
    [sym_while] = STATE(17),
    [sym_do] = STATE(17),
    [sym_for] = STATE(17),
    [sym_foreach] = STATE(17),
    [sym_try] = STATE(17),
    [sym_trap] = STATE(17),
    [sym_data] = STATE(17),
    [sym_flow_control_statement] = STATE(17),
    [sym_flow_break_continue] = STATE(12),
    [sym_switch] = STATE(17),
    [sym_boolean_value] = STATE(17),
    [sym_user_variable] = STATE(17),
    [aux_sym_script_block_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(40),
    [sym_string] = ACTIONS(42),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(114),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(114),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(120),
    [sym_string] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(118),
  },
  [23] = {
    [sym_statement] = STATE(22),
    [sym_function_definition] = STATE(17),
    [sym_if] = STATE(17),
    [sym_while] = STATE(17),
    [sym_do] = STATE(17),
    [sym_for] = STATE(17),
    [sym_foreach] = STATE(17),
    [sym_try] = STATE(17),
    [sym_trap] = STATE(17),
    [sym_data] = STATE(17),
    [sym_flow_control_statement] = STATE(17),
    [sym_flow_break_continue] = STATE(12),
    [sym_switch] = STATE(17),
    [sym_boolean_value] = STATE(17),
    [sym_user_variable] = STATE(17),
    [aux_sym_script_block_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(40),
    [sym_string] = ACTIONS(42),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(124),
  },
  [24] = {
    [sym_parameter_declaration] = STATE(54),
    [sym_attribute] = STATE(55),
    [sym_user_variable] = STATE(56),
    [aux_sym_parameter_declaration_repeat1] = STATE(57),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_string] = ACTIONS(132),
    [sym_number] = ACTIONS(134),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(134),
  },
  [26] = {
    [sym_parameter_list] = STATE(59),
    [sym_statement_block] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [27] = {
    [sym_boolean_value] = STATE(62),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [28] = {
    [sym_boolean_value] = STATE(63),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [29] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(79),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(166),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [30] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [31] = {
    [sym_statement] = STATE(97),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [32] = {
    [sym_user_variable] = STATE(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [33] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(212),
    [sym_comment] = ACTIONS(52),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(214),
    [sym_comment] = ACTIONS(52),
  },
  [35] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym_catch] = STATE(105),
    [sym_finally] = STATE(106),
    [aux_sym_try_repeat1] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(226),
    [sym_string] = ACTIONS(218),
    [sym_number] = ACTIONS(220),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(220),
  },
  [37] = {
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [38] = {
    [sym_statement_block] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(234),
    [sym_string] = ACTIONS(230),
    [sym_number] = ACTIONS(232),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(232),
  },
  [40] = {
    [sym_statement_block] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(240),
    [sym_string] = ACTIONS(236),
    [sym_number] = ACTIONS(238),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(238),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(246),
    [sym_string] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(244),
  },
  [43] = {
    [sym_boolean_value] = STATE(111),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [44] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [sym_switch_body] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(252),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [sym_switch_parameter] = STATE(45),
    [sym_switch_condition] = STATE(115),
    [aux_sym_switch_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(256),
  },
  [50] = {
    [sym_statement] = STATE(22),
    [sym_function_definition] = STATE(17),
    [sym_if] = STATE(17),
    [sym_while] = STATE(17),
    [sym_do] = STATE(17),
    [sym_for] = STATE(17),
    [sym_foreach] = STATE(17),
    [sym_try] = STATE(17),
    [sym_trap] = STATE(17),
    [sym_data] = STATE(17),
    [sym_flow_control_statement] = STATE(17),
    [sym_flow_break_continue] = STATE(12),
    [sym_switch] = STATE(17),
    [sym_boolean_value] = STATE(17),
    [sym_user_variable] = STATE(17),
    [aux_sym_script_block_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(299),
    [sym_string] = ACTIONS(302),
    [sym_number] = ACTIONS(305),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(308),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(314),
    [sym_string] = ACTIONS(310),
    [sym_number] = ACTIONS(312),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(312),
  },
  [52] = {
    [sym_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(52),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [54] = {
    [aux_sym_parameter_list_repeat1] = STATE(121),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(320),
    [sym_comment] = ACTIONS(52),
  },
  [55] = {
    [anon_sym_LBRACK] = ACTIONS(322),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(324),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [sym_comment] = ACTIONS(52),
  },
  [57] = {
    [sym_attribute] = STATE(55),
    [sym_user_variable] = STATE(122),
    [aux_sym_parameter_declaration_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [58] = {
    [sym_parameter_declaration] = STATE(125),
    [sym_attribute] = STATE(55),
    [sym_user_variable] = STATE(56),
    [aux_sym_parameter_declaration_repeat1] = STATE(57),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [59] = {
    [sym_statement_block] = STATE(126),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(334),
    [sym_string] = ACTIONS(330),
    [sym_number] = ACTIONS(332),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(332),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(96),
    [sym_string] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(338),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [sym_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(342),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(344),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [sym_statement_block] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(52),
  },
  [69] = {
    [sym_foreach_parameter] = STATE(135),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(52),
  },
  [70] = {
    [sym_statement_block] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [71] = {
    [sym_type_literal] = STATE(137),
    [sym_statement_block] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [72] = {
    [sym_statement_block] = STATE(140),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(350),
    [sym_comment] = ACTIONS(52),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_string] = ACTIONS(74),
    [sym_number] = ACTIONS(76),
    [sym_comment] = ACTIONS(52),
  },
  [74] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(80),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_identifier] = ACTIONS(352),
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(52),
  },
  [75] = {
    [sym_switch_parameter] = STATE(45),
    [sym_switch_condition] = STATE(142),
    [aux_sym_switch_repeat1] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(358),
    [sym_string] = ACTIONS(354),
    [sym_number] = ACTIONS(356),
    [sym_comment] = ACTIONS(52),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(108),
    [sym_string] = ACTIONS(104),
    [sym_number] = ACTIONS(106),
    [sym_comment] = ACTIONS(52),
  },
  [78] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(120),
    [sym_string] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
    [sym_comment] = ACTIONS(52),
  },
  [79] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(145),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(360),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(362),
    [sym_comment] = ACTIONS(52),
  },
  [81] = {
    [sym_statement_block] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [82] = {
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(52),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(366),
    [sym_comment] = ACTIONS(52),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(368),
    [sym_comment] = ACTIONS(52),
  },
  [85] = {
    [sym_statement_block] = STATE(151),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
  },
  [87] = {
    [sym_foreach_parameter] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [sym_statement_block] = STATE(156),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [89] = {
    [sym_type_literal] = STATE(157),
    [sym_statement_block] = STATE(158),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [90] = {
    [sym_statement_block] = STATE(160),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_identifier] = ACTIONS(376),
    [sym_comment] = ACTIONS(52),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [sym_comment] = ACTIONS(46),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_identifier] = ACTIONS(378),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [sym_comment] = ACTIONS(46),
  },
  [93] = {
    [sym_switch_parameter] = STATE(45),
    [sym_switch_condition] = STATE(162),
    [aux_sym_switch_repeat1] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(96),
    [sym_string] = ACTIONS(96),
    [sym_number] = ACTIONS(96),
    [sym_comment] = ACTIONS(46),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
    [sym_comment] = ACTIONS(46),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(108),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(108),
    [sym_string] = ACTIONS(108),
    [sym_number] = ACTIONS(108),
    [sym_comment] = ACTIONS(46),
  },
  [97] = {
    [sym_statement] = STATE(166),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_statement_terminator] = STATE(167),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(404),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(410),
    [sym_number] = ACTIONS(410),
    [sym_comment] = ACTIONS(46),
  },
  [98] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(412),
    [sym_comment] = ACTIONS(52),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(52),
  },
  [100] = {
    [sym_user_variable] = STATE(169),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(358),
    [sym_string] = ACTIONS(354),
    [sym_number] = ACTIONS(356),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(356),
  },
  [102] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(145),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(416),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [103] = {
    [sym_type_literal] = STATE(171),
    [sym_statement_block] = STATE(172),
    [aux_sym_catch_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [104] = {
    [sym_statement_block] = STATE(174),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(420),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(422),
    [sym_string] = ACTIONS(418),
    [sym_number] = ACTIONS(420),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(420),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(426),
  },
  [107] = {
    [sym_catch] = STATE(105),
    [sym_finally] = STATE(175),
    [aux_sym_try_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(426),
  },
  [108] = {
    [sym_type_literal] = STATE(179),
    [sym_array_declaration] = STATE(179),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_comment] = ACTIONS(52),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(438),
    [sym_string] = ACTIONS(434),
    [sym_number] = ACTIONS(436),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(436),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(442),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [113] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(450),
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(458),
    [sym_string] = ACTIONS(454),
    [sym_number] = ACTIONS(456),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(456),
  },
  [115] = {
    [sym_switch_body] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(252),
    [sym_comment] = ACTIONS(52),
  },
  [116] = {
    [sym_switch_parameter] = STATE(45),
    [aux_sym_switch_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(460),
    [anon_sym_DASH] = ACTIONS(462),
    [sym_comment] = ACTIONS(52),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_comment] = ACTIONS(52),
  },
  [118] = {
    [sym_attribute_arguments] = STATE(189),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_comment] = ACTIONS(52),
  },
  [119] = {
    [sym_parameter_declaration] = STATE(190),
    [sym_attribute] = STATE(55),
    [sym_user_variable] = STATE(56),
    [aux_sym_parameter_declaration_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(475),
    [sym_string] = ACTIONS(471),
    [sym_number] = ACTIONS(473),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(473),
  },
  [121] = {
    [aux_sym_parameter_list_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(477),
    [sym_comment] = ACTIONS(52),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_comment] = ACTIONS(52),
  },
  [123] = {
    [sym_attribute] = STATE(55),
    [aux_sym_parameter_declaration_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(484),
    [sym_comment] = ACTIONS(52),
  },
  [124] = {
    [anon_sym_LBRACE] = ACTIONS(310),
    [sym_comment] = ACTIONS(52),
  },
  [125] = {
    [aux_sym_parameter_list_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(492),
    [sym_string] = ACTIONS(488),
    [sym_number] = ACTIONS(490),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(490),
  },
  [127] = {
    [sym_statement_block] = STATE(195),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [128] = {
    [sym_statement_block] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [129] = {
    [sym_parameter_list] = STATE(197),
    [sym_statement_block] = STATE(198),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [130] = {
    [sym_boolean_value] = STATE(199),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [131] = {
    [sym_boolean_value] = STATE(200),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [132] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(494),
    [sym_comment] = ACTIONS(52),
  },
  [133] = {
    [sym_statement] = STATE(203),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(496),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [134] = {
    [sym_user_variable] = STATE(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(498),
    [sym_comment] = ACTIONS(52),
  },
  [136] = {
    [sym_catch] = STATE(208),
    [sym_finally] = STATE(209),
    [aux_sym_try_repeat1] = STATE(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(226),
    [sym_string] = ACTIONS(218),
    [sym_number] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
  },
  [137] = {
    [sym_statement_block] = STATE(211),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [138] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(234),
    [sym_string] = ACTIONS(230),
    [sym_number] = ACTIONS(232),
    [sym_comment] = ACTIONS(52),
  },
  [139] = {
    [sym_statement_block] = STATE(212),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(240),
    [sym_string] = ACTIONS(236),
    [sym_number] = ACTIONS(238),
    [sym_comment] = ACTIONS(52),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(246),
    [sym_string] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [sym_switch_body] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(504),
    [sym_comment] = ACTIONS(52),
  },
  [143] = {
    [sym_switch_parameter] = STATE(45),
    [sym_switch_condition] = STATE(215),
    [aux_sym_switch_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(510),
    [sym_string] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [sym_comment] = ACTIONS(52),
  },
  [145] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(145),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(536),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(542),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(542),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(258),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(551),
    [sym_string] = ACTIONS(554),
    [sym_number] = ACTIONS(557),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [sym_boolean_value] = STATE(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(564),
    [sym_string] = ACTIONS(560),
    [sym_number] = ACTIONS(562),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(562),
  },
  [148] = {
    [sym_parameter_list] = STATE(217),
    [sym_statement_block] = STATE(218),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [149] = {
    [sym_boolean_value] = STATE(219),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [sym_boolean_value] = STATE(220),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [151] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(566),
    [sym_comment] = ACTIONS(52),
  },
  [152] = {
    [sym_statement] = STATE(223),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(568),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [sym_user_variable] = STATE(224),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(570),
    [sym_comment] = ACTIONS(52),
  },
  [155] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(227),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(572),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [156] = {
    [sym_catch] = STATE(230),
    [sym_finally] = STATE(231),
    [aux_sym_try_repeat1] = STATE(232),
    [anon_sym_RPAREN] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(226),
    [sym_string] = ACTIONS(226),
    [sym_number] = ACTIONS(226),
    [sym_comment] = ACTIONS(46),
  },
  [157] = {
    [sym_statement_block] = STATE(233),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(234),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(234),
    [sym_string] = ACTIONS(234),
    [sym_number] = ACTIONS(234),
    [sym_comment] = ACTIONS(46),
  },
  [159] = {
    [sym_statement_block] = STATE(234),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [160] = {
    [anon_sym_RPAREN] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(240),
    [sym_string] = ACTIONS(240),
    [sym_number] = ACTIONS(240),
    [sym_comment] = ACTIONS(46),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym_number] = ACTIONS(246),
    [sym_comment] = ACTIONS(46),
  },
  [162] = {
    [sym_switch_body] = STATE(236),
    [anon_sym_LBRACE] = ACTIONS(578),
    [sym_comment] = ACTIONS(52),
  },
  [163] = {
    [sym_switch_parameter] = STATE(45),
    [sym_switch_condition] = STATE(237),
    [aux_sym_switch_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [164] = {
    [sym_statement_block] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(584),
    [sym_string] = ACTIONS(580),
    [sym_number] = ACTIONS(582),
    [sym_comment] = ACTIONS(52),
  },
  [166] = {
    [sym_statement] = STATE(243),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_statement_terminator] = STATE(244),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(586),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(614),
    [sym_number] = ACTIONS(614),
    [sym_comment] = ACTIONS(46),
  },
  [167] = {
    [sym_statement] = STATE(245),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(616),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [168] = {
    [sym_user_variable] = STATE(246),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [169] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(618),
    [sym_comment] = ACTIONS(52),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(510),
    [sym_string] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(508),
  },
  [171] = {
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_LBRACE] = ACTIONS(620),
    [sym_comment] = ACTIONS(52),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(626),
    [sym_string] = ACTIONS(622),
    [sym_number] = ACTIONS(624),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(624),
  },
  [173] = {
    [sym_type_literal] = STATE(171),
    [sym_statement_block] = STATE(248),
    [aux_sym_catch_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(632),
    [sym_string] = ACTIONS(628),
    [sym_number] = ACTIONS(630),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(630),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(638),
    [sym_string] = ACTIONS(634),
    [sym_number] = ACTIONS(636),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(636),
  },
  [176] = {
    [sym_catch] = STATE(105),
    [aux_sym_try_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_string] = ACTIONS(640),
    [sym_number] = ACTIONS(642),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(642),
  },
  [177] = {
    [aux_sym_array_declaration_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(651),
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_RBRACK] = ACTIONS(653),
    [anon_sym_LBRACE] = ACTIONS(653),
    [sym_comment] = ACTIONS(52),
  },
  [179] = {
    [anon_sym_RBRACK] = ACTIONS(655),
    [sym_comment] = ACTIONS(52),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(657),
    [sym_comment] = ACTIONS(52),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(659),
    [sym_number] = ACTIONS(661),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(661),
  },
  [182] = {
    [anon_sym_LBRACE] = ACTIONS(665),
    [sym_comment] = ACTIONS(52),
  },
  [183] = {
    [anon_sym_RBRACE] = ACTIONS(667),
    [sym_identifier] = ACTIONS(669),
    [sym_comment] = ACTIONS(52),
  },
  [184] = {
    [sym_statement_block] = STATE(255),
    [anon_sym_LBRACE] = ACTIONS(671),
    [sym_comment] = ACTIONS(52),
  },
  [185] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(257),
    [anon_sym_RBRACE] = ACTIONS(673),
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(679),
    [sym_string] = ACTIONS(675),
    [sym_number] = ACTIONS(677),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(677),
  },
  [187] = {
    [sym_attribute_argument] = STATE(260),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(52),
  },
  [188] = {
    [anon_sym_LBRACK] = ACTIONS(685),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(687),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_comment] = ACTIONS(52),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [sym_comment] = ACTIONS(52),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(697),
    [sym_string] = ACTIONS(693),
    [sym_number] = ACTIONS(695),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(695),
  },
  [192] = {
    [aux_sym_parameter_list_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(691),
    [sym_comment] = ACTIONS(52),
  },
  [193] = {
    [anon_sym_LBRACE] = ACTIONS(471),
    [sym_comment] = ACTIONS(52),
  },
  [194] = {
    [aux_sym_parameter_list_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(702),
    [sym_comment] = ACTIONS(52),
  },
  [195] = {
    [sym_elseif] = STATE(265),
    [sym_else] = STATE(266),
    [aux_sym_if_repeat1] = STATE(267),
    [ts_builtin_sym_end] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(706),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(708),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(710),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(710),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(712),
    [sym_string] = ACTIONS(704),
    [sym_number] = ACTIONS(710),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(710),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(718),
    [sym_string] = ACTIONS(714),
    [sym_number] = ACTIONS(716),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(716),
  },
  [197] = {
    [sym_statement_block] = STATE(268),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(334),
    [sym_string] = ACTIONS(330),
    [sym_number] = ACTIONS(332),
    [sym_comment] = ACTIONS(52),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(720),
    [sym_comment] = ACTIONS(52),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(722),
    [sym_comment] = ACTIONS(52),
  },
  [201] = {
    [anon_sym_LPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(52),
  },
  [202] = {
    [sym_statement_block] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [203] = {
    [sym_statement] = STATE(274),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_statement_terminator] = STATE(275),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(726),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(404),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(410),
    [sym_number] = ACTIONS(410),
    [sym_comment] = ACTIONS(46),
  },
  [204] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(728),
    [sym_comment] = ACTIONS(52),
  },
  [205] = {
    [sym_user_variable] = STATE(277),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [206] = {
    [sym_type_literal] = STATE(171),
    [sym_statement_block] = STATE(278),
    [aux_sym_catch_repeat1] = STATE(279),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [207] = {
    [sym_statement_block] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(420),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(418),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(422),
    [sym_string] = ACTIONS(418),
    [sym_number] = ACTIONS(420),
    [sym_comment] = ACTIONS(52),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [sym_comment] = ACTIONS(52),
  },
  [210] = {
    [sym_catch] = STATE(208),
    [sym_finally] = STATE(281),
    [aux_sym_try_repeat1] = STATE(282),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [sym_comment] = ACTIONS(52),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(438),
    [sym_string] = ACTIONS(434),
    [sym_number] = ACTIONS(436),
    [sym_comment] = ACTIONS(52),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
  },
  [213] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(284),
    [anon_sym_RBRACE] = ACTIONS(730),
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(458),
    [sym_string] = ACTIONS(454),
    [sym_number] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [215] = {
    [sym_switch_body] = STATE(285),
    [anon_sym_LBRACE] = ACTIONS(504),
    [sym_comment] = ACTIONS(52),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(52),
  },
  [217] = {
    [sym_statement_block] = STATE(287),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(334),
    [sym_string] = ACTIONS(334),
    [sym_number] = ACTIONS(334),
    [sym_comment] = ACTIONS(46),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(736),
    [sym_comment] = ACTIONS(52),
  },
  [221] = {
    [anon_sym_LPAREN] = ACTIONS(738),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [sym_statement_block] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [sym_statement] = STATE(293),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_statement_terminator] = STATE(294),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(740),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(402),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(404),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(410),
    [sym_number] = ACTIONS(410),
    [sym_comment] = ACTIONS(46),
  },
  [224] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(742),
    [sym_comment] = ACTIONS(52),
  },
  [225] = {
    [sym_user_variable] = STATE(296),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(358),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(358),
    [sym_string] = ACTIONS(358),
    [sym_number] = ACTIONS(358),
    [sym_comment] = ACTIONS(46),
  },
  [227] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(145),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(744),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [sym_type_literal] = STATE(171),
    [sym_statement_block] = STATE(298),
    [aux_sym_catch_repeat1] = STATE(299),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [229] = {
    [sym_statement_block] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(422),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(422),
    [sym_string] = ACTIONS(422),
    [sym_number] = ACTIONS(422),
    [sym_comment] = ACTIONS(46),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(428),
    [sym_number] = ACTIONS(428),
    [sym_comment] = ACTIONS(46),
  },
  [232] = {
    [sym_catch] = STATE(230),
    [sym_finally] = STATE(301),
    [aux_sym_try_repeat1] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(428),
    [sym_string] = ACTIONS(428),
    [sym_number] = ACTIONS(428),
    [sym_comment] = ACTIONS(46),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(438),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(438),
    [sym_string] = ACTIONS(438),
    [sym_number] = ACTIONS(438),
    [sym_comment] = ACTIONS(46),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(444),
    [sym_number] = ACTIONS(444),
    [sym_comment] = ACTIONS(46),
  },
  [235] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(304),
    [anon_sym_RBRACE] = ACTIONS(746),
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(458),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(458),
    [sym_string] = ACTIONS(458),
    [sym_number] = ACTIONS(458),
    [sym_comment] = ACTIONS(46),
  },
  [237] = {
    [sym_switch_body] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(578),
    [sym_comment] = ACTIONS(52),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(752),
    [sym_string] = ACTIONS(748),
    [sym_number] = ACTIONS(750),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(750),
  },
  [239] = {
    [sym_statement_block] = STATE(306),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [240] = {
    [anon_sym_LPAREN] = ACTIONS(754),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [sym_statement_block] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(758),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
    [sym_statement] = STATE(310),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [245] = {
    [sym_statement] = STATE(310),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_statement_terminator] = STATE(311),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(766),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(614),
    [sym_number] = ACTIONS(614),
    [sym_comment] = ACTIONS(46),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(768),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [sym_user_variable] = STATE(313),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(774),
    [sym_string] = ACTIONS(770),
    [sym_number] = ACTIONS(772),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(772),
  },
  [249] = {
    [sym_type_literal] = STATE(171),
    [aux_sym_catch_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(779),
    [sym_comment] = ACTIONS(52),
  },
  [250] = {
    [anon_sym_COMMA] = ACTIONS(781),
    [anon_sym_RBRACK] = ACTIONS(781),
    [sym_comment] = ACTIONS(52),
  },
  [251] = {
    [anon_sym_RBRACK] = ACTIONS(783),
    [sym_comment] = ACTIONS(52),
  },
  [252] = {
    [aux_sym_array_declaration_repeat1] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(785),
    [sym_comment] = ACTIONS(52),
  },
  [253] = {
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(787),
    [anon_sym_LBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(52),
  },
  [254] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(317),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(789),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [255] = {
    [anon_sym_RBRACE] = ACTIONS(791),
    [sym_identifier] = ACTIONS(793),
    [sym_comment] = ACTIONS(52),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(799),
    [sym_string] = ACTIONS(795),
    [sym_number] = ACTIONS(797),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(797),
  },
  [257] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(257),
    [anon_sym_RBRACE] = ACTIONS(801),
    [sym_identifier] = ACTIONS(803),
    [sym_comment] = ACTIONS(52),
  },
  [258] = {
    [anon_sym_RBRACK] = ACTIONS(806),
    [sym_comment] = ACTIONS(52),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_EQ] = ACTIONS(810),
    [sym_comment] = ACTIONS(52),
  },
  [260] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(814),
    [sym_comment] = ACTIONS(52),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(816),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(818),
    [sym_comment] = ACTIONS(52),
  },
  [262] = {
    [anon_sym_LBRACE] = ACTIONS(693),
    [sym_comment] = ACTIONS(52),
  },
  [263] = {
    [sym_statement_block] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [264] = {
    [sym_statement_block] = STATE(323),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(824),
    [sym_string] = ACTIONS(820),
    [sym_number] = ACTIONS(822),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(822),
  },
  [266] = {
    [ts_builtin_sym_end] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(830),
    [sym_string] = ACTIONS(826),
    [sym_number] = ACTIONS(828),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(828),
  },
  [267] = {
    [sym_elseif] = STATE(265),
    [sym_else] = STATE(324),
    [aux_sym_if_repeat1] = STATE(325),
    [ts_builtin_sym_end] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(706),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(708),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(830),
    [sym_string] = ACTIONS(826),
    [sym_number] = ACTIONS(828),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(828),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(492),
    [sym_string] = ACTIONS(488),
    [sym_number] = ACTIONS(490),
    [sym_comment] = ACTIONS(52),
  },
  [269] = {
    [sym_statement_block] = STATE(326),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [270] = {
    [sym_statement_block] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [271] = {
    [sym_boolean_value] = STATE(328),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(560),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(564),
    [sym_string] = ACTIONS(560),
    [sym_number] = ACTIONS(562),
    [sym_comment] = ACTIONS(52),
  },
  [273] = {
    [sym_statement_block] = STATE(329),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [274] = {
    [sym_statement] = STATE(331),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_statement_terminator] = STATE(332),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(832),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(614),
    [sym_number] = ACTIONS(614),
    [sym_comment] = ACTIONS(46),
  },
  [275] = {
    [sym_statement] = STATE(333),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(834),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [276] = {
    [sym_user_variable] = STATE(334),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [277] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(836),
    [sym_comment] = ACTIONS(52),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(622),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(626),
    [sym_string] = ACTIONS(622),
    [sym_number] = ACTIONS(624),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [sym_type_literal] = STATE(171),
    [sym_statement_block] = STATE(336),
    [aux_sym_catch_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(628),
    [anon_sym_RBRACE] = ACTIONS(628),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(630),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(632),
    [sym_string] = ACTIONS(628),
    [sym_number] = ACTIONS(630),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(634),
    [anon_sym_RBRACE] = ACTIONS(634),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(638),
    [sym_string] = ACTIONS(634),
    [sym_number] = ACTIONS(636),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [sym_catch] = STATE(208),
    [aux_sym_try_repeat1] = STATE(282),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(838),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(640),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_string] = ACTIONS(640),
    [sym_number] = ACTIONS(642),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [anon_sym_RPAREN] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(659),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(659),
    [sym_number] = ACTIONS(661),
    [sym_comment] = ACTIONS(52),
  },
  [284] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(257),
    [anon_sym_RBRACE] = ACTIONS(841),
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(679),
    [sym_string] = ACTIONS(675),
    [sym_number] = ACTIONS(677),
    [sym_comment] = ACTIONS(52),
  },
  [286] = {
    [ts_builtin_sym_end] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(847),
    [sym_string] = ACTIONS(843),
    [sym_number] = ACTIONS(845),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(845),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(492),
    [sym_string] = ACTIONS(492),
    [sym_number] = ACTIONS(492),
    [sym_comment] = ACTIONS(46),
  },
  [288] = {
    [sym_statement_block] = STATE(338),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [sym_statement_block] = STATE(339),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [290] = {
    [sym_boolean_value] = STATE(340),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(564),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(564),
    [sym_string] = ACTIONS(564),
    [sym_number] = ACTIONS(564),
    [sym_comment] = ACTIONS(46),
  },
  [292] = {
    [sym_statement_block] = STATE(341),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [293] = {
    [sym_statement] = STATE(343),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_statement_terminator] = STATE(344),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(849),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(614),
    [sym_number] = ACTIONS(614),
    [sym_comment] = ACTIONS(46),
  },
  [294] = {
    [sym_statement] = STATE(345),
    [sym_function_definition] = STATE(96),
    [sym_if] = STATE(96),
    [sym_while] = STATE(96),
    [sym_do] = STATE(96),
    [sym_for] = STATE(96),
    [sym_foreach] = STATE(96),
    [sym_try] = STATE(96),
    [sym_trap] = STATE(96),
    [sym_data] = STATE(96),
    [sym_flow_control_statement] = STATE(96),
    [sym_flow_break_continue] = STATE(91),
    [sym_switch] = STATE(96),
    [sym_boolean_value] = STATE(96),
    [sym_user_variable] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(851),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(206),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [295] = {
    [sym_user_variable] = STATE(346),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(853),
    [sym_comment] = ACTIONS(52),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(510),
    [sym_string] = ACTIONS(510),
    [sym_number] = ACTIONS(510),
    [sym_comment] = ACTIONS(46),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [anon_sym_SEMI] = ACTIONS(626),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(626),
    [sym_string] = ACTIONS(626),
    [sym_number] = ACTIONS(626),
    [sym_comment] = ACTIONS(46),
  },
  [299] = {
    [sym_type_literal] = STATE(171),
    [sym_statement_block] = STATE(348),
    [aux_sym_catch_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(632),
    [anon_sym_SEMI] = ACTIONS(632),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(632),
    [sym_string] = ACTIONS(632),
    [sym_number] = ACTIONS(632),
    [sym_comment] = ACTIONS(46),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(638),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(638),
    [sym_string] = ACTIONS(638),
    [sym_number] = ACTIONS(638),
    [sym_comment] = ACTIONS(46),
  },
  [302] = {
    [sym_catch] = STATE(230),
    [aux_sym_try_repeat1] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(855),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(647),
    [anon_sym_SEMI] = ACTIONS(647),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_string] = ACTIONS(647),
    [sym_number] = ACTIONS(647),
    [sym_comment] = ACTIONS(46),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(663),
    [sym_number] = ACTIONS(663),
    [sym_comment] = ACTIONS(46),
  },
  [304] = {
    [sym_switch_clause] = STATE(183),
    [sym_switch_clause_condition] = STATE(184),
    [aux_sym_switch_body_repeat1] = STATE(257),
    [anon_sym_RBRACE] = ACTIONS(858),
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [305] = {
    [anon_sym_RPAREN] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(679),
    [anon_sym_SEMI] = ACTIONS(679),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(679),
    [sym_string] = ACTIONS(679),
    [sym_number] = ACTIONS(679),
    [sym_comment] = ACTIONS(46),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(864),
    [sym_string] = ACTIONS(860),
    [sym_number] = ACTIONS(862),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(862),
  },
  [307] = {
    [sym_boolean_value] = STATE(350),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
    [sym_catch] = STATE(208),
    [sym_finally] = STATE(209),
    [aux_sym_try_repeat1] = STATE(351),
    [anon_sym_RPAREN] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [sym_comment] = ACTIONS(52),
  },
  [309] = {
    [sym_statement_block] = STATE(352),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [310] = {
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym_comment] = ACTIONS(52),
  },
  [311] = {
    [sym_statement] = STATE(354),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(866),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [312] = {
    [sym_statement_block] = STATE(355),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(868),
    [sym_comment] = ACTIONS(52),
  },
  [314] = {
    [anon_sym_RBRACK] = ACTIONS(870),
    [sym_comment] = ACTIONS(52),
  },
  [315] = {
    [aux_sym_array_declaration_repeat1] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(872),
    [anon_sym_RBRACK] = ACTIONS(875),
    [sym_comment] = ACTIONS(52),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(354),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(52),
  },
  [317] = {
    [sym_statement] = STATE(78),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [aux_sym_script_block_repeat1] = STATE(145),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(877),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [318] = {
    [sym_identifier] = ACTIONS(879),
    [sym_string] = ACTIONS(881),
    [sym_number] = ACTIONS(879),
    [sym_comment] = ACTIONS(52),
  },
  [319] = {
    [sym_attribute_argument] = STATE(359),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(52),
  },
  [320] = {
    [anon_sym_RBRACK] = ACTIONS(883),
    [sym_comment] = ACTIONS(52),
  },
  [321] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(361),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_comment] = ACTIONS(52),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(891),
    [sym_string] = ACTIONS(887),
    [sym_number] = ACTIONS(889),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(889),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(897),
    [sym_string] = ACTIONS(893),
    [sym_number] = ACTIONS(895),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(895),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(903),
    [sym_string] = ACTIONS(899),
    [sym_number] = ACTIONS(901),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(901),
  },
  [325] = {
    [sym_elseif] = STATE(265),
    [aux_sym_if_repeat1] = STATE(325),
    [ts_builtin_sym_end] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(907),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(912),
    [sym_string] = ACTIONS(905),
    [sym_number] = ACTIONS(910),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(910),
  },
  [326] = {
    [sym_elseif] = STATE(364),
    [sym_else] = STATE(365),
    [aux_sym_if_repeat1] = STATE(366),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(916),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(710),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(704),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(710),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(712),
    [sym_string] = ACTIONS(704),
    [sym_number] = ACTIONS(710),
    [sym_comment] = ACTIONS(52),
  },
  [327] = {
    [anon_sym_RPAREN] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(714),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(718),
    [sym_string] = ACTIONS(714),
    [sym_number] = ACTIONS(716),
    [sym_comment] = ACTIONS(52),
  },
  [328] = {
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(52),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(752),
    [sym_string] = ACTIONS(748),
    [sym_number] = ACTIONS(750),
    [sym_comment] = ACTIONS(52),
  },
  [330] = {
    [sym_statement_block] = STATE(368),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [331] = {
    [anon_sym_RPAREN] = ACTIONS(920),
    [sym_comment] = ACTIONS(52),
  },
  [332] = {
    [sym_statement] = STATE(370),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(920),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [333] = {
    [sym_statement] = STATE(370),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_statement_terminator] = STATE(371),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(922),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(614),
    [sym_number] = ACTIONS(614),
    [sym_comment] = ACTIONS(46),
  },
  [334] = {
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(52),
  },
  [335] = {
    [sym_user_variable] = STATE(373),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [336] = {
    [anon_sym_RPAREN] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [anon_sym_RBRACE] = ACTIONS(770),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(774),
    [sym_string] = ACTIONS(770),
    [sym_number] = ACTIONS(772),
    [sym_comment] = ACTIONS(52),
  },
  [337] = {
    [anon_sym_RPAREN] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(795),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(799),
    [sym_string] = ACTIONS(795),
    [sym_number] = ACTIONS(797),
    [sym_comment] = ACTIONS(52),
  },
  [338] = {
    [sym_elseif] = STATE(376),
    [sym_else] = STATE(377),
    [aux_sym_if_repeat1] = STATE(378),
    [anon_sym_RPAREN] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(926),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(928),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(712),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_number] = ACTIONS(712),
    [sym_comment] = ACTIONS(46),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(718),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(718),
    [sym_string] = ACTIONS(718),
    [sym_number] = ACTIONS(718),
    [sym_comment] = ACTIONS(46),
  },
  [340] = {
    [anon_sym_RPAREN] = ACTIONS(930),
    [sym_comment] = ACTIONS(52),
  },
  [341] = {
    [anon_sym_RPAREN] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(752),
    [anon_sym_SEMI] = ACTIONS(752),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(752),
    [sym_string] = ACTIONS(752),
    [sym_number] = ACTIONS(752),
    [sym_comment] = ACTIONS(46),
  },
  [342] = {
    [sym_statement_block] = STATE(380),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [343] = {
    [anon_sym_RPAREN] = ACTIONS(932),
    [sym_comment] = ACTIONS(52),
  },
  [344] = {
    [sym_statement] = STATE(382),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [345] = {
    [sym_statement] = STATE(382),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_statement_terminator] = STATE(383),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(934),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(406),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(612),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(614),
    [sym_number] = ACTIONS(614),
    [sym_comment] = ACTIONS(46),
  },
  [346] = {
    [anon_sym_RPAREN] = ACTIONS(936),
    [sym_comment] = ACTIONS(52),
  },
  [347] = {
    [sym_user_variable] = STATE(385),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(52),
  },
  [348] = {
    [anon_sym_RPAREN] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(774),
    [anon_sym_SEMI] = ACTIONS(774),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(774),
    [sym_string] = ACTIONS(774),
    [sym_number] = ACTIONS(774),
    [sym_comment] = ACTIONS(46),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(799),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(799),
    [sym_string] = ACTIONS(799),
    [sym_number] = ACTIONS(799),
    [sym_comment] = ACTIONS(46),
  },
  [350] = {
    [anon_sym_RPAREN] = ACTIONS(938),
    [sym_comment] = ACTIONS(52),
  },
  [351] = {
    [sym_catch] = STATE(208),
    [sym_finally] = STATE(281),
    [aux_sym_try_repeat1] = STATE(387),
    [anon_sym_RPAREN] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [sym_comment] = ACTIONS(52),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(944),
    [sym_string] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(942),
  },
  [353] = {
    [sym_statement_block] = STATE(388),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [354] = {
    [anon_sym_RPAREN] = ACTIONS(946),
    [sym_comment] = ACTIONS(52),
  },
  [355] = {
    [ts_builtin_sym_end] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(950),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(950),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(952),
    [sym_string] = ACTIONS(948),
    [sym_number] = ACTIONS(950),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(950),
  },
  [356] = {
    [sym_statement_block] = STATE(390),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [357] = {
    [anon_sym_RBRACE] = ACTIONS(506),
    [sym_identifier] = ACTIONS(508),
    [sym_comment] = ACTIONS(52),
  },
  [358] = {
    [anon_sym_COMMA] = ACTIONS(954),
    [anon_sym_RPAREN] = ACTIONS(954),
    [sym_comment] = ACTIONS(52),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(956),
    [anon_sym_RPAREN] = ACTIONS(956),
    [sym_comment] = ACTIONS(52),
  },
  [360] = {
    [anon_sym_RBRACK] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [361] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(361),
    [anon_sym_COMMA] = ACTIONS(960),
    [anon_sym_RPAREN] = ACTIONS(956),
    [sym_comment] = ACTIONS(52),
  },
  [362] = {
    [sym_statement_block] = STATE(391),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [363] = {
    [sym_statement_block] = STATE(392),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [364] = {
    [anon_sym_RPAREN] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(820),
    [anon_sym_RBRACE] = ACTIONS(820),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(824),
    [sym_string] = ACTIONS(820),
    [sym_number] = ACTIONS(822),
    [sym_comment] = ACTIONS(52),
  },
  [365] = {
    [anon_sym_RPAREN] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [anon_sym_RBRACE] = ACTIONS(826),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(830),
    [sym_string] = ACTIONS(826),
    [sym_number] = ACTIONS(828),
    [sym_comment] = ACTIONS(52),
  },
  [366] = {
    [sym_elseif] = STATE(364),
    [sym_else] = STATE(393),
    [aux_sym_if_repeat1] = STATE(394),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(916),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(826),
    [anon_sym_RBRACE] = ACTIONS(826),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(828),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(830),
    [sym_string] = ACTIONS(826),
    [sym_number] = ACTIONS(828),
    [sym_comment] = ACTIONS(52),
  },
  [367] = {
    [anon_sym_RPAREN] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(843),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(847),
    [sym_string] = ACTIONS(843),
    [sym_number] = ACTIONS(845),
    [sym_comment] = ACTIONS(52),
  },
  [368] = {
    [anon_sym_RPAREN] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [anon_sym_RBRACE] = ACTIONS(860),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(864),
    [sym_string] = ACTIONS(860),
    [sym_number] = ACTIONS(862),
    [sym_comment] = ACTIONS(52),
  },
  [369] = {
    [sym_statement_block] = STATE(395),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [370] = {
    [anon_sym_RPAREN] = ACTIONS(963),
    [sym_comment] = ACTIONS(52),
  },
  [371] = {
    [sym_statement] = STATE(397),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(963),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [372] = {
    [sym_statement_block] = STATE(398),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [373] = {
    [anon_sym_RPAREN] = ACTIONS(965),
    [sym_comment] = ACTIONS(52),
  },
  [374] = {
    [sym_statement_block] = STATE(400),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [375] = {
    [sym_statement_block] = STATE(401),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [376] = {
    [anon_sym_RPAREN] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(824),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(824),
    [sym_string] = ACTIONS(824),
    [sym_number] = ACTIONS(824),
    [sym_comment] = ACTIONS(46),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(830),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(830),
    [sym_string] = ACTIONS(830),
    [sym_number] = ACTIONS(830),
    [sym_comment] = ACTIONS(46),
  },
  [378] = {
    [sym_elseif] = STATE(376),
    [sym_else] = STATE(402),
    [aux_sym_if_repeat1] = STATE(403),
    [anon_sym_RPAREN] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(926),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(928),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(830),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(830),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(830),
    [sym_string] = ACTIONS(830),
    [sym_number] = ACTIONS(830),
    [sym_comment] = ACTIONS(46),
  },
  [379] = {
    [anon_sym_RPAREN] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(847),
    [anon_sym_SEMI] = ACTIONS(847),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(847),
    [sym_string] = ACTIONS(847),
    [sym_number] = ACTIONS(847),
    [sym_comment] = ACTIONS(46),
  },
  [380] = {
    [anon_sym_RPAREN] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(864),
    [anon_sym_SEMI] = ACTIONS(864),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(864),
    [sym_string] = ACTIONS(864),
    [sym_number] = ACTIONS(864),
    [sym_comment] = ACTIONS(46),
  },
  [381] = {
    [sym_statement_block] = STATE(404),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [382] = {
    [anon_sym_RPAREN] = ACTIONS(967),
    [sym_comment] = ACTIONS(52),
  },
  [383] = {
    [sym_statement] = STATE(406),
    [sym_function_definition] = STATE(77),
    [sym_if] = STATE(77),
    [sym_while] = STATE(77),
    [sym_do] = STATE(77),
    [sym_for] = STATE(77),
    [sym_foreach] = STATE(77),
    [sym_try] = STATE(77),
    [sym_trap] = STATE(77),
    [sym_data] = STATE(77),
    [sym_flow_control_statement] = STATE(77),
    [sym_flow_break_continue] = STATE(73),
    [sym_switch] = STATE(77),
    [sym_boolean_value] = STATE(77),
    [sym_user_variable] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(967),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(170),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [384] = {
    [sym_statement_block] = STATE(407),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [385] = {
    [anon_sym_RPAREN] = ACTIONS(969),
    [sym_comment] = ACTIONS(52),
  },
  [386] = {
    [sym_statement_block] = STATE(409),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [387] = {
    [sym_catch] = STATE(208),
    [aux_sym_try_repeat1] = STATE(387),
    [anon_sym_RPAREN] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(838),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(640),
    [sym_comment] = ACTIONS(52),
  },
  [388] = {
    [ts_builtin_sym_end] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(975),
    [sym_string] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(973),
  },
  [389] = {
    [sym_statement_block] = STATE(410),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(979),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(979),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(981),
    [sym_string] = ACTIONS(977),
    [sym_number] = ACTIONS(979),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(979),
  },
  [391] = {
    [anon_sym_RPAREN] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(887),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(887),
    [anon_sym_RBRACE] = ACTIONS(887),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(891),
    [sym_string] = ACTIONS(887),
    [sym_number] = ACTIONS(889),
    [sym_comment] = ACTIONS(52),
  },
  [392] = {
    [anon_sym_RPAREN] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(893),
    [anon_sym_RBRACE] = ACTIONS(893),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(897),
    [sym_string] = ACTIONS(893),
    [sym_number] = ACTIONS(895),
    [sym_comment] = ACTIONS(52),
  },
  [393] = {
    [anon_sym_RPAREN] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [anon_sym_RBRACE] = ACTIONS(899),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(903),
    [sym_string] = ACTIONS(899),
    [sym_number] = ACTIONS(901),
    [sym_comment] = ACTIONS(52),
  },
  [394] = {
    [sym_elseif] = STATE(364),
    [aux_sym_if_repeat1] = STATE(394),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(983),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(905),
    [anon_sym_RBRACE] = ACTIONS(905),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(912),
    [sym_string] = ACTIONS(905),
    [sym_number] = ACTIONS(910),
    [sym_comment] = ACTIONS(52),
  },
  [395] = {
    [anon_sym_RPAREN] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [anon_sym_RBRACE] = ACTIONS(940),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(944),
    [sym_string] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [sym_comment] = ACTIONS(52),
  },
  [396] = {
    [sym_statement_block] = STATE(411),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [397] = {
    [anon_sym_RPAREN] = ACTIONS(986),
    [sym_comment] = ACTIONS(52),
  },
  [398] = {
    [anon_sym_RPAREN] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(950),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(948),
    [anon_sym_RBRACE] = ACTIONS(948),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(950),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(952),
    [sym_string] = ACTIONS(948),
    [sym_number] = ACTIONS(950),
    [sym_comment] = ACTIONS(52),
  },
  [399] = {
    [sym_statement_block] = STATE(413),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [400] = {
    [anon_sym_RPAREN] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(891),
    [anon_sym_SEMI] = ACTIONS(891),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(891),
    [sym_string] = ACTIONS(891),
    [sym_number] = ACTIONS(891),
    [sym_comment] = ACTIONS(46),
  },
  [401] = {
    [anon_sym_RPAREN] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(897),
    [anon_sym_SEMI] = ACTIONS(897),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(897),
    [sym_string] = ACTIONS(897),
    [sym_number] = ACTIONS(897),
    [sym_comment] = ACTIONS(46),
  },
  [402] = {
    [anon_sym_RPAREN] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(903),
    [anon_sym_SEMI] = ACTIONS(903),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(903),
    [sym_string] = ACTIONS(903),
    [sym_number] = ACTIONS(903),
    [sym_comment] = ACTIONS(46),
  },
  [403] = {
    [sym_elseif] = STATE(376),
    [aux_sym_if_repeat1] = STATE(403),
    [anon_sym_RPAREN] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(988),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(912),
    [anon_sym_SEMI] = ACTIONS(912),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(912),
    [sym_string] = ACTIONS(912),
    [sym_number] = ACTIONS(912),
    [sym_comment] = ACTIONS(46),
  },
  [404] = {
    [anon_sym_RPAREN] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(944),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(944),
    [sym_string] = ACTIONS(944),
    [sym_number] = ACTIONS(944),
    [sym_comment] = ACTIONS(46),
  },
  [405] = {
    [sym_statement_block] = STATE(414),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [406] = {
    [anon_sym_RPAREN] = ACTIONS(991),
    [sym_comment] = ACTIONS(52),
  },
  [407] = {
    [anon_sym_RPAREN] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(952),
    [anon_sym_SEMI] = ACTIONS(952),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(952),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(952),
    [sym_string] = ACTIONS(952),
    [sym_number] = ACTIONS(952),
    [sym_comment] = ACTIONS(46),
  },
  [408] = {
    [sym_statement_block] = STATE(416),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [409] = {
    [sym_elseif] = STATE(364),
    [sym_else] = STATE(365),
    [aux_sym_if_repeat1] = STATE(417),
    [anon_sym_RPAREN] = ACTIONS(704),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(916),
    [sym_comment] = ACTIONS(52),
  },
  [410] = {
    [ts_builtin_sym_end] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(995),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(995),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(997),
    [sym_string] = ACTIONS(993),
    [sym_number] = ACTIONS(995),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(995),
  },
  [411] = {
    [anon_sym_RPAREN] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(971),
    [anon_sym_RBRACE] = ACTIONS(971),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(975),
    [sym_string] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [sym_comment] = ACTIONS(52),
  },
  [412] = {
    [sym_statement_block] = STATE(418),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [413] = {
    [anon_sym_RPAREN] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(979),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(977),
    [anon_sym_RBRACE] = ACTIONS(977),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(979),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(981),
    [sym_string] = ACTIONS(977),
    [sym_number] = ACTIONS(979),
    [sym_comment] = ACTIONS(52),
  },
  [414] = {
    [anon_sym_RPAREN] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(975),
    [anon_sym_SEMI] = ACTIONS(975),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(975),
    [sym_string] = ACTIONS(975),
    [sym_number] = ACTIONS(975),
    [sym_comment] = ACTIONS(46),
  },
  [415] = {
    [sym_statement_block] = STATE(419),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [416] = {
    [anon_sym_RPAREN] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(981),
    [anon_sym_SEMI] = ACTIONS(981),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(981),
    [sym_string] = ACTIONS(981),
    [sym_number] = ACTIONS(981),
    [sym_comment] = ACTIONS(46),
  },
  [417] = {
    [sym_elseif] = STATE(364),
    [sym_else] = STATE(393),
    [aux_sym_if_repeat1] = STATE(420),
    [anon_sym_RPAREN] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(916),
    [sym_comment] = ACTIONS(52),
  },
  [418] = {
    [anon_sym_RPAREN] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(995),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(993),
    [anon_sym_RBRACE] = ACTIONS(993),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(995),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(997),
    [sym_string] = ACTIONS(993),
    [sym_number] = ACTIONS(995),
    [sym_comment] = ACTIONS(52),
  },
  [419] = {
    [anon_sym_RPAREN] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(997),
    [anon_sym_SEMI] = ACTIONS(997),
    [aux_sym_SLASH_BSLASHr_PIPE_BSLASHr_BSLASHn_BSLASH_PIPE_BSLASHr_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(997),
    [sym_string] = ACTIONS(997),
    [sym_number] = ACTIONS(997),
    [sym_comment] = ACTIONS(46),
  },
  [420] = {
    [sym_elseif] = STATE(364),
    [aux_sym_if_repeat1] = STATE(420),
    [anon_sym_RPAREN] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(983),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(910),
    [sym_comment] = ACTIONS(52),
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
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 2),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 2),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2),
  [260] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(3),
  [263] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [266] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(5),
  [269] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(6),
  [272] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(7),
  [275] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(8),
  [278] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(9),
  [281] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(10),
  [284] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(11),
  [287] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(12),
  [290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(13),
  [293] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(14),
  [296] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(15),
  [299] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(16),
  [302] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(17),
  [305] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(17),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 3),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 3),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 3),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 3),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_parameter, 2),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 3),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2),
  [462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(44),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [481] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(52),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 4),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [512] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(64),
  [515] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(65),
  [518] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(66),
  [521] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(67),
  [524] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(68),
  [527] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(69),
  [530] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(70),
  [533] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(71),
  [536] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(72),
  [539] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(73),
  [542] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(74),
  [545] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(75),
  [548] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(61),
  [551] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(53),
  [554] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(77),
  [557] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(77),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_terminator, 1),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_terminator, 1),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(239),
  [588] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [610] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [614] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 1),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(103),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_condition, 3),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 2),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause_condition, 1),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 4),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [699] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(119),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [726] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [740] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [766] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [776] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2), SHIFT_REPEAT(37),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 2),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 4),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause, 2),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_clause, 2),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 3),
  [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [803] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(182),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [824] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [830] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [832] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(330),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [838] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(206),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(342),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [855] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(228),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 3),
  [872] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(250),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [903] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [907] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(263),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [922] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(369),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [926] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(374),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(375),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [934] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [952] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [960] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(319),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [975] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [981] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [983] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(362),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [988] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(374),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [997] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
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
