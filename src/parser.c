#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 315
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
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
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_statement_terminator = 10,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 12,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH = 13,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 14,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 16,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 17,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH = 22,
  anon_sym_DASH = 23,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 26,
  aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH = 27,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH = 28,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH = 29,
  anon_sym_COLON = 30,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 31,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH = 32,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH = 33,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH = 34,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 35,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 36,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 37,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH = 38,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH = 39,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 40,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 41,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 42,
  sym_identifier = 43,
  sym_string = 44,
  sym_number = 45,
  sym_comment = 46,
  sym_signature_block = 47,
  sym_script = 48,
  sym_script_block = 49,
  sym_param_block = 50,
  sym_parameter_list = 51,
  sym_parameter_declaration = 52,
  sym_attribute = 53,
  sym_array_declaration = 54,
  sym_attribute_arguments = 55,
  sym_attribute_argument = 56,
  sym_statement_block = 57,
  sym_statement_list = 58,
  sym_statement = 59,
  sym_pipeline = 60,
  sym_function_definition = 61,
  sym_if = 62,
  sym_elseif = 63,
  sym_else = 64,
  sym_while = 65,
  sym_do = 66,
  sym_for = 67,
  sym_foreach = 68,
  sym_foreach_parameter = 69,
  sym_try = 70,
  sym_catch = 71,
  sym_finally = 72,
  sym_trap = 73,
  sym_data = 74,
  sym_labeled_statement = 75,
  sym_label = 76,
  sym_flow_control_statement = 77,
  sym_flow_break_continue = 78,
  sym_switch = 79,
  sym_switch_parameter = 80,
  sym_switch_condition = 81,
  sym_switch_body = 82,
  sym_switch_clause = 83,
  sym_switch_clause_condition = 84,
  sym_type_literal = 85,
  sym_boolean_value = 86,
  sym_user_variable = 87,
  aux_sym_parameter_list_repeat1 = 88,
  aux_sym_parameter_declaration_repeat1 = 89,
  aux_sym_array_declaration_repeat1 = 90,
  aux_sym_attribute_arguments_repeat1 = 91,
  aux_sym_statement_list_repeat1 = 92,
  aux_sym_if_repeat1 = 93,
  aux_sym_try_repeat1 = 94,
  aux_sym_catch_repeat1 = 95,
  aux_sym_switch_repeat1 = 96,
  aux_sym_switch_body_repeat1 = 97,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_statement_terminator] = "statement_terminator",
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[fF][uU][nN][cC][tT][iI][oO][nN]/",
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[fF][iI][lL][tT][eE][rR]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = "/[wW][oO][rR][kK][fF][lL][oO][wW]/",
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
  [anon_sym_COLON] = ":",
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
  [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = "/$([tT][rR][uU][eE]|[fF][aA][lL][sS][eE])/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = "/\\$[a-zA-Z]\\w*/",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_signature_block] = "signature_block",
  [sym_script] = "script",
  [sym_script_block] = "script_block",
  [sym_param_block] = "param_block",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_attribute] = "attribute",
  [sym_array_declaration] = "array_declaration",
  [sym_attribute_arguments] = "attribute_arguments",
  [sym_attribute_argument] = "attribute_argument",
  [sym_statement_block] = "statement_block",
  [sym_statement_list] = "statement_list",
  [sym_statement] = "statement",
  [sym_pipeline] = "pipeline",
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
  [sym_labeled_statement] = "labeled_statement",
  [sym_label] = "label",
  [sym_flow_control_statement] = "flow_control_statement",
  [sym_flow_break_continue] = "flow_break_continue",
  [sym_switch] = "switch",
  [sym_switch_parameter] = "switch_parameter",
  [sym_switch_condition] = "switch_condition",
  [sym_switch_body] = "switch_body",
  [sym_switch_clause] = "switch_clause",
  [sym_switch_clause_condition] = "switch_clause_condition",
  [sym_type_literal] = "type_literal",
  [sym_boolean_value] = "boolean_value",
  [sym_user_variable] = "user_variable",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_array_declaration_repeat1] = "array_declaration_repeat1",
  [aux_sym_attribute_arguments_repeat1] = "attribute_arguments_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_statement_terminator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = {
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
  [anon_sym_COLON] = {
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
  [sym_script_block] = {
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
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
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
  [sym_labeled_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
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
  [sym_type_literal] = {
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
  [aux_sym_statement_list_repeat1] = {
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(47);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_statement_terminator);
      END_STATE();
    case 36:
      if (lookahead == '#')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#')
        ADVANCE(38);
      if (lookahead == '>')
        ADVANCE(39);
      if (lookahead == '?')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
        ADVANCE(52);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
        ADVANCE(52);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
        ADVANCE(52);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
        ADVANCE(52);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(109);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(113);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 125:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(143);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 144:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 148:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(154);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(160);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 167:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 180:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 186:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(187);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(191);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(192);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(194);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(196);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(200);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 207:
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
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      END_STATE();
    case 208:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 209:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(154);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(160);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(150);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 222:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(47);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
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
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 224:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(225);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 226:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(227);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(226);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 227:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(233);
      END_STATE();
    case 228:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 233:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(231);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(236);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 241:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(196);
      END_STATE();
    case 242:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      END_STATE();
    case 243:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(244);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(257);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(270);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      END_STATE();
    case 244:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 257:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 262:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 275:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 283:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 284:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 285:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 287:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 288:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 289:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(236);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(291);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(145);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 296:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(47);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(296);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 297:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(297);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(286);
      END_STATE();
    case 299:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 300:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 301:
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
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 125},
  [2] = {.lex_state = 207},
  [3] = {.lex_state = 208},
  [4] = {.lex_state = 207},
  [5] = {.lex_state = 207},
  [6] = {.lex_state = 207},
  [7] = {.lex_state = 207},
  [8] = {.lex_state = 207},
  [9] = {.lex_state = 207},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 208},
  [12] = {.lex_state = 208},
  [13] = {.lex_state = 209},
  [14] = {.lex_state = 222},
  [15] = {.lex_state = 207},
  [16] = {.lex_state = 209},
  [17] = {.lex_state = 209},
  [18] = {.lex_state = 209},
  [19] = {.lex_state = 207},
  [20] = {.lex_state = 207},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 223},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 209},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 125},
  [27] = {.lex_state = 224},
  [28] = {.lex_state = 223},
  [29] = {.lex_state = 207},
  [30] = {.lex_state = 226},
  [31] = {.lex_state = 226},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 235},
  [34] = {.lex_state = 242},
  [35] = {.lex_state = 224},
  [36] = {.lex_state = 243},
  [37] = {.lex_state = 207},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 209},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 209},
  [42] = {.lex_state = 207},
  [43] = {.lex_state = 207},
  [44] = {.lex_state = 209},
  [45] = {.lex_state = 223},
  [46] = {.lex_state = 209},
  [47] = {.lex_state = 226},
  [48] = {.lex_state = 243},
  [49] = {.lex_state = 207},
  [50] = {.lex_state = 207},
  [51] = {.lex_state = 207},
  [52] = {.lex_state = 207},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 125},
  [55] = {.lex_state = 209},
  [56] = {.lex_state = 125},
  [57] = {.lex_state = 283},
  [58] = {.lex_state = 208},
  [59] = {.lex_state = 284},
  [60] = {.lex_state = 207},
  [61] = {.lex_state = 224},
  [62] = {.lex_state = 207},
  [63] = {.lex_state = 224},
  [64] = {.lex_state = 287},
  [65] = {.lex_state = 207},
  [66] = {.lex_state = 288},
  [67] = {.lex_state = 207},
  [68] = {.lex_state = 207},
  [69] = {.lex_state = 289},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 207},
  [72] = {.lex_state = 207},
  [73] = {.lex_state = 207},
  [74] = {.lex_state = 207},
  [75] = {.lex_state = 207},
  [76] = {.lex_state = 207},
  [77] = {.lex_state = 207},
  [78] = {.lex_state = 208},
  [79] = {.lex_state = 223},
  [80] = {.lex_state = 296},
  [81] = {.lex_state = 207},
  [82] = {.lex_state = 223},
  [83] = {.lex_state = 207},
  [84] = {.lex_state = 223},
  [85] = {.lex_state = 223},
  [86] = {.lex_state = 223},
  [87] = {.lex_state = 207},
  [88] = {.lex_state = 207},
  [89] = {.lex_state = 242},
  [90] = {.lex_state = 242},
  [91] = {.lex_state = 297},
  [92] = {.lex_state = 207},
  [93] = {.lex_state = 224},
  [94] = {.lex_state = 299},
  [95] = {.lex_state = 207},
  [96] = {.lex_state = 207},
  [97] = {.lex_state = 207},
  [98] = {.lex_state = 209},
  [99] = {.lex_state = 209},
  [100] = {.lex_state = 209},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 209},
  [103] = {.lex_state = 209},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 207},
  [106] = {.lex_state = 208},
  [107] = {.lex_state = 209},
  [108] = {.lex_state = 207},
  [109] = {.lex_state = 207},
  [110] = {.lex_state = 207},
  [111] = {.lex_state = 224},
  [112] = {.lex_state = 283},
  [113] = {.lex_state = 207},
  [114] = {.lex_state = 207},
  [115] = {.lex_state = 224},
  [116] = {.lex_state = 207},
  [117] = {.lex_state = 223},
  [118] = {.lex_state = 207},
  [119] = {.lex_state = 287},
  [120] = {.lex_state = 207},
  [121] = {.lex_state = 207},
  [122] = {.lex_state = 207},
  [123] = {.lex_state = 226},
  [124] = {.lex_state = 226},
  [125] = {.lex_state = 235},
  [126] = {.lex_state = 242},
  [127] = {.lex_state = 224},
  [128] = {.lex_state = 207},
  [129] = {.lex_state = 223},
  [130] = {.lex_state = 223},
  [131] = {.lex_state = 207},
  [132] = {.lex_state = 207},
  [133] = {.lex_state = 223},
  [134] = {.lex_state = 223},
  [135] = {.lex_state = 207},
  [136] = {.lex_state = 207},
  [137] = {.lex_state = 289},
  [138] = {.lex_state = 223},
  [139] = {.lex_state = 223},
  [140] = {.lex_state = 223},
  [141] = {.lex_state = 226},
  [142] = {.lex_state = 209},
  [143] = {.lex_state = 207},
  [144] = {.lex_state = 242},
  [145] = {.lex_state = 242},
  [146] = {.lex_state = 224},
  [147] = {.lex_state = 297},
  [148] = {.lex_state = 299},
  [149] = {.lex_state = 209},
  [150] = {.lex_state = 207},
  [151] = {.lex_state = 207},
  [152] = {.lex_state = 209},
  [153] = {.lex_state = 209},
  [154] = {.lex_state = 209},
  [155] = {.lex_state = 208},
  [156] = {.lex_state = 207},
  [157] = {.lex_state = 207},
  [158] = {.lex_state = 207},
  [159] = {.lex_state = 209},
  [160] = {.lex_state = 207},
  [161] = {.lex_state = 208},
  [162] = {.lex_state = 207},
  [163] = {.lex_state = 208},
  [164] = {.lex_state = 209},
  [165] = {.lex_state = 208},
  [166] = {.lex_state = 224},
  [167] = {.lex_state = 207},
  [168] = {.lex_state = 207},
  [169] = {.lex_state = 283},
  [170] = {.lex_state = 207},
  [171] = {.lex_state = 209},
  [172] = {.lex_state = 207},
  [173] = {.lex_state = 207},
  [174] = {.lex_state = 300},
  [175] = {.lex_state = 209},
  [176] = {.lex_state = 287},
  [177] = {.lex_state = 207},
  [178] = {.lex_state = 207},
  [179] = {.lex_state = 207},
  [180] = {.lex_state = 207},
  [181] = {.lex_state = 207},
  [182] = {.lex_state = 242},
  [183] = {.lex_state = 297},
  [184] = {.lex_state = 224},
  [185] = {.lex_state = 207},
  [186] = {.lex_state = 207},
  [187] = {.lex_state = 223},
  [188] = {.lex_state = 223},
  [189] = {.lex_state = 223},
  [190] = {.lex_state = 223},
  [191] = {.lex_state = 223},
  [192] = {.lex_state = 208},
  [193] = {.lex_state = 223},
  [194] = {.lex_state = 207},
  [195] = {.lex_state = 207},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 207},
  [198] = {.lex_state = 242},
  [199] = {.lex_state = 242},
  [200] = {.lex_state = 207},
  [201] = {.lex_state = 207},
  [202] = {.lex_state = 224},
  [203] = {.lex_state = 209},
  [204] = {.lex_state = 207},
  [205] = {.lex_state = 207},
  [206] = {.lex_state = 207},
  [207] = {.lex_state = 207},
  [208] = {.lex_state = 207},
  [209] = {.lex_state = 223},
  [210] = {.lex_state = 208},
  [211] = {.lex_state = 209},
  [212] = {.lex_state = 208},
  [213] = {.lex_state = 207},
  [214] = {.lex_state = 207},
  [215] = {.lex_state = 207},
  [216] = {.lex_state = 224},
  [217] = {.lex_state = 209},
  [218] = {.lex_state = 207},
  [219] = {.lex_state = 207},
  [220] = {.lex_state = 300},
  [221] = {.lex_state = 209},
  [222] = {.lex_state = 300},
  [223] = {.lex_state = 207},
  [224] = {.lex_state = 287},
  [225] = {.lex_state = 207},
  [226] = {.lex_state = 207},
  [227] = {.lex_state = 226},
  [228] = {.lex_state = 223},
  [229] = {.lex_state = 207},
  [230] = {.lex_state = 242},
  [231] = {.lex_state = 242},
  [232] = {.lex_state = 224},
  [233] = {.lex_state = 297},
  [234] = {.lex_state = 223},
  [235] = {.lex_state = 207},
  [236] = {.lex_state = 223},
  [237] = {.lex_state = 223},
  [238] = {.lex_state = 223},
  [239] = {.lex_state = 223},
  [240] = {.lex_state = 208},
  [241] = {.lex_state = 223},
  [242] = {.lex_state = 209},
  [243] = {.lex_state = 209},
  [244] = {.lex_state = 207},
  [245] = {.lex_state = 242},
  [246] = {.lex_state = 207},
  [247] = {.lex_state = 207},
  [248] = {.lex_state = 207},
  [249] = {.lex_state = 207},
  [250] = {.lex_state = 207},
  [251] = {.lex_state = 208},
  [252] = {.lex_state = 207},
  [253] = {.lex_state = 226},
  [254] = {.lex_state = 208},
  [255] = {.lex_state = 207},
  [256] = {.lex_state = 207},
  [257] = {.lex_state = 300},
  [258] = {.lex_state = 209},
  [259] = {.lex_state = 209},
  [260] = {.lex_state = 300},
  [261] = {.lex_state = 223},
  [262] = {.lex_state = 207},
  [263] = {.lex_state = 301},
  [264] = {.lex_state = 223},
  [265] = {.lex_state = 207},
  [266] = {.lex_state = 223},
  [267] = {.lex_state = 207},
  [268] = {.lex_state = 242},
  [269] = {.lex_state = 242},
  [270] = {.lex_state = 207},
  [271] = {.lex_state = 207},
  [272] = {.lex_state = 224},
  [273] = {.lex_state = 223},
  [274] = {.lex_state = 223},
  [275] = {.lex_state = 209},
  [276] = {.lex_state = 207},
  [277] = {.lex_state = 207},
  [278] = {.lex_state = 209},
  [279] = {.lex_state = 207},
  [280] = {.lex_state = 208},
  [281] = {.lex_state = 207},
  [282] = {.lex_state = 207},
  [283] = {.lex_state = 207},
  [284] = {.lex_state = 207},
  [285] = {.lex_state = 223},
  [286] = {.lex_state = 207},
  [287] = {.lex_state = 207},
  [288] = {.lex_state = 301},
  [289] = {.lex_state = 223},
  [290] = {.lex_state = 301},
  [291] = {.lex_state = 223},
  [292] = {.lex_state = 223},
  [293] = {.lex_state = 207},
  [294] = {.lex_state = 242},
  [295] = {.lex_state = 207},
  [296] = {.lex_state = 207},
  [297] = {.lex_state = 207},
  [298] = {.lex_state = 209},
  [299] = {.lex_state = 207},
  [300] = {.lex_state = 209},
  [301] = {.lex_state = 301},
  [302] = {.lex_state = 223},
  [303] = {.lex_state = 223},
  [304] = {.lex_state = 301},
  [305] = {.lex_state = 223},
  [306] = {.lex_state = 207},
  [307] = {.lex_state = 207},
  [308] = {.lex_state = 223},
  [309] = {.lex_state = 207},
  [310] = {.lex_state = 209},
  [311] = {.lex_state = 223},
  [312] = {.lex_state = 207},
  [313] = {.lex_state = 223},
  [314] = {.lex_state = 223},
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
    [sym_statement_terminator] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(5),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_signature_block] = ACTIONS(3),
  },
  [1] = {
    [sym_script] = STATE(20),
    [sym_script_block] = STATE(21),
    [sym_param_block] = STATE(22),
    [sym_statement_list] = STATE(23),
    [sym_statement] = STATE(24),
    [sym_function_definition] = STATE(18),
    [sym_if] = STATE(18),
    [sym_while] = STATE(18),
    [sym_do] = STATE(18),
    [sym_for] = STATE(18),
    [sym_foreach] = STATE(18),
    [sym_try] = STATE(18),
    [sym_trap] = STATE(18),
    [sym_data] = STATE(18),
    [sym_labeled_statement] = STATE(18),
    [sym_label] = STATE(25),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(42),
    [sym_string] = ACTIONS(44),
    [sym_number] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(50),
  },
  [2] = {
    [sym_parameter_list] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [3] = {
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(54),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_comment] = ACTIONS(54),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_comment] = ACTIONS(54),
  },
  [6] = {
    [sym_statement_block] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(54),
  },
  [8] = {
    [sym_foreach_parameter] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [sym_statement_block] = STATE(39),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [10] = {
    [sym_statement_block] = STATE(41),
    [sym_type_literal] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [11] = {
    [sym_statement_block] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(54),
  },
  [12] = {
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_statement_terminator] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(82),
    [sym_string] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(80),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_statement_terminator] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(86),
  },
  [15] = {
    [sym_switch_parameter] = STATE(49),
    [sym_switch_condition] = STATE(50),
    [aux_sym_switch_repeat1] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_statement_terminator] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(100),
    [sym_string] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(98),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_statement_terminator] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(104),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_statement_terminator] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_string] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(110),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(54),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(54),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(118),
  },
  [22] = {
    [sym_statement_list] = STATE(53),
    [sym_statement] = STATE(24),
    [sym_function_definition] = STATE(18),
    [sym_if] = STATE(18),
    [sym_while] = STATE(18),
    [sym_do] = STATE(18),
    [sym_for] = STATE(18),
    [sym_foreach] = STATE(18),
    [sym_try] = STATE(18),
    [sym_trap] = STATE(18),
    [sym_data] = STATE(18),
    [sym_labeled_statement] = STATE(18),
    [sym_label] = STATE(25),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(26),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(42),
    [sym_string] = ACTIONS(44),
    [sym_number] = ACTIONS(46),
    [sym_comment] = ACTIONS(54),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(122),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_statement_terminator] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_string] = ACTIONS(124),
    [sym_number] = ACTIONS(128),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(128),
  },
  [25] = {
    [sym_while] = STATE(55),
    [sym_do] = STATE(55),
    [sym_for] = STATE(55),
    [sym_foreach] = STATE(55),
    [sym_switch] = STATE(55),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(54),
  },
  [26] = {
    [sym_statement] = STATE(24),
    [sym_function_definition] = STATE(18),
    [sym_if] = STATE(18),
    [sym_while] = STATE(18),
    [sym_do] = STATE(18),
    [sym_for] = STATE(18),
    [sym_foreach] = STATE(18),
    [sym_try] = STATE(18),
    [sym_trap] = STATE(18),
    [sym_data] = STATE(18),
    [sym_labeled_statement] = STATE(18),
    [sym_label] = STATE(25),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(42),
    [sym_string] = ACTIONS(44),
    [sym_number] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(134),
  },
  [27] = {
    [sym_parameter_declaration] = STATE(60),
    [sym_attribute] = STATE(61),
    [sym_user_variable] = STATE(62),
    [aux_sym_parameter_declaration_repeat1] = STATE(63),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [28] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(146),
    [sym_string] = ACTIONS(142),
    [sym_number] = ACTIONS(144),
    [sym_comment] = ACTIONS(54),
  },
  [29] = {
    [sym_parameter_list] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(148),
    [sym_comment] = ACTIONS(54),
  },
  [30] = {
    [sym_boolean_value] = STATE(67),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [31] = {
    [sym_boolean_value] = STATE(68),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [32] = {
    [sym_statement_list] = STATE(83),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [anon_sym_RBRACE] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [33] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(54),
  },
  [34] = {
    [sym_pipeline] = STATE(89),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [35] = {
    [sym_user_variable] = STATE(91),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [36] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(192),
    [sym_comment] = ACTIONS(54),
  },
  [38] = {
    [sym_statement_list] = STATE(95),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [anon_sym_RBRACE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [39] = {
    [sym_catch] = STATE(98),
    [sym_finally] = STATE(99),
    [aux_sym_try_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_statement_terminator] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(204),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(198),
  },
  [40] = {
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(54),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_statement_terminator] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(212),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(210),
  },
  [42] = {
    [sym_statement_block] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [43] = {
    [sym_statement_block] = STATE(103),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_statement_terminator] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(218),
    [sym_string] = ACTIONS(214),
    [sym_number] = ACTIONS(216),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(216),
  },
  [45] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(220),
    [sym_comment] = ACTIONS(54),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_statement_terminator] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(228),
    [sym_string] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(226),
  },
  [47] = {
    [sym_boolean_value] = STATE(104),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [48] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(54),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [sym_comment] = ACTIONS(54),
  },
  [50] = {
    [sym_switch_body] = STATE(107),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [51] = {
    [sym_switch_parameter] = STATE(49),
    [sym_switch_condition] = STATE(108),
    [aux_sym_switch_repeat1] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_comment] = ACTIONS(54),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(240),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
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
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(244),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_statement_terminator] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(252),
    [sym_string] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(250),
  },
  [56] = {
    [sym_statement] = STATE(24),
    [sym_function_definition] = STATE(18),
    [sym_if] = STATE(18),
    [sym_while] = STATE(18),
    [sym_do] = STATE(18),
    [sym_for] = STATE(18),
    [sym_foreach] = STATE(18),
    [sym_try] = STATE(18),
    [sym_trap] = STATE(18),
    [sym_data] = STATE(18),
    [sym_labeled_statement] = STATE(18),
    [sym_label] = STATE(25),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(296),
    [sym_string] = ACTIONS(299),
    [sym_number] = ACTIONS(302),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(244),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(309),
    [sym_string] = ACTIONS(305),
    [sym_number] = ACTIONS(307),
    [sym_comment] = ACTIONS(54),
  },
  [58] = {
    [sym_identifier] = ACTIONS(311),
    [sym_comment] = ACTIONS(54),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_statement_terminator] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(54),
  },
  [60] = {
    [aux_sym_parameter_list_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(54),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(317),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(319),
    [sym_comment] = ACTIONS(54),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym_comment] = ACTIONS(54),
  },
  [63] = {
    [sym_attribute] = STATE(61),
    [sym_user_variable] = STATE(114),
    [aux_sym_parameter_declaration_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [64] = {
    [sym_script_block] = STATE(116),
    [sym_param_block] = STATE(117),
    [sym_statement_list] = STATE(118),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [65] = {
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(54),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_statement_terminator] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(100),
    [sym_string] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(325),
    [sym_comment] = ACTIONS(54),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(54),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(329),
    [sym_statement_terminator] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(333),
    [sym_string] = ACTIONS(329),
    [sym_number] = ACTIONS(331),
    [sym_comment] = ACTIONS(54),
  },
  [70] = {
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(54),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym_comment] = ACTIONS(54),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(54),
  },
  [73] = {
    [sym_statement_block] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [sym_comment] = ACTIONS(54),
  },
  [75] = {
    [sym_foreach_parameter] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(54),
  },
  [76] = {
    [sym_statement_block] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [77] = {
    [sym_statement_block] = STATE(130),
    [sym_type_literal] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [78] = {
    [sym_statement_block] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(54),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym_statement_terminator] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(82),
    [sym_string] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [sym_comment] = ACTIONS(54),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_statement_terminator] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(88),
    [sym_identifier] = ACTIONS(347),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [81] = {
    [sym_switch_parameter] = STATE(49),
    [sym_switch_condition] = STATE(135),
    [aux_sym_switch_repeat1] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [82] = {
    [anon_sym_RBRACE] = ACTIONS(108),
    [sym_statement_terminator] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(112),
    [sym_string] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [sym_comment] = ACTIONS(54),
  },
  [83] = {
    [anon_sym_RBRACE] = ACTIONS(349),
    [sym_comment] = ACTIONS(54),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(124),
    [sym_statement_terminator] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(130),
    [sym_string] = ACTIONS(124),
    [sym_number] = ACTIONS(128),
    [sym_comment] = ACTIONS(54),
  },
  [85] = {
    [sym_while] = STATE(139),
    [sym_do] = STATE(139),
    [sym_for] = STATE(139),
    [sym_foreach] = STATE(139),
    [sym_switch] = STATE(139),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(54),
  },
  [86] = {
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(140),
    [anon_sym_RBRACE] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [sym_comment] = ACTIONS(54),
  },
  [88] = {
    [sym_statement_block] = STATE(142),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [89] = {
    [sym_pipeline] = STATE(145),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(355),
    [sym_statement_terminator] = ACTIONS(357),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(359),
    [sym_statement_terminator] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_comment] = ACTIONS(54),
  },
  [91] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(365),
    [sym_comment] = ACTIONS(54),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(367),
    [sym_comment] = ACTIONS(54),
  },
  [93] = {
    [sym_user_variable] = STATE(147),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym_statement_terminator] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(333),
    [sym_string] = ACTIONS(329),
    [sym_number] = ACTIONS(331),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(331),
  },
  [95] = {
    [anon_sym_RBRACE] = ACTIONS(369),
    [sym_comment] = ACTIONS(54),
  },
  [96] = {
    [sym_statement_block] = STATE(149),
    [sym_type_literal] = STATE(150),
    [aux_sym_catch_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [97] = {
    [sym_statement_block] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym_statement_terminator] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(373),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(373),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(375),
    [sym_string] = ACTIONS(371),
    [sym_number] = ACTIONS(373),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(373),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_statement_terminator] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(381),
    [sym_string] = ACTIONS(377),
    [sym_number] = ACTIONS(379),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(379),
  },
  [100] = {
    [sym_catch] = STATE(98),
    [sym_finally] = STATE(153),
    [aux_sym_try_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_statement_terminator] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(381),
    [sym_string] = ACTIONS(377),
    [sym_number] = ACTIONS(379),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(379),
  },
  [101] = {
    [sym_array_declaration] = STATE(157),
    [sym_type_literal] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym_comment] = ACTIONS(54),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [sym_statement_terminator] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(391),
    [sym_string] = ACTIONS(387),
    [sym_number] = ACTIONS(389),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(389),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_statement_terminator] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(397),
    [sym_string] = ACTIONS(393),
    [sym_number] = ACTIONS(395),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(395),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(399),
    [sym_comment] = ACTIONS(54),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(401),
    [sym_comment] = ACTIONS(54),
  },
  [106] = {
    [sym_switch_clause] = STATE(161),
    [sym_switch_clause_condition] = STATE(162),
    [aux_sym_switch_body_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(54),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_statement_terminator] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(411),
    [sym_string] = ACTIONS(407),
    [sym_number] = ACTIONS(409),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(409),
  },
  [108] = {
    [sym_switch_body] = STATE(164),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [109] = {
    [sym_switch_parameter] = STATE(49),
    [aux_sym_switch_repeat1] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_DASH] = ACTIONS(415),
    [sym_comment] = ACTIONS(54),
  },
  [110] = {
    [sym_attribute_arguments] = STATE(167),
    [anon_sym_LPAREN] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_comment] = ACTIONS(54),
  },
  [111] = {
    [sym_parameter_declaration] = STATE(168),
    [sym_attribute] = STATE(61),
    [sym_user_variable] = STATE(62),
    [aux_sym_parameter_declaration_repeat1] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [112] = {
    [anon_sym_LBRACE] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(426),
    [sym_string] = ACTIONS(422),
    [sym_number] = ACTIONS(424),
    [sym_comment] = ACTIONS(54),
  },
  [113] = {
    [aux_sym_parameter_list_repeat1] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(54),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(54),
  },
  [115] = {
    [sym_attribute] = STATE(61),
    [aux_sym_parameter_declaration_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(435),
    [sym_comment] = ACTIONS(54),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(437),
    [sym_comment] = ACTIONS(54),
  },
  [117] = {
    [sym_statement_list] = STATE(172),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [118] = {
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_comment] = ACTIONS(54),
  },
  [119] = {
    [sym_script_block] = STATE(173),
    [sym_param_block] = STATE(117),
    [sym_statement_list] = STATE(118),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [120] = {
    [sym_statement_block] = STATE(174),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [121] = {
    [sym_statement_block] = STATE(175),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [122] = {
    [sym_parameter_list] = STATE(177),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(54),
  },
  [123] = {
    [sym_boolean_value] = STATE(178),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [124] = {
    [sym_boolean_value] = STATE(179),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [125] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(441),
    [sym_comment] = ACTIONS(54),
  },
  [126] = {
    [sym_pipeline] = STATE(182),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(443),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [127] = {
    [sym_user_variable] = STATE(183),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [sym_comment] = ACTIONS(54),
  },
  [129] = {
    [sym_catch] = STATE(187),
    [sym_finally] = STATE(188),
    [aux_sym_try_repeat1] = STATE(189),
    [anon_sym_RBRACE] = ACTIONS(196),
    [sym_statement_terminator] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(204),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_comment] = ACTIONS(54),
  },
  [130] = {
    [anon_sym_RBRACE] = ACTIONS(208),
    [sym_statement_terminator] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(212),
    [sym_string] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_comment] = ACTIONS(54),
  },
  [131] = {
    [sym_statement_block] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [132] = {
    [sym_statement_block] = STATE(191),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [133] = {
    [anon_sym_RBRACE] = ACTIONS(214),
    [sym_statement_terminator] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(218),
    [sym_string] = ACTIONS(214),
    [sym_number] = ACTIONS(216),
    [sym_comment] = ACTIONS(54),
  },
  [134] = {
    [anon_sym_RBRACE] = ACTIONS(224),
    [sym_statement_terminator] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(228),
    [sym_string] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_comment] = ACTIONS(54),
  },
  [135] = {
    [sym_switch_body] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(451),
    [sym_comment] = ACTIONS(54),
  },
  [136] = {
    [sym_switch_parameter] = STATE(49),
    [sym_switch_condition] = STATE(194),
    [aux_sym_switch_repeat1] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [137] = {
    [anon_sym_RBRACE] = ACTIONS(453),
    [sym_statement_terminator] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(457),
    [sym_string] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [sym_comment] = ACTIONS(54),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
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
    [sym_comment] = ACTIONS(54),
  },
  [139] = {
    [anon_sym_RBRACE] = ACTIONS(248),
    [sym_statement_terminator] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(252),
    [sym_string] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [sym_comment] = ACTIONS(54),
  },
  [140] = {
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(140),
    [anon_sym_RBRACE] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(281),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(498),
    [sym_string] = ACTIONS(501),
    [sym_number] = ACTIONS(504),
    [sym_comment] = ACTIONS(54),
  },
  [141] = {
    [sym_boolean_value] = STATE(195),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [sym_statement_terminator] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(511),
    [sym_string] = ACTIONS(507),
    [sym_number] = ACTIONS(509),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(509),
  },
  [143] = {
    [sym_statement_block] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [144] = {
    [sym_pipeline] = STATE(198),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(513),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [145] = {
    [sym_pipeline] = STATE(200),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(513),
    [sym_statement_terminator] = ACTIONS(515),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [146] = {
    [sym_user_variable] = STATE(201),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [147] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(517),
    [sym_comment] = ACTIONS(54),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_statement_terminator] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(457),
    [sym_string] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(455),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [sym_statement_terminator] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(523),
    [sym_string] = ACTIONS(519),
    [sym_number] = ACTIONS(521),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(521),
  },
  [150] = {
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(54),
  },
  [151] = {
    [sym_statement_block] = STATE(203),
    [sym_type_literal] = STATE(150),
    [aux_sym_catch_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [sym_statement_terminator] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(531),
    [sym_string] = ACTIONS(527),
    [sym_number] = ACTIONS(529),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(529),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [sym_statement_terminator] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(537),
    [sym_string] = ACTIONS(533),
    [sym_number] = ACTIONS(535),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(535),
  },
  [154] = {
    [sym_catch] = STATE(98),
    [aux_sym_try_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(539),
    [sym_statement_terminator] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(546),
    [sym_string] = ACTIONS(539),
    [sym_number] = ACTIONS(541),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(541),
  },
  [155] = {
    [aux_sym_array_declaration_repeat1] = STATE(207),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(550),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(54),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(552),
    [sym_comment] = ACTIONS(54),
  },
  [157] = {
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [158] = {
    [anon_sym_LBRACE] = ACTIONS(556),
    [sym_comment] = ACTIONS(54),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(558),
    [sym_statement_terminator] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(558),
    [anon_sym_COLON] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(562),
    [sym_string] = ACTIONS(558),
    [sym_number] = ACTIONS(560),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(560),
  },
  [160] = {
    [anon_sym_LBRACE] = ACTIONS(564),
    [sym_comment] = ACTIONS(54),
  },
  [161] = {
    [anon_sym_RBRACE] = ACTIONS(566),
    [sym_identifier] = ACTIONS(568),
    [sym_comment] = ACTIONS(54),
  },
  [162] = {
    [sym_statement_block] = STATE(210),
    [anon_sym_LBRACE] = ACTIONS(570),
    [sym_comment] = ACTIONS(54),
  },
  [163] = {
    [sym_switch_clause] = STATE(161),
    [sym_switch_clause_condition] = STATE(162),
    [aux_sym_switch_body_repeat1] = STATE(212),
    [anon_sym_RBRACE] = ACTIONS(572),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(54),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_statement_terminator] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(578),
    [sym_string] = ACTIONS(574),
    [sym_number] = ACTIONS(576),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(576),
  },
  [165] = {
    [sym_attribute_argument] = STATE(215),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(54),
  },
  [166] = {
    [anon_sym_LBRACK] = ACTIONS(584),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(586),
    [sym_comment] = ACTIONS(54),
  },
  [167] = {
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym_comment] = ACTIONS(54),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_RPAREN] = ACTIONS(590),
    [sym_comment] = ACTIONS(54),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(596),
    [sym_string] = ACTIONS(592),
    [sym_number] = ACTIONS(594),
    [sym_comment] = ACTIONS(54),
  },
  [170] = {
    [aux_sym_parameter_list_repeat1] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(590),
    [sym_comment] = ACTIONS(54),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [sym_statement_terminator] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(605),
    [sym_string] = ACTIONS(601),
    [sym_number] = ACTIONS(603),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(603),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(238),
    [sym_comment] = ACTIONS(54),
  },
  [173] = {
    [anon_sym_RBRACE] = ACTIONS(607),
    [sym_comment] = ACTIONS(54),
  },
  [174] = {
    [sym_elseif] = STATE(220),
    [sym_else] = STATE(221),
    [aux_sym_if_repeat1] = STATE(222),
    [ts_builtin_sym_end] = ACTIONS(609),
    [sym_statement_terminator] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(617),
    [sym_string] = ACTIONS(609),
    [sym_number] = ACTIONS(615),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(615),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(619),
    [sym_statement_terminator] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(623),
    [sym_string] = ACTIONS(619),
    [sym_number] = ACTIONS(621),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(621),
  },
  [176] = {
    [sym_script_block] = STATE(223),
    [sym_param_block] = STATE(117),
    [sym_statement_list] = STATE(118),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [177] = {
    [anon_sym_LBRACE] = ACTIONS(625),
    [sym_comment] = ACTIONS(54),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(627),
    [sym_comment] = ACTIONS(54),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(629),
    [sym_comment] = ACTIONS(54),
  },
  [180] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_comment] = ACTIONS(54),
  },
  [181] = {
    [sym_statement_block] = STATE(228),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [182] = {
    [sym_pipeline] = STATE(231),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(633),
    [sym_statement_terminator] = ACTIONS(635),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [183] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(637),
    [sym_comment] = ACTIONS(54),
  },
  [184] = {
    [sym_user_variable] = STATE(233),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [185] = {
    [sym_statement_block] = STATE(234),
    [sym_type_literal] = STATE(150),
    [aux_sym_catch_repeat1] = STATE(235),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [186] = {
    [sym_statement_block] = STATE(236),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [187] = {
    [anon_sym_RBRACE] = ACTIONS(371),
    [sym_statement_terminator] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(373),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(373),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(375),
    [sym_string] = ACTIONS(371),
    [sym_number] = ACTIONS(373),
    [sym_comment] = ACTIONS(54),
  },
  [188] = {
    [anon_sym_RBRACE] = ACTIONS(377),
    [sym_statement_terminator] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(381),
    [sym_string] = ACTIONS(377),
    [sym_number] = ACTIONS(379),
    [sym_comment] = ACTIONS(54),
  },
  [189] = {
    [sym_catch] = STATE(187),
    [sym_finally] = STATE(237),
    [aux_sym_try_repeat1] = STATE(238),
    [anon_sym_RBRACE] = ACTIONS(377),
    [sym_statement_terminator] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(381),
    [sym_string] = ACTIONS(377),
    [sym_number] = ACTIONS(379),
    [sym_comment] = ACTIONS(54),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(387),
    [sym_statement_terminator] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(391),
    [sym_string] = ACTIONS(387),
    [sym_number] = ACTIONS(389),
    [sym_comment] = ACTIONS(54),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(393),
    [sym_statement_terminator] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(397),
    [sym_string] = ACTIONS(393),
    [sym_number] = ACTIONS(395),
    [sym_comment] = ACTIONS(54),
  },
  [192] = {
    [sym_switch_clause] = STATE(161),
    [sym_switch_clause_condition] = STATE(162),
    [aux_sym_switch_body_repeat1] = STATE(240),
    [anon_sym_RBRACE] = ACTIONS(639),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(54),
  },
  [193] = {
    [anon_sym_RBRACE] = ACTIONS(407),
    [sym_statement_terminator] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(411),
    [sym_string] = ACTIONS(407),
    [sym_number] = ACTIONS(409),
    [sym_comment] = ACTIONS(54),
  },
  [194] = {
    [sym_switch_body] = STATE(241),
    [anon_sym_LBRACE] = ACTIONS(451),
    [sym_comment] = ACTIONS(54),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(641),
    [sym_comment] = ACTIONS(54),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(643),
    [sym_statement_terminator] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_string] = ACTIONS(643),
    [sym_number] = ACTIONS(645),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(645),
  },
  [197] = {
    [sym_statement_block] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [198] = {
    [sym_pipeline] = STATE(246),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(649),
    [sym_statement_terminator] = ACTIONS(651),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [199] = {
    [sym_pipeline] = STATE(246),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(649),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(649),
    [sym_comment] = ACTIONS(54),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(653),
    [sym_comment] = ACTIONS(54),
  },
  [202] = {
    [sym_user_variable] = STATE(248),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [sym_statement_terminator] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(659),
    [sym_string] = ACTIONS(655),
    [sym_number] = ACTIONS(657),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(657),
  },
  [204] = {
    [sym_type_literal] = STATE(150),
    [aux_sym_catch_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(664),
    [sym_comment] = ACTIONS(54),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(666),
    [anon_sym_RBRACK] = ACTIONS(666),
    [sym_comment] = ACTIONS(54),
  },
  [206] = {
    [anon_sym_RBRACK] = ACTIONS(668),
    [sym_comment] = ACTIONS(54),
  },
  [207] = {
    [aux_sym_array_declaration_repeat1] = STATE(250),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(670),
    [sym_comment] = ACTIONS(54),
  },
  [208] = {
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [anon_sym_LBRACE] = ACTIONS(672),
    [sym_comment] = ACTIONS(54),
  },
  [209] = {
    [sym_statement_list] = STATE(252),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [anon_sym_RBRACE] = ACTIONS(674),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [210] = {
    [anon_sym_RBRACE] = ACTIONS(676),
    [sym_identifier] = ACTIONS(678),
    [sym_comment] = ACTIONS(54),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [sym_statement_terminator] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(684),
    [sym_string] = ACTIONS(680),
    [sym_number] = ACTIONS(682),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(682),
  },
  [212] = {
    [sym_switch_clause] = STATE(161),
    [sym_switch_clause_condition] = STATE(162),
    [aux_sym_switch_body_repeat1] = STATE(212),
    [anon_sym_RBRACE] = ACTIONS(686),
    [sym_identifier] = ACTIONS(688),
    [sym_comment] = ACTIONS(54),
  },
  [213] = {
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_comment] = ACTIONS(54),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(693),
    [anon_sym_EQ] = ACTIONS(695),
    [sym_comment] = ACTIONS(54),
  },
  [215] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(256),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_comment] = ACTIONS(54),
  },
  [216] = {
    [anon_sym_LBRACK] = ACTIONS(701),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(703),
    [sym_comment] = ACTIONS(54),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [sym_statement_terminator] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(709),
    [sym_string] = ACTIONS(705),
    [sym_number] = ACTIONS(707),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(707),
  },
  [218] = {
    [sym_statement_block] = STATE(257),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [219] = {
    [sym_statement_block] = STATE(258),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(711),
    [sym_statement_terminator] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(711),
    [anon_sym_COLON] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(715),
    [sym_string] = ACTIONS(711),
    [sym_number] = ACTIONS(713),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(713),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(717),
    [sym_statement_terminator] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(717),
    [sym_number] = ACTIONS(719),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(719),
  },
  [222] = {
    [sym_elseif] = STATE(220),
    [sym_else] = STATE(259),
    [aux_sym_if_repeat1] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(717),
    [sym_statement_terminator] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(717),
    [sym_number] = ACTIONS(719),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(719),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(723),
    [sym_comment] = ACTIONS(54),
  },
  [224] = {
    [sym_script_block] = STATE(262),
    [sym_param_block] = STATE(117),
    [sym_statement_list] = STATE(118),
    [sym_statement] = STATE(84),
    [sym_function_definition] = STATE(82),
    [sym_if] = STATE(82),
    [sym_while] = STATE(82),
    [sym_do] = STATE(82),
    [sym_for] = STATE(82),
    [sym_foreach] = STATE(82),
    [sym_try] = STATE(82),
    [sym_trap] = STATE(82),
    [sym_data] = STATE(82),
    [sym_labeled_statement] = STATE(82),
    [sym_label] = STATE(85),
    [sym_flow_control_statement] = STATE(82),
    [sym_flow_break_continue] = STATE(79),
    [sym_switch] = STATE(82),
    [sym_boolean_value] = STATE(82),
    [sym_user_variable] = STATE(82),
    [aux_sym_statement_list_repeat1] = STATE(86),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_string] = ACTIONS(182),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [225] = {
    [sym_statement_block] = STATE(263),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [226] = {
    [sym_statement_block] = STATE(264),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [227] = {
    [sym_boolean_value] = STATE(265),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [228] = {
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym_statement_terminator] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(511),
    [sym_string] = ACTIONS(507),
    [sym_number] = ACTIONS(509),
    [sym_comment] = ACTIONS(54),
  },
  [229] = {
    [sym_statement_block] = STATE(266),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [230] = {
    [sym_pipeline] = STATE(268),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(725),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [231] = {
    [sym_pipeline] = STATE(270),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(725),
    [sym_statement_terminator] = ACTIONS(727),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [232] = {
    [sym_user_variable] = STATE(271),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [233] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(729),
    [sym_comment] = ACTIONS(54),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_statement_terminator] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(523),
    [sym_string] = ACTIONS(519),
    [sym_number] = ACTIONS(521),
    [sym_comment] = ACTIONS(54),
  },
  [235] = {
    [sym_statement_block] = STATE(273),
    [sym_type_literal] = STATE(150),
    [aux_sym_catch_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [236] = {
    [anon_sym_RBRACE] = ACTIONS(527),
    [sym_statement_terminator] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(529),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(531),
    [sym_string] = ACTIONS(527),
    [sym_number] = ACTIONS(529),
    [sym_comment] = ACTIONS(54),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(533),
    [sym_statement_terminator] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(537),
    [sym_string] = ACTIONS(533),
    [sym_number] = ACTIONS(535),
    [sym_comment] = ACTIONS(54),
  },
  [238] = {
    [sym_catch] = STATE(187),
    [aux_sym_try_repeat1] = STATE(238),
    [anon_sym_RBRACE] = ACTIONS(539),
    [sym_statement_terminator] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(546),
    [sym_string] = ACTIONS(539),
    [sym_number] = ACTIONS(541),
    [sym_comment] = ACTIONS(54),
  },
  [239] = {
    [anon_sym_RBRACE] = ACTIONS(558),
    [sym_statement_terminator] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(558),
    [anon_sym_COLON] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(562),
    [sym_string] = ACTIONS(558),
    [sym_number] = ACTIONS(560),
    [sym_comment] = ACTIONS(54),
  },
  [240] = {
    [sym_switch_clause] = STATE(161),
    [sym_switch_clause_condition] = STATE(162),
    [aux_sym_switch_body_repeat1] = STATE(212),
    [anon_sym_RBRACE] = ACTIONS(734),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(54),
  },
  [241] = {
    [anon_sym_RBRACE] = ACTIONS(574),
    [sym_statement_terminator] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(578),
    [sym_string] = ACTIONS(574),
    [sym_number] = ACTIONS(576),
    [sym_comment] = ACTIONS(54),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [sym_statement_terminator] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(736),
    [anon_sym_COLON] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(740),
    [sym_string] = ACTIONS(736),
    [sym_number] = ACTIONS(738),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(738),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(742),
    [sym_statement_terminator] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(744),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(742),
    [anon_sym_COLON] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(744),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(746),
    [sym_string] = ACTIONS(742),
    [sym_number] = ACTIONS(744),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(744),
  },
  [244] = {
    [sym_statement_block] = STATE(275),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [245] = {
    [sym_pipeline] = STATE(277),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(748),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(748),
    [sym_comment] = ACTIONS(54),
  },
  [247] = {
    [sym_statement_block] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [248] = {
    [anon_sym_RPAREN] = ACTIONS(750),
    [sym_comment] = ACTIONS(54),
  },
  [249] = {
    [anon_sym_RBRACK] = ACTIONS(752),
    [sym_comment] = ACTIONS(54),
  },
  [250] = {
    [aux_sym_array_declaration_repeat1] = STATE(250),
    [anon_sym_COMMA] = ACTIONS(754),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_comment] = ACTIONS(54),
  },
  [251] = {
    [anon_sym_RBRACE] = ACTIONS(329),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(54),
  },
  [252] = {
    [anon_sym_RBRACE] = ACTIONS(759),
    [sym_comment] = ACTIONS(54),
  },
  [253] = {
    [sym_identifier] = ACTIONS(761),
    [sym_string] = ACTIONS(763),
    [sym_number] = ACTIONS(761),
    [sym_comment] = ACTIONS(54),
  },
  [254] = {
    [sym_attribute_argument] = STATE(282),
    [sym_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(54),
  },
  [255] = {
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym_comment] = ACTIONS(54),
  },
  [256] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(284),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_comment] = ACTIONS(54),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(769),
    [sym_statement_terminator] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(773),
    [sym_string] = ACTIONS(769),
    [sym_number] = ACTIONS(771),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(771),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(775),
    [sym_statement_terminator] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(779),
    [sym_string] = ACTIONS(775),
    [sym_number] = ACTIONS(777),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(777),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(781),
    [sym_statement_terminator] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(781),
    [anon_sym_COLON] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(785),
    [sym_string] = ACTIONS(781),
    [sym_number] = ACTIONS(783),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(783),
  },
  [260] = {
    [sym_elseif] = STATE(220),
    [aux_sym_if_repeat1] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(787),
    [sym_statement_terminator] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(789),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(794),
    [sym_string] = ACTIONS(787),
    [sym_number] = ACTIONS(792),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(792),
  },
  [261] = {
    [anon_sym_RBRACE] = ACTIONS(601),
    [sym_statement_terminator] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(605),
    [sym_string] = ACTIONS(601),
    [sym_number] = ACTIONS(603),
    [sym_comment] = ACTIONS(54),
  },
  [262] = {
    [anon_sym_RBRACE] = ACTIONS(796),
    [sym_comment] = ACTIONS(54),
  },
  [263] = {
    [sym_elseif] = STATE(288),
    [sym_else] = STATE(289),
    [aux_sym_if_repeat1] = STATE(290),
    [anon_sym_RBRACE] = ACTIONS(609),
    [sym_statement_terminator] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(798),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(617),
    [sym_string] = ACTIONS(609),
    [sym_number] = ACTIONS(615),
    [sym_comment] = ACTIONS(54),
  },
  [264] = {
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym_statement_terminator] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(623),
    [sym_string] = ACTIONS(619),
    [sym_number] = ACTIONS(621),
    [sym_comment] = ACTIONS(54),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_comment] = ACTIONS(54),
  },
  [266] = {
    [anon_sym_RBRACE] = ACTIONS(643),
    [sym_statement_terminator] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_string] = ACTIONS(643),
    [sym_number] = ACTIONS(645),
    [sym_comment] = ACTIONS(54),
  },
  [267] = {
    [sym_statement_block] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [268] = {
    [sym_pipeline] = STATE(295),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(804),
    [sym_statement_terminator] = ACTIONS(806),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [269] = {
    [sym_pipeline] = STATE(295),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(804),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(804),
    [sym_comment] = ACTIONS(54),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_comment] = ACTIONS(54),
  },
  [272] = {
    [sym_user_variable] = STATE(297),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(54),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(655),
    [sym_statement_terminator] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(659),
    [sym_string] = ACTIONS(655),
    [sym_number] = ACTIONS(657),
    [sym_comment] = ACTIONS(54),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(680),
    [sym_statement_terminator] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(684),
    [sym_string] = ACTIONS(680),
    [sym_number] = ACTIONS(682),
    [sym_comment] = ACTIONS(54),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(810),
    [sym_statement_terminator] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(814),
    [sym_string] = ACTIONS(810),
    [sym_number] = ACTIONS(812),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(812),
  },
  [276] = {
    [sym_statement_block] = STATE(298),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(54),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(818),
    [sym_statement_terminator] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(818),
    [anon_sym_COLON] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(822),
    [sym_string] = ACTIONS(818),
    [sym_number] = ACTIONS(820),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(820),
  },
  [279] = {
    [sym_statement_block] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [280] = {
    [anon_sym_RBRACE] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
    [sym_comment] = ACTIONS(54),
  },
  [281] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(824),
    [sym_comment] = ACTIONS(54),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(54),
  },
  [283] = {
    [anon_sym_RBRACK] = ACTIONS(828),
    [sym_comment] = ACTIONS(54),
  },
  [284] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(284),
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(54),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(705),
    [sym_statement_terminator] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(709),
    [sym_string] = ACTIONS(705),
    [sym_number] = ACTIONS(707),
    [sym_comment] = ACTIONS(54),
  },
  [286] = {
    [sym_statement_block] = STATE(301),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [287] = {
    [sym_statement_block] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [288] = {
    [anon_sym_RBRACE] = ACTIONS(711),
    [sym_statement_terminator] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(711),
    [anon_sym_COLON] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(715),
    [sym_string] = ACTIONS(711),
    [sym_number] = ACTIONS(713),
    [sym_comment] = ACTIONS(54),
  },
  [289] = {
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_statement_terminator] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(717),
    [sym_number] = ACTIONS(719),
    [sym_comment] = ACTIONS(54),
  },
  [290] = {
    [sym_elseif] = STATE(288),
    [sym_else] = STATE(303),
    [aux_sym_if_repeat1] = STATE(304),
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_statement_terminator] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(798),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(721),
    [sym_string] = ACTIONS(717),
    [sym_number] = ACTIONS(719),
    [sym_comment] = ACTIONS(54),
  },
  [291] = {
    [anon_sym_RBRACE] = ACTIONS(736),
    [sym_statement_terminator] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(736),
    [anon_sym_COLON] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(740),
    [sym_string] = ACTIONS(736),
    [sym_number] = ACTIONS(738),
    [sym_comment] = ACTIONS(54),
  },
  [292] = {
    [anon_sym_RBRACE] = ACTIONS(742),
    [sym_statement_terminator] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(744),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(742),
    [anon_sym_COLON] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(744),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(746),
    [sym_string] = ACTIONS(742),
    [sym_number] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [293] = {
    [sym_statement_block] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [294] = {
    [sym_pipeline] = STATE(307),
    [sym_boolean_value] = STATE(90),
    [sym_user_variable] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(833),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(833),
    [sym_comment] = ACTIONS(54),
  },
  [296] = {
    [sym_statement_block] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym_comment] = ACTIONS(54),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(837),
    [sym_statement_terminator] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(837),
    [anon_sym_COLON] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(841),
    [sym_string] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(839),
  },
  [299] = {
    [sym_statement_block] = STATE(310),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(843),
    [sym_statement_terminator] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
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
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(845),
  },
  [301] = {
    [anon_sym_RBRACE] = ACTIONS(769),
    [sym_statement_terminator] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(773),
    [sym_string] = ACTIONS(769),
    [sym_number] = ACTIONS(771),
    [sym_comment] = ACTIONS(54),
  },
  [302] = {
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_statement_terminator] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(779),
    [sym_string] = ACTIONS(775),
    [sym_number] = ACTIONS(777),
    [sym_comment] = ACTIONS(54),
  },
  [303] = {
    [anon_sym_RBRACE] = ACTIONS(781),
    [sym_statement_terminator] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(781),
    [anon_sym_COLON] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(785),
    [sym_string] = ACTIONS(781),
    [sym_number] = ACTIONS(783),
    [sym_comment] = ACTIONS(54),
  },
  [304] = {
    [sym_elseif] = STATE(288),
    [aux_sym_if_repeat1] = STATE(304),
    [anon_sym_RBRACE] = ACTIONS(787),
    [sym_statement_terminator] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(849),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(792),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(794),
    [sym_string] = ACTIONS(787),
    [sym_number] = ACTIONS(792),
    [sym_comment] = ACTIONS(54),
  },
  [305] = {
    [anon_sym_RBRACE] = ACTIONS(810),
    [sym_statement_terminator] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(814),
    [sym_string] = ACTIONS(810),
    [sym_number] = ACTIONS(812),
    [sym_comment] = ACTIONS(54),
  },
  [306] = {
    [sym_statement_block] = STATE(311),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_comment] = ACTIONS(54),
  },
  [308] = {
    [anon_sym_RBRACE] = ACTIONS(818),
    [sym_statement_terminator] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(818),
    [anon_sym_COLON] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(822),
    [sym_string] = ACTIONS(818),
    [sym_number] = ACTIONS(820),
    [sym_comment] = ACTIONS(54),
  },
  [309] = {
    [sym_statement_block] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [310] = {
    [ts_builtin_sym_end] = ACTIONS(854),
    [sym_statement_terminator] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(856),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(854),
    [anon_sym_COLON] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(856),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(858),
    [sym_string] = ACTIONS(854),
    [sym_number] = ACTIONS(856),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(856),
  },
  [311] = {
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym_statement_terminator] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(837),
    [anon_sym_COLON] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(841),
    [sym_string] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_comment] = ACTIONS(54),
  },
  [312] = {
    [sym_statement_block] = STATE(314),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [313] = {
    [anon_sym_RBRACE] = ACTIONS(843),
    [sym_statement_terminator] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
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
    [sym_comment] = ACTIONS(54),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(854),
    [sym_statement_terminator] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(856),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(854),
    [anon_sym_COLON] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(856),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(858),
    [sym_string] = ACTIONS(854),
    [sym_number] = ACTIONS(856),
    [sym_comment] = ACTIONS(54),
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
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 2),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 2),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 2),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 1),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 2),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_statement, 2),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [254] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(3),
  [257] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(4),
  [260] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [263] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [266] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [269] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [272] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [275] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [278] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [281] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(12),
  [284] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(13),
  [287] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(16),
  [296] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [299] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(18),
  [302] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(18),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pipeline, 1),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 3),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_parameter, 2),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 3),
  [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2),
  [415] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(48),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [432] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(58),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [459] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(70),
  [462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(71),
  [465] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(72),
  [468] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(73),
  [471] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(74),
  [474] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(75),
  [477] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(76),
  [480] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(77),
  [483] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(78),
  [486] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(79),
  [489] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(80),
  [492] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(81),
  [495] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(66),
  [498] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(59),
  [501] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(82),
  [504] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(82),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 1),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [543] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(96),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_condition, 3),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 2),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause_condition, 1),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 4),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [598] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(111),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
  [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [661] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2), SHIFT_REPEAT(40),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 2),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 4),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause, 2),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_clause, 2),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 3),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [688] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(160),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 6),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [731] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(185),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [740] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [746] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 3),
  [754] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(205),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [789] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(218),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [794] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [814] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [822] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [830] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(254),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [849] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(286),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
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
