#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 309
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 30,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH = 31,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH = 32,
  aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH = 33,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 34,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH = 35,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 36,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH = 37,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH = 38,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 39,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 40,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 41,
  sym_identifier = 42,
  sym_string = 43,
  sym_number = 44,
  sym_comment = 45,
  sym_signature_block = 46,
  sym_script = 47,
  sym_script_block = 48,
  sym_param_block = 49,
  sym_parameter_list = 50,
  sym_parameter_declaration = 51,
  sym_attribute = 52,
  sym_array_declaration = 53,
  sym_attribute_arguments = 54,
  sym_attribute_argument = 55,
  sym_statement_block = 56,
  sym_statement_list = 57,
  sym_statement = 58,
  sym_pipeline = 59,
  sym_function_definition = 60,
  sym_if = 61,
  sym_elseif = 62,
  sym_else = 63,
  sym_while = 64,
  sym_do = 65,
  sym_for = 66,
  sym_foreach = 67,
  sym_foreach_parameter = 68,
  sym_try = 69,
  sym_catch = 70,
  sym_finally = 71,
  sym_trap = 72,
  sym_data = 73,
  sym_flow_control_statement = 74,
  sym_flow_break_continue = 75,
  sym_switch = 76,
  sym_switch_parameter = 77,
  sym_switch_condition = 78,
  sym_switch_body = 79,
  sym_switch_clause = 80,
  sym_switch_clause_condition = 81,
  sym_type_literal = 82,
  sym_boolean_value = 83,
  sym_user_variable = 84,
  aux_sym_parameter_list_repeat1 = 85,
  aux_sym_parameter_declaration_repeat1 = 86,
  aux_sym_array_declaration_repeat1 = 87,
  aux_sym_attribute_arguments_repeat1 = 88,
  aux_sym_statement_list_repeat1 = 89,
  aux_sym_if_repeat1 = 90,
  aux_sym_try_repeat1 = 91,
  aux_sym_catch_repeat1 = 92,
  aux_sym_switch_repeat1 = 93,
  aux_sym_switch_body_repeat1 = 94,
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
        ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(102);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
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
      ACCEPT_TOKEN(sym_statement_terminator);
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
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(75);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
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
        ADVANCE(51);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(108);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(112);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 124:
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
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 143:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(148);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(153);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 153:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 166:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 179:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(186);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(191);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(193);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 194:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(199);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 206:
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      END_STATE();
    case 207:
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
        SKIP(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 208:
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
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(131);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(153);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 221:
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
        ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(102);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 222:
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
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(224);
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
        SKIP(223);
      END_STATE();
    case 224:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 225:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(226);
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
        SKIP(225);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 226:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(232);
      END_STATE();
    case 227:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 232:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(230);
      END_STATE();
    case 234:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(235);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(234);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 240:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(195);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(261);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(269);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      END_STATE();
    case 243:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 256:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 261:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 274:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 282:
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
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
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
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 284:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 286:
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
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
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
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
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
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(235);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(144);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 295:
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
      if (lookahead == ';')
        ADVANCE(34);
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
        ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(102);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 296:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(296);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(285);
      END_STATE();
    case 298:
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
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
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
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 300:
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
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 206},
  [3] = {.lex_state = 207},
  [4] = {.lex_state = 206},
  [5] = {.lex_state = 206},
  [6] = {.lex_state = 206},
  [7] = {.lex_state = 206},
  [8] = {.lex_state = 206},
  [9] = {.lex_state = 206},
  [10] = {.lex_state = 206},
  [11] = {.lex_state = 207},
  [12] = {.lex_state = 208},
  [13] = {.lex_state = 221},
  [14] = {.lex_state = 206},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 208},
  [17] = {.lex_state = 208},
  [18] = {.lex_state = 206},
  [19] = {.lex_state = 206},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 208},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 222},
  [27] = {.lex_state = 206},
  [28] = {.lex_state = 225},
  [29] = {.lex_state = 225},
  [30] = {.lex_state = 222},
  [31] = {.lex_state = 234},
  [32] = {.lex_state = 241},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 242},
  [35] = {.lex_state = 206},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 208},
  [38] = {.lex_state = 207},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 206},
  [41] = {.lex_state = 206},
  [42] = {.lex_state = 208},
  [43] = {.lex_state = 208},
  [44] = {.lex_state = 225},
  [45] = {.lex_state = 242},
  [46] = {.lex_state = 206},
  [47] = {.lex_state = 206},
  [48] = {.lex_state = 206},
  [49] = {.lex_state = 206},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 282},
  [54] = {.lex_state = 207},
  [55] = {.lex_state = 283},
  [56] = {.lex_state = 206},
  [57] = {.lex_state = 223},
  [58] = {.lex_state = 206},
  [59] = {.lex_state = 223},
  [60] = {.lex_state = 286},
  [61] = {.lex_state = 206},
  [62] = {.lex_state = 287},
  [63] = {.lex_state = 206},
  [64] = {.lex_state = 206},
  [65] = {.lex_state = 288},
  [66] = {.lex_state = 207},
  [67] = {.lex_state = 206},
  [68] = {.lex_state = 206},
  [69] = {.lex_state = 206},
  [70] = {.lex_state = 206},
  [71] = {.lex_state = 206},
  [72] = {.lex_state = 206},
  [73] = {.lex_state = 206},
  [74] = {.lex_state = 207},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 295},
  [77] = {.lex_state = 206},
  [78] = {.lex_state = 222},
  [79] = {.lex_state = 206},
  [80] = {.lex_state = 222},
  [81] = {.lex_state = 222},
  [82] = {.lex_state = 206},
  [83] = {.lex_state = 206},
  [84] = {.lex_state = 241},
  [85] = {.lex_state = 241},
  [86] = {.lex_state = 296},
  [87] = {.lex_state = 206},
  [88] = {.lex_state = 223},
  [89] = {.lex_state = 298},
  [90] = {.lex_state = 206},
  [91] = {.lex_state = 206},
  [92] = {.lex_state = 206},
  [93] = {.lex_state = 208},
  [94] = {.lex_state = 208},
  [95] = {.lex_state = 208},
  [96] = {.lex_state = 206},
  [97] = {.lex_state = 208},
  [98] = {.lex_state = 208},
  [99] = {.lex_state = 206},
  [100] = {.lex_state = 206},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 208},
  [103] = {.lex_state = 206},
  [104] = {.lex_state = 206},
  [105] = {.lex_state = 206},
  [106] = {.lex_state = 223},
  [107] = {.lex_state = 282},
  [108] = {.lex_state = 206},
  [109] = {.lex_state = 206},
  [110] = {.lex_state = 223},
  [111] = {.lex_state = 206},
  [112] = {.lex_state = 222},
  [113] = {.lex_state = 206},
  [114] = {.lex_state = 286},
  [115] = {.lex_state = 206},
  [116] = {.lex_state = 206},
  [117] = {.lex_state = 206},
  [118] = {.lex_state = 225},
  [119] = {.lex_state = 225},
  [120] = {.lex_state = 234},
  [121] = {.lex_state = 241},
  [122] = {.lex_state = 223},
  [123] = {.lex_state = 206},
  [124] = {.lex_state = 222},
  [125] = {.lex_state = 222},
  [126] = {.lex_state = 206},
  [127] = {.lex_state = 206},
  [128] = {.lex_state = 222},
  [129] = {.lex_state = 222},
  [130] = {.lex_state = 206},
  [131] = {.lex_state = 206},
  [132] = {.lex_state = 288},
  [133] = {.lex_state = 222},
  [134] = {.lex_state = 222},
  [135] = {.lex_state = 225},
  [136] = {.lex_state = 208},
  [137] = {.lex_state = 206},
  [138] = {.lex_state = 241},
  [139] = {.lex_state = 241},
  [140] = {.lex_state = 223},
  [141] = {.lex_state = 296},
  [142] = {.lex_state = 298},
  [143] = {.lex_state = 208},
  [144] = {.lex_state = 206},
  [145] = {.lex_state = 206},
  [146] = {.lex_state = 208},
  [147] = {.lex_state = 208},
  [148] = {.lex_state = 208},
  [149] = {.lex_state = 207},
  [150] = {.lex_state = 206},
  [151] = {.lex_state = 206},
  [152] = {.lex_state = 206},
  [153] = {.lex_state = 208},
  [154] = {.lex_state = 206},
  [155] = {.lex_state = 207},
  [156] = {.lex_state = 206},
  [157] = {.lex_state = 207},
  [158] = {.lex_state = 208},
  [159] = {.lex_state = 207},
  [160] = {.lex_state = 223},
  [161] = {.lex_state = 206},
  [162] = {.lex_state = 206},
  [163] = {.lex_state = 282},
  [164] = {.lex_state = 206},
  [165] = {.lex_state = 208},
  [166] = {.lex_state = 206},
  [167] = {.lex_state = 206},
  [168] = {.lex_state = 299},
  [169] = {.lex_state = 208},
  [170] = {.lex_state = 286},
  [171] = {.lex_state = 206},
  [172] = {.lex_state = 206},
  [173] = {.lex_state = 206},
  [174] = {.lex_state = 206},
  [175] = {.lex_state = 206},
  [176] = {.lex_state = 241},
  [177] = {.lex_state = 296},
  [178] = {.lex_state = 223},
  [179] = {.lex_state = 206},
  [180] = {.lex_state = 206},
  [181] = {.lex_state = 222},
  [182] = {.lex_state = 222},
  [183] = {.lex_state = 222},
  [184] = {.lex_state = 222},
  [185] = {.lex_state = 222},
  [186] = {.lex_state = 207},
  [187] = {.lex_state = 222},
  [188] = {.lex_state = 206},
  [189] = {.lex_state = 206},
  [190] = {.lex_state = 208},
  [191] = {.lex_state = 206},
  [192] = {.lex_state = 241},
  [193] = {.lex_state = 241},
  [194] = {.lex_state = 206},
  [195] = {.lex_state = 206},
  [196] = {.lex_state = 223},
  [197] = {.lex_state = 208},
  [198] = {.lex_state = 206},
  [199] = {.lex_state = 206},
  [200] = {.lex_state = 206},
  [201] = {.lex_state = 206},
  [202] = {.lex_state = 206},
  [203] = {.lex_state = 222},
  [204] = {.lex_state = 207},
  [205] = {.lex_state = 208},
  [206] = {.lex_state = 207},
  [207] = {.lex_state = 206},
  [208] = {.lex_state = 206},
  [209] = {.lex_state = 206},
  [210] = {.lex_state = 223},
  [211] = {.lex_state = 208},
  [212] = {.lex_state = 206},
  [213] = {.lex_state = 206},
  [214] = {.lex_state = 299},
  [215] = {.lex_state = 208},
  [216] = {.lex_state = 299},
  [217] = {.lex_state = 206},
  [218] = {.lex_state = 286},
  [219] = {.lex_state = 206},
  [220] = {.lex_state = 206},
  [221] = {.lex_state = 225},
  [222] = {.lex_state = 222},
  [223] = {.lex_state = 206},
  [224] = {.lex_state = 241},
  [225] = {.lex_state = 241},
  [226] = {.lex_state = 223},
  [227] = {.lex_state = 296},
  [228] = {.lex_state = 222},
  [229] = {.lex_state = 206},
  [230] = {.lex_state = 222},
  [231] = {.lex_state = 222},
  [232] = {.lex_state = 222},
  [233] = {.lex_state = 222},
  [234] = {.lex_state = 207},
  [235] = {.lex_state = 222},
  [236] = {.lex_state = 208},
  [237] = {.lex_state = 208},
  [238] = {.lex_state = 206},
  [239] = {.lex_state = 241},
  [240] = {.lex_state = 206},
  [241] = {.lex_state = 206},
  [242] = {.lex_state = 206},
  [243] = {.lex_state = 206},
  [244] = {.lex_state = 206},
  [245] = {.lex_state = 207},
  [246] = {.lex_state = 206},
  [247] = {.lex_state = 225},
  [248] = {.lex_state = 207},
  [249] = {.lex_state = 206},
  [250] = {.lex_state = 206},
  [251] = {.lex_state = 299},
  [252] = {.lex_state = 208},
  [253] = {.lex_state = 208},
  [254] = {.lex_state = 299},
  [255] = {.lex_state = 222},
  [256] = {.lex_state = 206},
  [257] = {.lex_state = 300},
  [258] = {.lex_state = 222},
  [259] = {.lex_state = 206},
  [260] = {.lex_state = 222},
  [261] = {.lex_state = 206},
  [262] = {.lex_state = 241},
  [263] = {.lex_state = 241},
  [264] = {.lex_state = 206},
  [265] = {.lex_state = 206},
  [266] = {.lex_state = 223},
  [267] = {.lex_state = 222},
  [268] = {.lex_state = 222},
  [269] = {.lex_state = 208},
  [270] = {.lex_state = 206},
  [271] = {.lex_state = 206},
  [272] = {.lex_state = 208},
  [273] = {.lex_state = 206},
  [274] = {.lex_state = 207},
  [275] = {.lex_state = 206},
  [276] = {.lex_state = 206},
  [277] = {.lex_state = 206},
  [278] = {.lex_state = 206},
  [279] = {.lex_state = 222},
  [280] = {.lex_state = 206},
  [281] = {.lex_state = 206},
  [282] = {.lex_state = 300},
  [283] = {.lex_state = 222},
  [284] = {.lex_state = 300},
  [285] = {.lex_state = 222},
  [286] = {.lex_state = 222},
  [287] = {.lex_state = 206},
  [288] = {.lex_state = 241},
  [289] = {.lex_state = 206},
  [290] = {.lex_state = 206},
  [291] = {.lex_state = 206},
  [292] = {.lex_state = 208},
  [293] = {.lex_state = 206},
  [294] = {.lex_state = 208},
  [295] = {.lex_state = 300},
  [296] = {.lex_state = 222},
  [297] = {.lex_state = 222},
  [298] = {.lex_state = 300},
  [299] = {.lex_state = 222},
  [300] = {.lex_state = 206},
  [301] = {.lex_state = 206},
  [302] = {.lex_state = 222},
  [303] = {.lex_state = 206},
  [304] = {.lex_state = 208},
  [305] = {.lex_state = 222},
  [306] = {.lex_state = 206},
  [307] = {.lex_state = 222},
  [308] = {.lex_state = 222},
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
    [sym_script] = STATE(19),
    [sym_script_block] = STATE(20),
    [sym_param_block] = STATE(21),
    [sym_statement_list] = STATE(22),
    [sym_statement] = STATE(23),
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
    [aux_sym_statement_list_repeat1] = STATE(24),
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
    [sym_parameter_list] = STATE(26),
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
    [sym_statement_block] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(52),
  },
  [8] = {
    [sym_foreach_parameter] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(52),
  },
  [9] = {
    [sym_statement_block] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [10] = {
    [sym_statement_block] = STATE(39),
    [sym_type_literal] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [11] = {
    [sym_statement_block] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(52),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_statement_terminator] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
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
    [sym_statement_terminator] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(82),
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
    [sym_switch_parameter] = STATE(46),
    [sym_switch_condition] = STATE(47),
    [aux_sym_switch_repeat1] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_statement_terminator] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(92),
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
    [sym_statement_terminator] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
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
    [sym_statement_terminator] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(104),
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
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(114),
  },
  [21] = {
    [sym_statement_list] = STATE(50),
    [sym_statement] = STATE(23),
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
    [aux_sym_statement_list_repeat1] = STATE(24),
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
    [sym_comment] = ACTIONS(52),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(118),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_statement_terminator] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(126),
    [sym_string] = ACTIONS(120),
    [sym_number] = ACTIONS(124),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(124),
  },
  [24] = {
    [sym_statement] = STATE(23),
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
    [aux_sym_statement_list_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(128),
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
    [sym_signature_block] = ACTIONS(130),
  },
  [25] = {
    [sym_parameter_declaration] = STATE(56),
    [sym_attribute] = STATE(57),
    [sym_user_variable] = STATE(58),
    [aux_sym_parameter_declaration_repeat1] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [26] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(142),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [27] = {
    [sym_parameter_list] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(144),
    [sym_comment] = ACTIONS(52),
  },
  [28] = {
    [sym_boolean_value] = STATE(63),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [29] = {
    [sym_boolean_value] = STATE(64),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [30] = {
    [sym_statement_list] = STATE(79),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [anon_sym_RBRACE] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [31] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(182),
    [sym_comment] = ACTIONS(52),
  },
  [32] = {
    [sym_pipeline] = STATE(84),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [33] = {
    [sym_user_variable] = STATE(86),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [34] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(52),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(188),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym_statement_list] = STATE(90),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [anon_sym_RBRACE] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [37] = {
    [sym_catch] = STATE(93),
    [sym_finally] = STATE(94),
    [aux_sym_try_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_statement_terminator] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(192),
    [sym_number] = ACTIONS(194),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(194),
  },
  [38] = {
    [sym_identifier] = ACTIONS(202),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_statement_terminator] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(208),
    [sym_string] = ACTIONS(204),
    [sym_number] = ACTIONS(206),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(206),
  },
  [40] = {
    [sym_statement_block] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [41] = {
    [sym_statement_block] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_statement_terminator] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(214),
    [sym_string] = ACTIONS(210),
    [sym_number] = ACTIONS(212),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(212),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_statement_terminator] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(220),
    [sym_string] = ACTIONS(216),
    [sym_number] = ACTIONS(218),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(218),
  },
  [44] = {
    [sym_boolean_value] = STATE(99),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(222),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [sym_switch_body] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(226),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [sym_switch_parameter] = STATE(46),
    [sym_switch_condition] = STATE(103),
    [aux_sym_switch_repeat1] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(232),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(236),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(238),
    [sym_string] = ACTIONS(234),
    [sym_number] = ACTIONS(236),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(236),
  },
  [52] = {
    [sym_statement] = STATE(23),
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
    [aux_sym_statement_list_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(249),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(279),
    [sym_string] = ACTIONS(282),
    [sym_number] = ACTIONS(285),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(236),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(292),
    [sym_string] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [54] = {
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_statement_terminator] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [aux_sym_parameter_list_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(52),
  },
  [57] = {
    [anon_sym_LBRACK] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(302),
    [sym_comment] = ACTIONS(52),
  },
  [58] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [sym_comment] = ACTIONS(52),
  },
  [59] = {
    [sym_attribute] = STATE(57),
    [sym_user_variable] = STATE(109),
    [aux_sym_parameter_declaration_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [60] = {
    [sym_script_block] = STATE(111),
    [sym_param_block] = STATE(112),
    [sym_statement_list] = STATE(113),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(306),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_statement_terminator] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(92),
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
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(308),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(310),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym_statement_terminator] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(316),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(314),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [sym_identifier] = ACTIONS(318),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(320),
    [sym_comment] = ACTIONS(52),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(322),
    [sym_comment] = ACTIONS(52),
  },
  [69] = {
    [sym_statement_block] = STATE(120),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(324),
    [sym_comment] = ACTIONS(52),
  },
  [71] = {
    [sym_foreach_parameter] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(52),
  },
  [72] = {
    [sym_statement_block] = STATE(124),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [73] = {
    [sym_statement_block] = STATE(125),
    [sym_type_literal] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [74] = {
    [sym_statement_block] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(328),
    [sym_comment] = ACTIONS(52),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym_statement_terminator] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(74),
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
    [sym_comment] = ACTIONS(52),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(80),
    [sym_statement_terminator] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(82),
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
    [sym_identifier] = ACTIONS(330),
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(52),
  },
  [77] = {
    [sym_switch_parameter] = STATE(46),
    [sym_switch_condition] = STATE(130),
    [aux_sym_switch_repeat1] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [78] = {
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_statement_terminator] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(104),
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
    [sym_comment] = ACTIONS(52),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(332),
    [sym_comment] = ACTIONS(52),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_statement_terminator] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(126),
    [sym_string] = ACTIONS(120),
    [sym_number] = ACTIONS(124),
    [sym_comment] = ACTIONS(52),
  },
  [81] = {
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(134),
    [anon_sym_RBRACE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(336),
    [sym_comment] = ACTIONS(52),
  },
  [83] = {
    [sym_statement_block] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [84] = {
    [sym_pipeline] = STATE(139),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(338),
    [sym_statement_terminator] = ACTIONS(340),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(342),
    [sym_statement_terminator] = ACTIONS(342),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(346),
    [sym_comment] = ACTIONS(52),
  },
  [86] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(348),
    [sym_comment] = ACTIONS(52),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(350),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [sym_user_variable] = STATE(141),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym_statement_terminator] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(316),
    [sym_string] = ACTIONS(312),
    [sym_number] = ACTIONS(314),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(314),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(352),
    [sym_comment] = ACTIONS(52),
  },
  [91] = {
    [sym_statement_block] = STATE(143),
    [sym_type_literal] = STATE(144),
    [aux_sym_catch_repeat1] = STATE(145),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [92] = {
    [sym_statement_block] = STATE(146),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym_statement_terminator] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
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
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym_statement_terminator] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(364),
    [sym_string] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(362),
  },
  [95] = {
    [sym_catch] = STATE(93),
    [sym_finally] = STATE(147),
    [aux_sym_try_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym_statement_terminator] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(364),
    [sym_string] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(362),
  },
  [96] = {
    [sym_array_declaration] = STATE(151),
    [sym_type_literal] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(368),
    [sym_comment] = ACTIONS(52),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_statement_terminator] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(374),
    [sym_string] = ACTIONS(370),
    [sym_number] = ACTIONS(372),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(372),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym_statement_terminator] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(380),
    [sym_string] = ACTIONS(376),
    [sym_number] = ACTIONS(378),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(378),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [sym_comment] = ACTIONS(52),
  },
  [101] = {
    [sym_switch_clause] = STATE(155),
    [sym_switch_clause_condition] = STATE(156),
    [aux_sym_switch_body_repeat1] = STATE(157),
    [anon_sym_RBRACE] = ACTIONS(386),
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(52),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_statement_terminator] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(394),
    [sym_string] = ACTIONS(390),
    [sym_number] = ACTIONS(392),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(392),
  },
  [103] = {
    [sym_switch_body] = STATE(158),
    [anon_sym_LBRACE] = ACTIONS(226),
    [sym_comment] = ACTIONS(52),
  },
  [104] = {
    [sym_switch_parameter] = STATE(46),
    [aux_sym_switch_repeat1] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(398),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [sym_attribute_arguments] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_comment] = ACTIONS(52),
  },
  [106] = {
    [sym_parameter_declaration] = STATE(162),
    [sym_attribute] = STATE(57),
    [sym_user_variable] = STATE(58),
    [aux_sym_parameter_declaration_repeat1] = STATE(59),
    [anon_sym_LBRACK] = ACTIONS(134),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [107] = {
    [anon_sym_LBRACE] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(409),
    [sym_string] = ACTIONS(405),
    [sym_number] = ACTIONS(407),
    [sym_comment] = ACTIONS(52),
  },
  [108] = {
    [aux_sym_parameter_list_repeat1] = STATE(164),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_comment] = ACTIONS(52),
  },
  [109] = {
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [sym_comment] = ACTIONS(52),
  },
  [110] = {
    [sym_attribute] = STATE(57),
    [aux_sym_parameter_declaration_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(415),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(418),
    [sym_comment] = ACTIONS(52),
  },
  [111] = {
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(52),
  },
  [112] = {
    [sym_statement_list] = STATE(166),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(52),
  },
  [114] = {
    [sym_script_block] = STATE(167),
    [sym_param_block] = STATE(112),
    [sym_statement_list] = STATE(113),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [115] = {
    [sym_statement_block] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [116] = {
    [sym_statement_block] = STATE(169),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [117] = {
    [sym_parameter_list] = STATE(171),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(52),
  },
  [118] = {
    [sym_boolean_value] = STATE(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [119] = {
    [sym_boolean_value] = STATE(173),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [120] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(424),
    [sym_comment] = ACTIONS(52),
  },
  [121] = {
    [sym_pipeline] = STATE(176),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(426),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [122] = {
    [sym_user_variable] = STATE(177),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(52),
  },
  [124] = {
    [sym_catch] = STATE(181),
    [sym_finally] = STATE(182),
    [aux_sym_try_repeat1] = STATE(183),
    [anon_sym_RBRACE] = ACTIONS(192),
    [sym_statement_terminator] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(432),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(200),
    [sym_string] = ACTIONS(192),
    [sym_number] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(204),
    [sym_statement_terminator] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(208),
    [sym_string] = ACTIONS(204),
    [sym_number] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [sym_statement_block] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [127] = {
    [sym_statement_block] = STATE(185),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [128] = {
    [anon_sym_RBRACE] = ACTIONS(210),
    [sym_statement_terminator] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(214),
    [sym_string] = ACTIONS(210),
    [sym_number] = ACTIONS(212),
    [sym_comment] = ACTIONS(52),
  },
  [129] = {
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym_statement_terminator] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(220),
    [sym_string] = ACTIONS(216),
    [sym_number] = ACTIONS(218),
    [sym_comment] = ACTIONS(52),
  },
  [130] = {
    [sym_switch_body] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(434),
    [sym_comment] = ACTIONS(52),
  },
  [131] = {
    [sym_switch_parameter] = STATE(46),
    [sym_switch_condition] = STATE(188),
    [aux_sym_switch_repeat1] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(436),
    [sym_statement_terminator] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(440),
    [sym_string] = ACTIONS(436),
    [sym_number] = ACTIONS(438),
    [sym_comment] = ACTIONS(52),
  },
  [133] = {
    [anon_sym_RBRACE] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(236),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(238),
    [sym_string] = ACTIONS(234),
    [sym_number] = ACTIONS(236),
    [sym_comment] = ACTIONS(52),
  },
  [134] = {
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(134),
    [anon_sym_RBRACE] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(475),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(481),
    [sym_string] = ACTIONS(484),
    [sym_number] = ACTIONS(487),
    [sym_comment] = ACTIONS(52),
  },
  [135] = {
    [sym_boolean_value] = STATE(189),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [sym_statement_terminator] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(494),
    [sym_string] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(492),
  },
  [137] = {
    [sym_statement_block] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [138] = {
    [sym_pipeline] = STATE(192),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(496),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [139] = {
    [sym_pipeline] = STATE(194),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_statement_terminator] = ACTIONS(498),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [140] = {
    [sym_user_variable] = STATE(195),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [141] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(500),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym_statement_terminator] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(440),
    [sym_string] = ACTIONS(436),
    [sym_number] = ACTIONS(438),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(438),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_statement_terminator] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(506),
    [sym_string] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(504),
  },
  [144] = {
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(508),
    [sym_comment] = ACTIONS(52),
  },
  [145] = {
    [sym_statement_block] = STATE(197),
    [sym_type_literal] = STATE(144),
    [aux_sym_catch_repeat1] = STATE(198),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_statement_terminator] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(514),
    [sym_string] = ACTIONS(510),
    [sym_number] = ACTIONS(512),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(512),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [sym_statement_terminator] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(520),
    [sym_string] = ACTIONS(516),
    [sym_number] = ACTIONS(518),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(518),
  },
  [148] = {
    [sym_catch] = STATE(93),
    [aux_sym_try_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_statement_terminator] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(526),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(529),
    [sym_string] = ACTIONS(522),
    [sym_number] = ACTIONS(524),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(524),
  },
  [149] = {
    [aux_sym_array_declaration_repeat1] = STATE(201),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(533),
    [sym_identifier] = ACTIONS(202),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [sym_comment] = ACTIONS(52),
  },
  [151] = {
    [anon_sym_RBRACK] = ACTIONS(537),
    [sym_comment] = ACTIONS(52),
  },
  [152] = {
    [anon_sym_LBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_statement_terminator] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(545),
    [sym_string] = ACTIONS(541),
    [sym_number] = ACTIONS(543),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(543),
  },
  [154] = {
    [anon_sym_LBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(52),
  },
  [155] = {
    [anon_sym_RBRACE] = ACTIONS(549),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(52),
  },
  [156] = {
    [sym_statement_block] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(553),
    [sym_comment] = ACTIONS(52),
  },
  [157] = {
    [sym_switch_clause] = STATE(155),
    [sym_switch_clause_condition] = STATE(156),
    [aux_sym_switch_body_repeat1] = STATE(206),
    [anon_sym_RBRACE] = ACTIONS(555),
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(52),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [sym_statement_terminator] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(561),
    [sym_string] = ACTIONS(557),
    [sym_number] = ACTIONS(559),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(559),
  },
  [159] = {
    [sym_attribute_argument] = STATE(209),
    [anon_sym_RPAREN] = ACTIONS(563),
    [sym_identifier] = ACTIONS(565),
    [sym_comment] = ACTIONS(52),
  },
  [160] = {
    [anon_sym_LBRACK] = ACTIONS(567),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(569),
    [sym_comment] = ACTIONS(52),
  },
  [161] = {
    [anon_sym_RBRACK] = ACTIONS(571),
    [sym_comment] = ACTIONS(52),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_comment] = ACTIONS(52),
  },
  [163] = {
    [anon_sym_LBRACE] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(579),
    [sym_string] = ACTIONS(575),
    [sym_number] = ACTIONS(577),
    [sym_comment] = ACTIONS(52),
  },
  [164] = {
    [aux_sym_parameter_list_repeat1] = STATE(164),
    [anon_sym_COMMA] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_comment] = ACTIONS(52),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [sym_statement_terminator] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(588),
    [sym_string] = ACTIONS(584),
    [sym_number] = ACTIONS(586),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(586),
  },
  [166] = {
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
  },
  [167] = {
    [anon_sym_RBRACE] = ACTIONS(590),
    [sym_comment] = ACTIONS(52),
  },
  [168] = {
    [sym_elseif] = STATE(214),
    [sym_else] = STATE(215),
    [aux_sym_if_repeat1] = STATE(216),
    [ts_builtin_sym_end] = ACTIONS(592),
    [sym_statement_terminator] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(600),
    [sym_string] = ACTIONS(592),
    [sym_number] = ACTIONS(598),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(598),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [sym_statement_terminator] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(606),
    [sym_string] = ACTIONS(602),
    [sym_number] = ACTIONS(604),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(604),
  },
  [170] = {
    [sym_script_block] = STATE(217),
    [sym_param_block] = STATE(112),
    [sym_statement_list] = STATE(113),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [171] = {
    [anon_sym_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(52),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_comment] = ACTIONS(52),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_comment] = ACTIONS(52),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_comment] = ACTIONS(52),
  },
  [175] = {
    [sym_statement_block] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [176] = {
    [sym_pipeline] = STATE(225),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_statement_terminator] = ACTIONS(618),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [177] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(620),
    [sym_comment] = ACTIONS(52),
  },
  [178] = {
    [sym_user_variable] = STATE(227),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [179] = {
    [sym_statement_block] = STATE(228),
    [sym_type_literal] = STATE(144),
    [aux_sym_catch_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [180] = {
    [sym_statement_block] = STATE(230),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(354),
    [sym_statement_terminator] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(354),
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
    [sym_comment] = ACTIONS(52),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym_statement_terminator] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(364),
    [sym_string] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_comment] = ACTIONS(52),
  },
  [183] = {
    [sym_catch] = STATE(181),
    [sym_finally] = STATE(231),
    [aux_sym_try_repeat1] = STATE(232),
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym_statement_terminator] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(432),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(364),
    [sym_string] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_comment] = ACTIONS(52),
  },
  [184] = {
    [anon_sym_RBRACE] = ACTIONS(370),
    [sym_statement_terminator] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(374),
    [sym_string] = ACTIONS(370),
    [sym_number] = ACTIONS(372),
    [sym_comment] = ACTIONS(52),
  },
  [185] = {
    [anon_sym_RBRACE] = ACTIONS(376),
    [sym_statement_terminator] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(380),
    [sym_string] = ACTIONS(376),
    [sym_number] = ACTIONS(378),
    [sym_comment] = ACTIONS(52),
  },
  [186] = {
    [sym_switch_clause] = STATE(155),
    [sym_switch_clause_condition] = STATE(156),
    [aux_sym_switch_body_repeat1] = STATE(234),
    [anon_sym_RBRACE] = ACTIONS(622),
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(52),
  },
  [187] = {
    [anon_sym_RBRACE] = ACTIONS(390),
    [sym_statement_terminator] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(394),
    [sym_string] = ACTIONS(390),
    [sym_number] = ACTIONS(392),
    [sym_comment] = ACTIONS(52),
  },
  [188] = {
    [sym_switch_body] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(434),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(624),
    [sym_comment] = ACTIONS(52),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(626),
    [sym_statement_terminator] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(630),
    [sym_string] = ACTIONS(626),
    [sym_number] = ACTIONS(628),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(628),
  },
  [191] = {
    [sym_statement_block] = STATE(237),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [192] = {
    [sym_pipeline] = STATE(240),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_statement_terminator] = ACTIONS(634),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [193] = {
    [sym_pipeline] = STATE(240),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(632),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_comment] = ACTIONS(52),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(52),
  },
  [196] = {
    [sym_user_variable] = STATE(242),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [sym_statement_terminator] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(642),
    [sym_string] = ACTIONS(638),
    [sym_number] = ACTIONS(640),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(640),
  },
  [198] = {
    [sym_type_literal] = STATE(144),
    [aux_sym_catch_repeat1] = STATE(198),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(52),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_comment] = ACTIONS(52),
  },
  [200] = {
    [anon_sym_RBRACK] = ACTIONS(651),
    [sym_comment] = ACTIONS(52),
  },
  [201] = {
    [aux_sym_array_declaration_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym_comment] = ACTIONS(52),
  },
  [202] = {
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_RBRACK] = ACTIONS(655),
    [anon_sym_LBRACE] = ACTIONS(655),
    [sym_comment] = ACTIONS(52),
  },
  [203] = {
    [sym_statement_list] = STATE(246),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [anon_sym_RBRACE] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [204] = {
    [anon_sym_RBRACE] = ACTIONS(659),
    [sym_identifier] = ACTIONS(661),
    [sym_comment] = ACTIONS(52),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [sym_statement_terminator] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(665),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(667),
    [sym_string] = ACTIONS(663),
    [sym_number] = ACTIONS(665),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(665),
  },
  [206] = {
    [sym_switch_clause] = STATE(155),
    [sym_switch_clause_condition] = STATE(156),
    [aux_sym_switch_body_repeat1] = STATE(206),
    [anon_sym_RBRACE] = ACTIONS(669),
    [sym_identifier] = ACTIONS(671),
    [sym_comment] = ACTIONS(52),
  },
  [207] = {
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_comment] = ACTIONS(52),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_EQ] = ACTIONS(678),
    [sym_comment] = ACTIONS(52),
  },
  [209] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(250),
    [anon_sym_COMMA] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_comment] = ACTIONS(52),
  },
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(684),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(686),
    [sym_comment] = ACTIONS(52),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [sym_statement_terminator] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(692),
    [sym_string] = ACTIONS(688),
    [sym_number] = ACTIONS(690),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(690),
  },
  [212] = {
    [sym_statement_block] = STATE(251),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [213] = {
    [sym_statement_block] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(694),
    [sym_statement_terminator] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(698),
    [sym_string] = ACTIONS(694),
    [sym_number] = ACTIONS(696),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(696),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym_statement_terminator] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(704),
    [sym_string] = ACTIONS(700),
    [sym_number] = ACTIONS(702),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(702),
  },
  [216] = {
    [sym_elseif] = STATE(214),
    [sym_else] = STATE(253),
    [aux_sym_if_repeat1] = STATE(254),
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym_statement_terminator] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(704),
    [sym_string] = ACTIONS(700),
    [sym_number] = ACTIONS(702),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(702),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(706),
    [sym_comment] = ACTIONS(52),
  },
  [218] = {
    [sym_script_block] = STATE(256),
    [sym_param_block] = STATE(112),
    [sym_statement_list] = STATE(113),
    [sym_statement] = STATE(80),
    [sym_function_definition] = STATE(78),
    [sym_if] = STATE(78),
    [sym_while] = STATE(78),
    [sym_do] = STATE(78),
    [sym_for] = STATE(78),
    [sym_foreach] = STATE(78),
    [sym_try] = STATE(78),
    [sym_trap] = STATE(78),
    [sym_data] = STATE(78),
    [sym_flow_control_statement] = STATE(78),
    [sym_flow_break_continue] = STATE(75),
    [sym_switch] = STATE(78),
    [sym_boolean_value] = STATE(78),
    [sym_user_variable] = STATE(78),
    [aux_sym_statement_list_repeat1] = STATE(81),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_string] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(52),
  },
  [219] = {
    [sym_statement_block] = STATE(257),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [sym_statement_block] = STATE(258),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [221] = {
    [sym_boolean_value] = STATE(259),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [anon_sym_RBRACE] = ACTIONS(490),
    [sym_statement_terminator] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(494),
    [sym_string] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [sym_statement_block] = STATE(260),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [224] = {
    [sym_pipeline] = STATE(262),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(708),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [225] = {
    [sym_pipeline] = STATE(264),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_statement_terminator] = ACTIONS(710),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [sym_user_variable] = STATE(265),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [227] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(712),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [anon_sym_RBRACE] = ACTIONS(502),
    [sym_statement_terminator] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(506),
    [sym_string] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [sym_comment] = ACTIONS(52),
  },
  [229] = {
    [sym_statement_block] = STATE(267),
    [sym_type_literal] = STATE(144),
    [aux_sym_catch_repeat1] = STATE(198),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [anon_sym_RBRACE] = ACTIONS(510),
    [sym_statement_terminator] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(514),
    [sym_string] = ACTIONS(510),
    [sym_number] = ACTIONS(512),
    [sym_comment] = ACTIONS(52),
  },
  [231] = {
    [anon_sym_RBRACE] = ACTIONS(516),
    [sym_statement_terminator] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(520),
    [sym_string] = ACTIONS(516),
    [sym_number] = ACTIONS(518),
    [sym_comment] = ACTIONS(52),
  },
  [232] = {
    [sym_catch] = STATE(181),
    [aux_sym_try_repeat1] = STATE(232),
    [anon_sym_RBRACE] = ACTIONS(522),
    [sym_statement_terminator] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(529),
    [sym_string] = ACTIONS(522),
    [sym_number] = ACTIONS(524),
    [sym_comment] = ACTIONS(52),
  },
  [233] = {
    [anon_sym_RBRACE] = ACTIONS(541),
    [sym_statement_terminator] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(545),
    [sym_string] = ACTIONS(541),
    [sym_number] = ACTIONS(543),
    [sym_comment] = ACTIONS(52),
  },
  [234] = {
    [sym_switch_clause] = STATE(155),
    [sym_switch_clause_condition] = STATE(156),
    [aux_sym_switch_body_repeat1] = STATE(206),
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(52),
  },
  [235] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_statement_terminator] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(561),
    [sym_string] = ACTIONS(557),
    [sym_number] = ACTIONS(559),
    [sym_comment] = ACTIONS(52),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [sym_statement_terminator] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(723),
    [sym_string] = ACTIONS(719),
    [sym_number] = ACTIONS(721),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(721),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [sym_statement_terminator] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(729),
    [sym_string] = ACTIONS(725),
    [sym_number] = ACTIONS(727),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(727),
  },
  [238] = {
    [sym_statement_block] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [239] = {
    [sym_pipeline] = STATE(271),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(731),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [240] = {
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [sym_statement_block] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [anon_sym_RBRACK] = ACTIONS(735),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
    [aux_sym_array_declaration_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(737),
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_comment] = ACTIONS(52),
  },
  [245] = {
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym_identifier] = ACTIONS(314),
    [sym_comment] = ACTIONS(52),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(742),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [sym_identifier] = ACTIONS(744),
    [sym_string] = ACTIONS(746),
    [sym_number] = ACTIONS(744),
    [sym_comment] = ACTIONS(52),
  },
  [248] = {
    [sym_attribute_argument] = STATE(276),
    [sym_identifier] = ACTIONS(565),
    [sym_comment] = ACTIONS(52),
  },
  [249] = {
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_comment] = ACTIONS(52),
  },
  [250] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(750),
    [sym_comment] = ACTIONS(52),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(752),
    [sym_statement_terminator] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(754),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(756),
    [sym_string] = ACTIONS(752),
    [sym_number] = ACTIONS(754),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(754),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(758),
    [sym_statement_terminator] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(762),
    [sym_string] = ACTIONS(758),
    [sym_number] = ACTIONS(760),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(760),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(764),
    [sym_statement_terminator] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(768),
    [sym_string] = ACTIONS(764),
    [sym_number] = ACTIONS(766),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(766),
  },
  [254] = {
    [sym_elseif] = STATE(214),
    [aux_sym_if_repeat1] = STATE(254),
    [ts_builtin_sym_end] = ACTIONS(770),
    [sym_statement_terminator] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(777),
    [sym_string] = ACTIONS(770),
    [sym_number] = ACTIONS(775),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(775),
  },
  [255] = {
    [anon_sym_RBRACE] = ACTIONS(584),
    [sym_statement_terminator] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(588),
    [sym_string] = ACTIONS(584),
    [sym_number] = ACTIONS(586),
    [sym_comment] = ACTIONS(52),
  },
  [256] = {
    [anon_sym_RBRACE] = ACTIONS(779),
    [sym_comment] = ACTIONS(52),
  },
  [257] = {
    [sym_elseif] = STATE(282),
    [sym_else] = STATE(283),
    [aux_sym_if_repeat1] = STATE(284),
    [anon_sym_RBRACE] = ACTIONS(592),
    [sym_statement_terminator] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(600),
    [sym_string] = ACTIONS(592),
    [sym_number] = ACTIONS(598),
    [sym_comment] = ACTIONS(52),
  },
  [258] = {
    [anon_sym_RBRACE] = ACTIONS(602),
    [sym_statement_terminator] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(606),
    [sym_string] = ACTIONS(602),
    [sym_number] = ACTIONS(604),
    [sym_comment] = ACTIONS(52),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(785),
    [sym_comment] = ACTIONS(52),
  },
  [260] = {
    [anon_sym_RBRACE] = ACTIONS(626),
    [sym_statement_terminator] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(630),
    [sym_string] = ACTIONS(626),
    [sym_number] = ACTIONS(628),
    [sym_comment] = ACTIONS(52),
  },
  [261] = {
    [sym_statement_block] = STATE(286),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [262] = {
    [sym_pipeline] = STATE(289),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(787),
    [sym_statement_terminator] = ACTIONS(789),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [263] = {
    [sym_pipeline] = STATE(289),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(787),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(787),
    [sym_comment] = ACTIONS(52),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(791),
    [sym_comment] = ACTIONS(52),
  },
  [266] = {
    [sym_user_variable] = STATE(291),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(52),
  },
  [267] = {
    [anon_sym_RBRACE] = ACTIONS(638),
    [sym_statement_terminator] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(642),
    [sym_string] = ACTIONS(638),
    [sym_number] = ACTIONS(640),
    [sym_comment] = ACTIONS(52),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(663),
    [sym_statement_terminator] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(665),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(667),
    [sym_string] = ACTIONS(663),
    [sym_number] = ACTIONS(665),
    [sym_comment] = ACTIONS(52),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(793),
    [sym_statement_terminator] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(797),
    [sym_string] = ACTIONS(793),
    [sym_number] = ACTIONS(795),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(795),
  },
  [270] = {
    [sym_statement_block] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(799),
    [sym_comment] = ACTIONS(52),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(801),
    [sym_statement_terminator] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(803),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(803),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(805),
    [sym_string] = ACTIONS(801),
    [sym_number] = ACTIONS(803),
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(803),
  },
  [273] = {
    [sym_statement_block] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(436),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(52),
  },
  [275] = {
    [anon_sym_COMMA] = ACTIONS(807),
    [anon_sym_RPAREN] = ACTIONS(807),
    [sym_comment] = ACTIONS(52),
  },
  [276] = {
    [anon_sym_COMMA] = ACTIONS(809),
    [anon_sym_RPAREN] = ACTIONS(809),
    [sym_comment] = ACTIONS(52),
  },
  [277] = {
    [anon_sym_RBRACK] = ACTIONS(811),
    [sym_comment] = ACTIONS(52),
  },
  [278] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(809),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [anon_sym_RBRACE] = ACTIONS(688),
    [sym_statement_terminator] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(688),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(692),
    [sym_string] = ACTIONS(688),
    [sym_number] = ACTIONS(690),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [sym_statement_block] = STATE(295),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [sym_statement_block] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [anon_sym_RBRACE] = ACTIONS(694),
    [sym_statement_terminator] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(698),
    [sym_string] = ACTIONS(694),
    [sym_number] = ACTIONS(696),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_statement_terminator] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(704),
    [sym_string] = ACTIONS(700),
    [sym_number] = ACTIONS(702),
    [sym_comment] = ACTIONS(52),
  },
  [284] = {
    [sym_elseif] = STATE(282),
    [sym_else] = STATE(297),
    [aux_sym_if_repeat1] = STATE(298),
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_statement_terminator] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(704),
    [sym_string] = ACTIONS(700),
    [sym_number] = ACTIONS(702),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [sym_statement_terminator] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(723),
    [sym_string] = ACTIONS(719),
    [sym_number] = ACTIONS(721),
    [sym_comment] = ACTIONS(52),
  },
  [286] = {
    [anon_sym_RBRACE] = ACTIONS(725),
    [sym_statement_terminator] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(729),
    [sym_string] = ACTIONS(725),
    [sym_number] = ACTIONS(727),
    [sym_comment] = ACTIONS(52),
  },
  [287] = {
    [sym_statement_block] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [288] = {
    [sym_pipeline] = STATE(301),
    [sym_boolean_value] = STATE(85),
    [sym_user_variable] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(816),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(52),
  },
  [290] = {
    [sym_statement_block] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym_comment] = ACTIONS(52),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [sym_statement_terminator] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(820),
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
  [293] = {
    [sym_statement_block] = STATE(304),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(826),
    [sym_statement_terminator] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(826),
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
  [295] = {
    [anon_sym_RBRACE] = ACTIONS(752),
    [sym_statement_terminator] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(754),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(754),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(756),
    [sym_string] = ACTIONS(752),
    [sym_number] = ACTIONS(754),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(758),
    [sym_statement_terminator] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(760),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(762),
    [sym_string] = ACTIONS(758),
    [sym_number] = ACTIONS(760),
    [sym_comment] = ACTIONS(52),
  },
  [297] = {
    [anon_sym_RBRACE] = ACTIONS(764),
    [sym_statement_terminator] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(768),
    [sym_string] = ACTIONS(764),
    [sym_number] = ACTIONS(766),
    [sym_comment] = ACTIONS(52),
  },
  [298] = {
    [sym_elseif] = STATE(282),
    [aux_sym_if_repeat1] = STATE(298),
    [anon_sym_RBRACE] = ACTIONS(770),
    [sym_statement_terminator] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(832),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(777),
    [sym_string] = ACTIONS(770),
    [sym_number] = ACTIONS(775),
    [sym_comment] = ACTIONS(52),
  },
  [299] = {
    [anon_sym_RBRACE] = ACTIONS(793),
    [sym_statement_terminator] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(797),
    [sym_string] = ACTIONS(793),
    [sym_number] = ACTIONS(795),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [sym_statement_block] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym_comment] = ACTIONS(52),
  },
  [302] = {
    [anon_sym_RBRACE] = ACTIONS(801),
    [sym_statement_terminator] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(803),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(803),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(805),
    [sym_string] = ACTIONS(801),
    [sym_number] = ACTIONS(803),
    [sym_comment] = ACTIONS(52),
  },
  [303] = {
    [sym_statement_block] = STATE(307),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [304] = {
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
    [sym_comment] = ACTIONS(46),
    [sym_signature_block] = ACTIONS(839),
  },
  [305] = {
    [anon_sym_RBRACE] = ACTIONS(820),
    [sym_statement_terminator] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(820),
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
    [sym_comment] = ACTIONS(52),
  },
  [306] = {
    [sym_statement_block] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(52),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(826),
    [sym_statement_terminator] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(826),
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
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
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
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
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
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 2),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 2),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 1),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 2),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [240] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(3),
  [243] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(4),
  [246] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [249] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [252] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [255] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [258] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [261] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [264] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [267] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(12),
  [270] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(13),
  [273] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [276] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [279] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(16),
  [282] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [285] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pipeline, 1),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 3),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_parameter, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 3),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2),
  [398] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(45),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [415] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(54),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [442] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(66),
  [445] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(67),
  [448] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(68),
  [451] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(69),
  [454] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(70),
  [457] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(71),
  [460] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(72),
  [463] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(73),
  [466] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(74),
  [469] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(75),
  [472] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(76),
  [475] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(77),
  [478] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(62),
  [481] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(55),
  [484] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(78),
  [487] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(78),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 1),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [526] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(91),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_condition, 3),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 2),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause_condition, 1),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 4),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [581] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(106),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
  [588] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2), SHIFT_REPEAT(38),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 2),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 4),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause, 2),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_clause, 2),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 3),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [671] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(154),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 6),
  [692] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [698] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [714] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(179),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 3),
  [737] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(199),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [772] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(212),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(248),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [824] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [830] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [832] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(280),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
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
