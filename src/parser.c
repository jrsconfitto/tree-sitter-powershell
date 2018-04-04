#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 328
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  aux_sym_SLASH_LBRACKrR_RBRACK_SLASH = 37,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH = 38,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH = 39,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH = 40,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 41,
  aux_sym_SLASH_LBRACKwW_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH = 43,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH = 44,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH = 45,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH = 46,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH = 47,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH = 48,
  aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH = 49,
  aux_sym_SLASH_LBRACKeE_RBRACK_SLASH = 50,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH = 51,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH = 52,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH = 53,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH = 54,
  aux_sym_SLASH_LBRACKcC_RBRACK_SLASH = 55,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH = 56,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH = 57,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 58,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH = 59,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 60,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 61,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH = 62,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH = 63,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH = 64,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH = 65,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH = 66,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 67,
  aux_sym_SLASH_LBRACKpP_RBRACK_SLASH = 68,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH = 69,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH = 70,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH = 71,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 72,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 73,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 74,
  aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH = 75,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 76,
  sym_identifier = 77,
  sym_string = 78,
  aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH = 79,
  aux_sym_SLASH_LBRACKlL_RBRACK_SLASH = 80,
  aux_sym_SLASH_LBRACKdD_RBRACK_SLASH = 81,
  aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH = 82,
  aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH = 83,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH = 84,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH = 85,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH = 86,
  sym_comment = 87,
  sym_signature_block = 88,
  sym_script = 89,
  sym_script_block = 90,
  sym_param_block = 91,
  sym_parameter_list = 92,
  sym_parameter_declaration = 93,
  sym_attribute = 94,
  sym_array_declaration = 95,
  sym_attribute_arguments = 96,
  sym_attribute_argument = 97,
  sym_statement_block = 98,
  sym_statement_list = 99,
  sym_statement = 100,
  sym_pipeline = 101,
  sym_function_definition = 102,
  sym_if = 103,
  sym_elseif = 104,
  sym_else = 105,
  sym_while = 106,
  sym_do = 107,
  sym_for = 108,
  sym_foreach = 109,
  sym_foreach_parameter = 110,
  sym_try = 111,
  sym_catch = 112,
  sym_finally = 113,
  sym_trap = 114,
  sym_data = 115,
  sym_labeled_statement = 116,
  sym_label = 117,
  sym_flow_control_statement = 118,
  sym_flow_break_continue = 119,
  sym_switch = 120,
  sym_switch_parameter = 121,
  sym_switch_condition = 122,
  sym_switch_body = 123,
  sym_switch_clause = 124,
  sym_switch_clause_condition = 125,
  sym_type_literal = 126,
  sym_boolean_value = 127,
  sym_user_variable = 128,
  sym_number = 129,
  sym_suffix = 130,
  aux_sym_parameter_list_repeat1 = 131,
  aux_sym_parameter_declaration_repeat1 = 132,
  aux_sym_array_declaration_repeat1 = 133,
  aux_sym_attribute_arguments_repeat1 = 134,
  aux_sym_statement_list_repeat1 = 135,
  aux_sym_if_repeat1 = 136,
  aux_sym_try_repeat1 = 137,
  aux_sym_catch_repeat1 = 138,
  aux_sym_switch_repeat1 = 139,
  aux_sym_switch_body_repeat1 = 140,
  aux_sym_number_repeat1 = 141,
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
  [aux_sym_SLASH_LBRACKrR_RBRACK_SLASH] = "/[rR]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[rR][eE]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH] = "/[rR][eE][gG]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[rR][eE][gG][eE]/",
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = "/[rR][eE][gG][eE][xX]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_SLASH] = "/[wW]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH] = "/[wW][iI]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[wW][iI][lL]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[wW][iI][lL][dD]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[wW][iI][lL][dD][cC]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = "/[wW][iI][lL][dD][cC][aA]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[wW][iI][lL][dD][cC][aA][rR]/",
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[wW][iI][lL][dD][cC][aA][rR][dD]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_SLASH] = "/[eE]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = "/[eE][xX]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH] = "/[eE][xX][aA]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[eE][xX][aA][cC]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[eE][xX][aA][cC][tT]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_SLASH] = "/[cC]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = "/[cC][aA]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH] = "/[cC][aA][sS]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][aA][sS][eE]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS][iI]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS][iI][tT]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS][iI][tT][iI]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS][iI][tT][iI][vV]/",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[cC][aA][sS][eE][sS][eE][nN][sS][iI][tT][iI][vV][eE]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = "/[pP]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH] = "/[pP][aA]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[pP][aA][rR]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH] = "/[pP][aA][rR][aA]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[pP][aA][rR][aA][lL]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[pP][aA][rR][aA][lL][lL]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[pP][aA][rR][aA][lL][lL][eE]/",
  [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = "/$([tT][rR][uU][eE]|[fF][aA][lL][sS][eE])/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = "/\\$[a-zA-Z]\\w*/",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = "/((0x|0X)[\\da-fA-F]+|(0|[1-9](\\d+|)).(\\d+|)((e|E)(-|+|)\\d+|)|.\\d+((e|E)(-|+|)\\d+|)|(0|[1-9](\\d+|))((e|E)(-|+|)\\d+|))/",
  [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = "/[lL]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = "/[dD]/",
  [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = "/[kK][bB]/",
  [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = "/[mM][bB]/",
  [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = "/[gG][bB]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = "/[tT][bB]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = "/[pP][bB]/",
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
  [sym_number] = "number",
  [sym_suffix] = "suffix",
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
  [aux_sym_number_repeat1] = "number_repeat1",
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
  [aux_sym_SLASH_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_suffix] = {
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
  [aux_sym_number_repeat1] = {
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(51);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
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
      if (lookahead == '\"')
        ADVANCE(44);
      if (lookahead == '\'')
        ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@')
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '\"')
        ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@')
        ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '@')
        ADVANCE(3);
      END_STATE();
    case 47:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '@')
        ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '\'')
        ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '@')
        ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 71:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 81:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 96:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 98:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 101:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 103:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 111:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 117:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(124);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 127:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 140:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(70);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 147:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(123);
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
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(51);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      END_STATE();
    case 149:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(51);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 151:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(151);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 152:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(153);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(194);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(202);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(208);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(167);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(181);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(214);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 229:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 230:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(231);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      END_STATE();
    case 231:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 232:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(233);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 233:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(239);
      END_STATE();
    case 234:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 239:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(237);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 247:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(128);
      END_STATE();
    case 248:
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
        SKIP(248);
      END_STATE();
    case 249:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(250);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(276);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 289:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 295:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(296);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 296:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 302:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(51);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(302);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 303:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 304:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 306:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(306);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 307:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 308:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 309:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(72);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 315:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(153);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(194);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(202);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(208);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(315);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(150);
      END_STATE();
    case 316:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(305);
      END_STATE();
    case 318:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(318);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 319:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(319);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 320:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(320);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 321:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 322:
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
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(322);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 323:
      if (lookahead == '#')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(324);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(94);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 325:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 140},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 149},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 148},
  [6] = {.lex_state = 148},
  [7] = {.lex_state = 148},
  [8] = {.lex_state = 148},
  [9] = {.lex_state = 148},
  [10] = {.lex_state = 148},
  [11] = {.lex_state = 149},
  [12] = {.lex_state = 149},
  [13] = {.lex_state = 151},
  [14] = {.lex_state = 152},
  [15] = {.lex_state = 148},
  [16] = {.lex_state = 151},
  [17] = {.lex_state = 151},
  [18] = {.lex_state = 151},
  [19] = {.lex_state = 151},
  [20] = {.lex_state = 148},
  [21] = {.lex_state = 148},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 229},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 151},
  [26] = {.lex_state = 229},
  [27] = {.lex_state = 140},
  [28] = {.lex_state = 230},
  [29] = {.lex_state = 229},
  [30] = {.lex_state = 148},
  [31] = {.lex_state = 232},
  [32] = {.lex_state = 232},
  [33] = {.lex_state = 229},
  [34] = {.lex_state = 241},
  [35] = {.lex_state = 248},
  [36] = {.lex_state = 230},
  [37] = {.lex_state = 249},
  [38] = {.lex_state = 148},
  [39] = {.lex_state = 229},
  [40] = {.lex_state = 289},
  [41] = {.lex_state = 149},
  [42] = {.lex_state = 151},
  [43] = {.lex_state = 148},
  [44] = {.lex_state = 148},
  [45] = {.lex_state = 151},
  [46] = {.lex_state = 229},
  [47] = {.lex_state = 151},
  [48] = {.lex_state = 232},
  [49] = {.lex_state = 249},
  [50] = {.lex_state = 148},
  [51] = {.lex_state = 148},
  [52] = {.lex_state = 148},
  [53] = {.lex_state = 151},
  [54] = {.lex_state = 151},
  [55] = {.lex_state = 151},
  [56] = {.lex_state = 148},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 140},
  [59] = {.lex_state = 151},
  [60] = {.lex_state = 140},
  [61] = {.lex_state = 302},
  [62] = {.lex_state = 149},
  [63] = {.lex_state = 303},
  [64] = {.lex_state = 148},
  [65] = {.lex_state = 230},
  [66] = {.lex_state = 148},
  [67] = {.lex_state = 230},
  [68] = {.lex_state = 306},
  [69] = {.lex_state = 148},
  [70] = {.lex_state = 307},
  [71] = {.lex_state = 148},
  [72] = {.lex_state = 148},
  [73] = {.lex_state = 308},
  [74] = {.lex_state = 149},
  [75] = {.lex_state = 148},
  [76] = {.lex_state = 148},
  [77] = {.lex_state = 148},
  [78] = {.lex_state = 148},
  [79] = {.lex_state = 148},
  [80] = {.lex_state = 148},
  [81] = {.lex_state = 148},
  [82] = {.lex_state = 149},
  [83] = {.lex_state = 229},
  [84] = {.lex_state = 315},
  [85] = {.lex_state = 148},
  [86] = {.lex_state = 229},
  [87] = {.lex_state = 229},
  [88] = {.lex_state = 148},
  [89] = {.lex_state = 229},
  [90] = {.lex_state = 229},
  [91] = {.lex_state = 229},
  [92] = {.lex_state = 148},
  [93] = {.lex_state = 148},
  [94] = {.lex_state = 248},
  [95] = {.lex_state = 248},
  [96] = {.lex_state = 316},
  [97] = {.lex_state = 148},
  [98] = {.lex_state = 230},
  [99] = {.lex_state = 318},
  [100] = {.lex_state = 148},
  [101] = {.lex_state = 148},
  [102] = {.lex_state = 148},
  [103] = {.lex_state = 289},
  [104] = {.lex_state = 151},
  [105] = {.lex_state = 289},
  [106] = {.lex_state = 148},
  [107] = {.lex_state = 151},
  [108] = {.lex_state = 151},
  [109] = {.lex_state = 148},
  [110] = {.lex_state = 148},
  [111] = {.lex_state = 149},
  [112] = {.lex_state = 151},
  [113] = {.lex_state = 148},
  [114] = {.lex_state = 148},
  [115] = {.lex_state = 151},
  [116] = {.lex_state = 148},
  [117] = {.lex_state = 230},
  [118] = {.lex_state = 302},
  [119] = {.lex_state = 148},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 230},
  [122] = {.lex_state = 148},
  [123] = {.lex_state = 229},
  [124] = {.lex_state = 148},
  [125] = {.lex_state = 306},
  [126] = {.lex_state = 148},
  [127] = {.lex_state = 148},
  [128] = {.lex_state = 148},
  [129] = {.lex_state = 232},
  [130] = {.lex_state = 232},
  [131] = {.lex_state = 241},
  [132] = {.lex_state = 248},
  [133] = {.lex_state = 230},
  [134] = {.lex_state = 148},
  [135] = {.lex_state = 319},
  [136] = {.lex_state = 229},
  [137] = {.lex_state = 148},
  [138] = {.lex_state = 148},
  [139] = {.lex_state = 229},
  [140] = {.lex_state = 229},
  [141] = {.lex_state = 148},
  [142] = {.lex_state = 148},
  [143] = {.lex_state = 320},
  [144] = {.lex_state = 320},
  [145] = {.lex_state = 229},
  [146] = {.lex_state = 308},
  [147] = {.lex_state = 229},
  [148] = {.lex_state = 229},
  [149] = {.lex_state = 229},
  [150] = {.lex_state = 232},
  [151] = {.lex_state = 151},
  [152] = {.lex_state = 148},
  [153] = {.lex_state = 248},
  [154] = {.lex_state = 248},
  [155] = {.lex_state = 230},
  [156] = {.lex_state = 316},
  [157] = {.lex_state = 318},
  [158] = {.lex_state = 289},
  [159] = {.lex_state = 148},
  [160] = {.lex_state = 148},
  [161] = {.lex_state = 151},
  [162] = {.lex_state = 151},
  [163] = {.lex_state = 289},
  [164] = {.lex_state = 149},
  [165] = {.lex_state = 148},
  [166] = {.lex_state = 148},
  [167] = {.lex_state = 148},
  [168] = {.lex_state = 151},
  [169] = {.lex_state = 148},
  [170] = {.lex_state = 149},
  [171] = {.lex_state = 148},
  [172] = {.lex_state = 149},
  [173] = {.lex_state = 151},
  [174] = {.lex_state = 149},
  [175] = {.lex_state = 230},
  [176] = {.lex_state = 148},
  [177] = {.lex_state = 148},
  [178] = {.lex_state = 302},
  [179] = {.lex_state = 148},
  [180] = {.lex_state = 151},
  [181] = {.lex_state = 148},
  [182] = {.lex_state = 148},
  [183] = {.lex_state = 321},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 306},
  [186] = {.lex_state = 148},
  [187] = {.lex_state = 148},
  [188] = {.lex_state = 148},
  [189] = {.lex_state = 148},
  [190] = {.lex_state = 148},
  [191] = {.lex_state = 248},
  [192] = {.lex_state = 316},
  [193] = {.lex_state = 230},
  [194] = {.lex_state = 148},
  [195] = {.lex_state = 148},
  [196] = {.lex_state = 319},
  [197] = {.lex_state = 229},
  [198] = {.lex_state = 319},
  [199] = {.lex_state = 229},
  [200] = {.lex_state = 229},
  [201] = {.lex_state = 149},
  [202] = {.lex_state = 229},
  [203] = {.lex_state = 148},
  [204] = {.lex_state = 229},
  [205] = {.lex_state = 148},
  [206] = {.lex_state = 151},
  [207] = {.lex_state = 148},
  [208] = {.lex_state = 248},
  [209] = {.lex_state = 248},
  [210] = {.lex_state = 148},
  [211] = {.lex_state = 148},
  [212] = {.lex_state = 230},
  [213] = {.lex_state = 289},
  [214] = {.lex_state = 148},
  [215] = {.lex_state = 148},
  [216] = {.lex_state = 148},
  [217] = {.lex_state = 148},
  [218] = {.lex_state = 148},
  [219] = {.lex_state = 229},
  [220] = {.lex_state = 149},
  [221] = {.lex_state = 151},
  [222] = {.lex_state = 149},
  [223] = {.lex_state = 148},
  [224] = {.lex_state = 148},
  [225] = {.lex_state = 148},
  [226] = {.lex_state = 230},
  [227] = {.lex_state = 151},
  [228] = {.lex_state = 148},
  [229] = {.lex_state = 148},
  [230] = {.lex_state = 321},
  [231] = {.lex_state = 151},
  [232] = {.lex_state = 321},
  [233] = {.lex_state = 148},
  [234] = {.lex_state = 306},
  [235] = {.lex_state = 148},
  [236] = {.lex_state = 148},
  [237] = {.lex_state = 232},
  [238] = {.lex_state = 229},
  [239] = {.lex_state = 148},
  [240] = {.lex_state = 248},
  [241] = {.lex_state = 248},
  [242] = {.lex_state = 230},
  [243] = {.lex_state = 316},
  [244] = {.lex_state = 319},
  [245] = {.lex_state = 148},
  [246] = {.lex_state = 229},
  [247] = {.lex_state = 229},
  [248] = {.lex_state = 319},
  [249] = {.lex_state = 229},
  [250] = {.lex_state = 149},
  [251] = {.lex_state = 229},
  [252] = {.lex_state = 151},
  [253] = {.lex_state = 151},
  [254] = {.lex_state = 148},
  [255] = {.lex_state = 248},
  [256] = {.lex_state = 148},
  [257] = {.lex_state = 148},
  [258] = {.lex_state = 148},
  [259] = {.lex_state = 148},
  [260] = {.lex_state = 148},
  [261] = {.lex_state = 149},
  [262] = {.lex_state = 148},
  [263] = {.lex_state = 232},
  [264] = {.lex_state = 149},
  [265] = {.lex_state = 148},
  [266] = {.lex_state = 148},
  [267] = {.lex_state = 321},
  [268] = {.lex_state = 151},
  [269] = {.lex_state = 151},
  [270] = {.lex_state = 321},
  [271] = {.lex_state = 229},
  [272] = {.lex_state = 148},
  [273] = {.lex_state = 322},
  [274] = {.lex_state = 229},
  [275] = {.lex_state = 148},
  [276] = {.lex_state = 229},
  [277] = {.lex_state = 148},
  [278] = {.lex_state = 248},
  [279] = {.lex_state = 248},
  [280] = {.lex_state = 148},
  [281] = {.lex_state = 148},
  [282] = {.lex_state = 230},
  [283] = {.lex_state = 319},
  [284] = {.lex_state = 229},
  [285] = {.lex_state = 151},
  [286] = {.lex_state = 148},
  [287] = {.lex_state = 148},
  [288] = {.lex_state = 151},
  [289] = {.lex_state = 148},
  [290] = {.lex_state = 149},
  [291] = {.lex_state = 148},
  [292] = {.lex_state = 323},
  [293] = {.lex_state = 148},
  [294] = {.lex_state = 148},
  [295] = {.lex_state = 148},
  [296] = {.lex_state = 229},
  [297] = {.lex_state = 148},
  [298] = {.lex_state = 148},
  [299] = {.lex_state = 322},
  [300] = {.lex_state = 229},
  [301] = {.lex_state = 322},
  [302] = {.lex_state = 229},
  [303] = {.lex_state = 229},
  [304] = {.lex_state = 148},
  [305] = {.lex_state = 248},
  [306] = {.lex_state = 148},
  [307] = {.lex_state = 148},
  [308] = {.lex_state = 148},
  [309] = {.lex_state = 151},
  [310] = {.lex_state = 148},
  [311] = {.lex_state = 151},
  [312] = {.lex_state = 323},
  [313] = {.lex_state = 322},
  [314] = {.lex_state = 229},
  [315] = {.lex_state = 229},
  [316] = {.lex_state = 322},
  [317] = {.lex_state = 229},
  [318] = {.lex_state = 148},
  [319] = {.lex_state = 148},
  [320] = {.lex_state = 229},
  [321] = {.lex_state = 148},
  [322] = {.lex_state = 151},
  [323] = {.lex_state = 323},
  [324] = {.lex_state = 229},
  [325] = {.lex_state = 148},
  [326] = {.lex_state = 229},
  [327] = {.lex_state = 229},
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
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(5),
    [sym_string] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(7),
    [sym_signature_block] = ACTIONS(3),
  },
  [1] = {
    [sym_script] = STATE(21),
    [sym_script_block] = STATE(22),
    [sym_param_block] = STATE(23),
    [sym_statement_list] = STATE(24),
    [sym_statement] = STATE(25),
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
    [sym_label] = STATE(26),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(27),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(50),
  },
  [2] = {
    [sym_parameter_list] = STATE(29),
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
    [sym_statement_block] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(54),
  },
  [8] = {
    [sym_foreach_parameter] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [sym_statement_block] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [10] = {
    [sym_statement_block] = STATE(42),
    [sym_type_literal] = STATE(43),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [11] = {
    [sym_statement_block] = STATE(45),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(80),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(86),
  },
  [15] = {
    [sym_switch_parameter] = STATE(50),
    [sym_switch_condition] = STATE(51),
    [aux_sym_switch_repeat1] = STATE(52),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(98),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(104),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(110),
  },
  [19] = {
    [sym_suffix] = STATE(54),
    [aux_sym_number_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_statement_terminator] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(118),
    [sym_string] = ACTIONS(114),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(116),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_comment] = ACTIONS(54),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(54),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(128),
  },
  [23] = {
    [sym_statement_list] = STATE(57),
    [sym_statement] = STATE(25),
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
    [sym_label] = STATE(26),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(27),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(54),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(132),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_statement_terminator] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_string] = ACTIONS(134),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(138),
  },
  [26] = {
    [sym_while] = STATE(59),
    [sym_do] = STATE(59),
    [sym_for] = STATE(59),
    [sym_foreach] = STATE(59),
    [sym_switch] = STATE(59),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(54),
  },
  [27] = {
    [sym_statement] = STATE(25),
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
    [sym_label] = STATE(26),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(142),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(144),
  },
  [28] = {
    [sym_parameter_declaration] = STATE(64),
    [sym_attribute] = STATE(65),
    [sym_user_variable] = STATE(66),
    [aux_sym_parameter_declaration_repeat1] = STATE(67),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [29] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(156),
    [sym_string] = ACTIONS(152),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(54),
  },
  [30] = {
    [sym_parameter_list] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(158),
    [sym_comment] = ACTIONS(54),
  },
  [31] = {
    [sym_boolean_value] = STATE(71),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [32] = {
    [sym_boolean_value] = STATE(72),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [33] = {
    [sym_statement_list] = STATE(88),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [anon_sym_RBRACE] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [34] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(196),
    [sym_comment] = ACTIONS(54),
  },
  [35] = {
    [sym_pipeline] = STATE(94),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(198),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [36] = {
    [sym_user_variable] = STATE(96),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [37] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(54),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(54),
  },
  [39] = {
    [sym_statement_list] = STATE(100),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [anon_sym_RBRACE] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [40] = {
    [sym_catch] = STATE(103),
    [sym_finally] = STATE(104),
    [aux_sym_try_repeat1] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_statement_terminator] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(214),
    [sym_string] = ACTIONS(206),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(208),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(208),
  },
  [41] = {
    [sym_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(54),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_statement_terminator] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(222),
    [sym_string] = ACTIONS(218),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(220),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(220),
  },
  [43] = {
    [sym_statement_block] = STATE(107),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [44] = {
    [sym_statement_block] = STATE(108),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [45] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(226),
  },
  [46] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(54),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_statement_terminator] = ACTIONS(234),
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
    [anon_sym_COLON] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(238),
    [sym_string] = ACTIONS(234),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(236),
  },
  [48] = {
    [sym_boolean_value] = STATE(109),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [49] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKrR_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKwW_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKcC_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(242),
    [sym_comment] = ACTIONS(54),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [sym_comment] = ACTIONS(54),
  },
  [51] = {
    [sym_switch_body] = STATE(112),
    [anon_sym_LBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(54),
  },
  [52] = {
    [sym_switch_parameter] = STATE(50),
    [sym_switch_condition] = STATE(113),
    [aux_sym_switch_repeat1] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [53] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(250),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_statement_terminator] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(258),
    [sym_string] = ACTIONS(254),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(256),
  },
  [55] = {
    [sym_suffix] = STATE(54),
    [aux_sym_number_repeat1] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(260),
    [sym_statement_terminator] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(264),
    [sym_string] = ACTIONS(260),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(262),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_comment] = ACTIONS(54),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(270),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(272),
    [anon_sym_COLON] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(276),
    [sym_string] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(274),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_statement_terminator] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(282),
    [sym_string] = ACTIONS(278),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(280),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(280),
  },
  [60] = {
    [sym_statement] = STATE(25),
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
    [sym_label] = STATE(26),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(326),
    [sym_string] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(332),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(274),
  },
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(339),
    [sym_string] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(337),
    [sym_comment] = ACTIONS(54),
  },
  [62] = {
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(54),
  },
  [63] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(54),
  },
  [64] = {
    [aux_sym_parameter_list_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(54),
  },
  [65] = {
    [anon_sym_LBRACK] = ACTIONS(347),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(54),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [sym_comment] = ACTIONS(54),
  },
  [67] = {
    [sym_attribute] = STATE(65),
    [sym_user_variable] = STATE(120),
    [aux_sym_parameter_declaration_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [68] = {
    [sym_script_block] = STATE(122),
    [sym_param_block] = STATE(123),
    [sym_statement_list] = STATE(124),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [69] = {
    [anon_sym_LBRACE] = ACTIONS(353),
    [sym_comment] = ACTIONS(54),
  },
  [70] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(355),
    [sym_comment] = ACTIONS(54),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(357),
    [sym_comment] = ACTIONS(54),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(359),
    [sym_statement_terminator] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_string] = ACTIONS(359),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(361),
    [sym_comment] = ACTIONS(54),
  },
  [74] = {
    [sym_identifier] = ACTIONS(365),
    [sym_comment] = ACTIONS(54),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(367),
    [sym_comment] = ACTIONS(54),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(369),
    [sym_comment] = ACTIONS(54),
  },
  [77] = {
    [sym_statement_block] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(371),
    [sym_comment] = ACTIONS(54),
  },
  [79] = {
    [sym_foreach_parameter] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(54),
  },
  [80] = {
    [sym_statement_block] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [81] = {
    [sym_statement_block] = STATE(136),
    [sym_type_literal] = STATE(137),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [82] = {
    [sym_statement_block] = STATE(139),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_identifier] = ACTIONS(375),
    [sym_comment] = ACTIONS(54),
  },
  [83] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(54),
  },
  [84] = {
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
    [sym_identifier] = ACTIONS(377),
    [sym_string] = ACTIONS(84),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [85] = {
    [sym_switch_parameter] = STATE(50),
    [sym_switch_condition] = STATE(141),
    [aux_sym_switch_repeat1] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [86] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(54),
  },
  [87] = {
    [sym_suffix] = STATE(144),
    [aux_sym_number_repeat1] = STATE(145),
    [anon_sym_RBRACE] = ACTIONS(114),
    [sym_statement_terminator] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(118),
    [sym_string] = ACTIONS(114),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(54),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(54),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(134),
    [sym_statement_terminator] = ACTIONS(385),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(140),
    [sym_string] = ACTIONS(134),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(54),
  },
  [90] = {
    [sym_while] = STATE(148),
    [sym_do] = STATE(148),
    [sym_for] = STATE(148),
    [sym_foreach] = STATE(148),
    [sym_switch] = STATE(148),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(54),
  },
  [91] = {
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(387),
    [sym_comment] = ACTIONS(54),
  },
  [93] = {
    [sym_statement_block] = STATE(151),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [94] = {
    [sym_pipeline] = STATE(154),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(389),
    [sym_statement_terminator] = ACTIONS(391),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(393),
    [sym_statement_terminator] = ACTIONS(393),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(397),
    [sym_comment] = ACTIONS(54),
  },
  [96] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(54),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [sym_comment] = ACTIONS(54),
  },
  [98] = {
    [sym_user_variable] = STATE(156),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym_statement_terminator] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(363),
    [sym_string] = ACTIONS(359),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(361),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(361),
  },
  [100] = {
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_comment] = ACTIONS(54),
  },
  [101] = {
    [sym_statement_block] = STATE(158),
    [sym_type_literal] = STATE(159),
    [aux_sym_catch_repeat1] = STATE(160),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [102] = {
    [sym_statement_block] = STATE(161),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_statement_terminator] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(409),
    [sym_string] = ACTIONS(405),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(407),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(407),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_statement_terminator] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(415),
    [sym_string] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(413),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(413),
  },
  [105] = {
    [sym_catch] = STATE(103),
    [sym_finally] = STATE(162),
    [aux_sym_try_repeat1] = STATE(163),
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_statement_terminator] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(415),
    [sym_string] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(413),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(413),
  },
  [106] = {
    [sym_array_declaration] = STATE(166),
    [sym_type_literal] = STATE(166),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_comment] = ACTIONS(54),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_statement_terminator] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(425),
    [sym_string] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(423),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(423),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_statement_terminator] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(431),
    [sym_string] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(429),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(429),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(433),
    [sym_comment] = ACTIONS(54),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [sym_comment] = ACTIONS(54),
  },
  [111] = {
    [sym_switch_clause] = STATE(170),
    [sym_switch_clause_condition] = STATE(171),
    [aux_sym_switch_body_repeat1] = STATE(172),
    [anon_sym_RBRACE] = ACTIONS(437),
    [sym_identifier] = ACTIONS(439),
    [sym_comment] = ACTIONS(54),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_statement_terminator] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(445),
    [sym_string] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(443),
  },
  [113] = {
    [sym_switch_body] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(54),
  },
  [114] = {
    [sym_switch_parameter] = STATE(50),
    [aux_sym_switch_repeat1] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [sym_comment] = ACTIONS(54),
  },
  [115] = {
    [sym_suffix] = STATE(54),
    [aux_sym_number_repeat1] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(452),
    [sym_statement_terminator] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(456),
    [sym_string] = ACTIONS(452),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(458),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(454),
  },
  [116] = {
    [sym_attribute_arguments] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym_comment] = ACTIONS(54),
  },
  [117] = {
    [sym_parameter_declaration] = STATE(177),
    [sym_attribute] = STATE(65),
    [sym_user_variable] = STATE(66),
    [aux_sym_parameter_declaration_repeat1] = STATE(67),
    [anon_sym_LBRACK] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [118] = {
    [anon_sym_LBRACE] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(472),
    [sym_string] = ACTIONS(468),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(470),
    [sym_comment] = ACTIONS(54),
  },
  [119] = {
    [aux_sym_parameter_list_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_comment] = ACTIONS(54),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_comment] = ACTIONS(54),
  },
  [121] = {
    [sym_attribute] = STATE(65),
    [aux_sym_parameter_declaration_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(481),
    [sym_comment] = ACTIONS(54),
  },
  [122] = {
    [anon_sym_RBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(54),
  },
  [123] = {
    [sym_statement_list] = STATE(181),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym_comment] = ACTIONS(54),
  },
  [125] = {
    [sym_script_block] = STATE(182),
    [sym_param_block] = STATE(123),
    [sym_statement_list] = STATE(124),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [126] = {
    [sym_statement_block] = STATE(183),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [127] = {
    [sym_statement_block] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [128] = {
    [sym_parameter_list] = STATE(186),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(485),
    [sym_comment] = ACTIONS(54),
  },
  [129] = {
    [sym_boolean_value] = STATE(187),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [130] = {
    [sym_boolean_value] = STATE(188),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [131] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(487),
    [sym_comment] = ACTIONS(54),
  },
  [132] = {
    [sym_pipeline] = STATE(191),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [133] = {
    [sym_user_variable] = STATE(192),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [134] = {
    [anon_sym_LPAREN] = ACTIONS(491),
    [sym_comment] = ACTIONS(54),
  },
  [135] = {
    [sym_catch] = STATE(196),
    [sym_finally] = STATE(197),
    [aux_sym_try_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(206),
    [sym_statement_terminator] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(214),
    [sym_string] = ACTIONS(206),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(208),
    [sym_comment] = ACTIONS(54),
  },
  [136] = {
    [anon_sym_RBRACE] = ACTIONS(218),
    [sym_statement_terminator] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(222),
    [sym_string] = ACTIONS(218),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(220),
    [sym_comment] = ACTIONS(54),
  },
  [137] = {
    [sym_statement_block] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [138] = {
    [sym_statement_block] = STATE(200),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [139] = {
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(54),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym_statement_terminator] = ACTIONS(234),
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
    [anon_sym_COLON] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(238),
    [sym_string] = ACTIONS(234),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(54),
  },
  [141] = {
    [sym_switch_body] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(54),
  },
  [142] = {
    [sym_switch_parameter] = STATE(50),
    [sym_switch_condition] = STATE(203),
    [aux_sym_switch_repeat1] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(54),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [sym_statement_terminator] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(258),
    [sym_string] = ACTIONS(254),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(254),
    [sym_comment] = ACTIONS(54),
  },
  [145] = {
    [sym_suffix] = STATE(144),
    [aux_sym_number_repeat1] = STATE(204),
    [anon_sym_RBRACE] = ACTIONS(260),
    [sym_statement_terminator] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(264),
    [sym_string] = ACTIONS(260),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(54),
  },
  [146] = {
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_statement_terminator] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(503),
    [sym_string] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(501),
    [sym_comment] = ACTIONS(54),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(272),
    [anon_sym_COLON] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(276),
    [sym_string] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(54),
  },
  [148] = {
    [anon_sym_RBRACE] = ACTIONS(278),
    [sym_statement_terminator] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(282),
    [sym_string] = ACTIONS(278),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [149] = {
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(526),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(532),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(532),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(532),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(544),
    [sym_string] = ACTIONS(547),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(550),
    [sym_comment] = ACTIONS(54),
  },
  [150] = {
    [sym_boolean_value] = STATE(205),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [sym_statement_terminator] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(557),
    [sym_string] = ACTIONS(553),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(555),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(555),
  },
  [152] = {
    [sym_statement_block] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [153] = {
    [sym_pipeline] = STATE(208),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(559),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [154] = {
    [sym_pipeline] = STATE(210),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(559),
    [sym_statement_terminator] = ACTIONS(561),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [155] = {
    [sym_user_variable] = STATE(211),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [156] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(54),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [sym_statement_terminator] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(503),
    [sym_string] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(501),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(501),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [sym_statement_terminator] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(569),
    [sym_string] = ACTIONS(565),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(567),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(567),
  },
  [159] = {
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [sym_comment] = ACTIONS(54),
  },
  [160] = {
    [sym_statement_block] = STATE(213),
    [sym_type_literal] = STATE(159),
    [aux_sym_catch_repeat1] = STATE(214),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [sym_statement_terminator] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(577),
    [sym_string] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(575),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(575),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [sym_statement_terminator] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(583),
    [sym_string] = ACTIONS(579),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(581),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(581),
  },
  [163] = {
    [sym_catch] = STATE(103),
    [aux_sym_try_repeat1] = STATE(163),
    [ts_builtin_sym_end] = ACTIONS(585),
    [sym_statement_terminator] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(592),
    [sym_string] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(587),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(587),
  },
  [164] = {
    [aux_sym_array_declaration_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(596),
    [sym_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(54),
  },
  [165] = {
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [sym_comment] = ACTIONS(54),
  },
  [166] = {
    [anon_sym_RBRACK] = ACTIONS(600),
    [sym_comment] = ACTIONS(54),
  },
  [167] = {
    [anon_sym_LBRACE] = ACTIONS(602),
    [sym_comment] = ACTIONS(54),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [sym_statement_terminator] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(608),
    [sym_string] = ACTIONS(604),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(606),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(606),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(54),
  },
  [170] = {
    [anon_sym_RBRACE] = ACTIONS(612),
    [sym_identifier] = ACTIONS(614),
    [sym_comment] = ACTIONS(54),
  },
  [171] = {
    [sym_statement_block] = STATE(220),
    [anon_sym_LBRACE] = ACTIONS(616),
    [sym_comment] = ACTIONS(54),
  },
  [172] = {
    [sym_switch_clause] = STATE(170),
    [sym_switch_clause_condition] = STATE(171),
    [aux_sym_switch_body_repeat1] = STATE(222),
    [anon_sym_RBRACE] = ACTIONS(618),
    [sym_identifier] = ACTIONS(439),
    [sym_comment] = ACTIONS(54),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [sym_statement_terminator] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(620),
    [anon_sym_COLON] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(624),
    [sym_string] = ACTIONS(620),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(622),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(622),
  },
  [174] = {
    [sym_attribute_argument] = STATE(225),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(54),
  },
  [175] = {
    [anon_sym_LBRACK] = ACTIONS(630),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(632),
    [sym_comment] = ACTIONS(54),
  },
  [176] = {
    [anon_sym_RBRACK] = ACTIONS(634),
    [sym_comment] = ACTIONS(54),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(54),
  },
  [178] = {
    [anon_sym_LBRACE] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(642),
    [sym_string] = ACTIONS(638),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(640),
    [sym_comment] = ACTIONS(54),
  },
  [179] = {
    [aux_sym_parameter_list_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(54),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [sym_statement_terminator] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(649),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(649),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(651),
    [sym_string] = ACTIONS(647),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(649),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(649),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(268),
    [sym_comment] = ACTIONS(54),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(653),
    [sym_comment] = ACTIONS(54),
  },
  [183] = {
    [sym_elseif] = STATE(230),
    [sym_else] = STATE(231),
    [aux_sym_if_repeat1] = STATE(232),
    [ts_builtin_sym_end] = ACTIONS(655),
    [sym_statement_terminator] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(655),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(661),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(661),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [sym_statement_terminator] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(667),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(667),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(669),
    [sym_string] = ACTIONS(665),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(667),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(667),
  },
  [185] = {
    [sym_script_block] = STATE(233),
    [sym_param_block] = STATE(123),
    [sym_statement_list] = STATE(124),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(671),
    [sym_comment] = ACTIONS(54),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(673),
    [sym_comment] = ACTIONS(54),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(675),
    [sym_comment] = ACTIONS(54),
  },
  [189] = {
    [anon_sym_LPAREN] = ACTIONS(677),
    [sym_comment] = ACTIONS(54),
  },
  [190] = {
    [sym_statement_block] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [191] = {
    [sym_pipeline] = STATE(241),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(679),
    [sym_statement_terminator] = ACTIONS(681),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [192] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(683),
    [sym_comment] = ACTIONS(54),
  },
  [193] = {
    [sym_user_variable] = STATE(243),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [194] = {
    [sym_statement_block] = STATE(244),
    [sym_type_literal] = STATE(159),
    [aux_sym_catch_repeat1] = STATE(245),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [195] = {
    [sym_statement_block] = STATE(246),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(405),
    [sym_statement_terminator] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(409),
    [sym_string] = ACTIONS(405),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(407),
    [sym_comment] = ACTIONS(54),
  },
  [197] = {
    [anon_sym_RBRACE] = ACTIONS(411),
    [sym_statement_terminator] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(415),
    [sym_string] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(413),
    [sym_comment] = ACTIONS(54),
  },
  [198] = {
    [sym_catch] = STATE(196),
    [sym_finally] = STATE(247),
    [aux_sym_try_repeat1] = STATE(248),
    [anon_sym_RBRACE] = ACTIONS(411),
    [sym_statement_terminator] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(415),
    [sym_string] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(413),
    [sym_comment] = ACTIONS(54),
  },
  [199] = {
    [anon_sym_RBRACE] = ACTIONS(421),
    [sym_statement_terminator] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(425),
    [sym_string] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(423),
    [sym_comment] = ACTIONS(54),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(427),
    [sym_statement_terminator] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(431),
    [sym_string] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(429),
    [sym_comment] = ACTIONS(54),
  },
  [201] = {
    [sym_switch_clause] = STATE(170),
    [sym_switch_clause_condition] = STATE(171),
    [aux_sym_switch_body_repeat1] = STATE(250),
    [anon_sym_RBRACE] = ACTIONS(685),
    [sym_identifier] = ACTIONS(439),
    [sym_comment] = ACTIONS(54),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(441),
    [sym_statement_terminator] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(445),
    [sym_string] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(54),
  },
  [203] = {
    [sym_switch_body] = STATE(251),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(54),
  },
  [204] = {
    [sym_suffix] = STATE(144),
    [aux_sym_number_repeat1] = STATE(204),
    [anon_sym_RBRACE] = ACTIONS(452),
    [sym_statement_terminator] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(456),
    [sym_string] = ACTIONS(452),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [sym_comment] = ACTIONS(54),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(693),
    [sym_comment] = ACTIONS(54),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(695),
    [sym_statement_terminator] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(699),
    [sym_string] = ACTIONS(695),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(697),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(697),
  },
  [207] = {
    [sym_statement_block] = STATE(253),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [208] = {
    [sym_pipeline] = STATE(256),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_statement_terminator] = ACTIONS(703),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [209] = {
    [sym_pipeline] = STATE(256),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(701),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_comment] = ACTIONS(54),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym_comment] = ACTIONS(54),
  },
  [212] = {
    [sym_user_variable] = STATE(258),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(707),
    [sym_statement_terminator] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(711),
    [sym_string] = ACTIONS(707),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(709),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(709),
  },
  [214] = {
    [sym_type_literal] = STATE(159),
    [aux_sym_catch_repeat1] = STATE(214),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(718),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_comment] = ACTIONS(54),
  },
  [216] = {
    [anon_sym_RBRACK] = ACTIONS(720),
    [sym_comment] = ACTIONS(54),
  },
  [217] = {
    [aux_sym_array_declaration_repeat1] = STATE(260),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [218] = {
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [anon_sym_LBRACE] = ACTIONS(724),
    [sym_comment] = ACTIONS(54),
  },
  [219] = {
    [sym_statement_list] = STATE(262),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [anon_sym_RBRACE] = ACTIONS(726),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [220] = {
    [anon_sym_RBRACE] = ACTIONS(728),
    [sym_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(54),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [sym_statement_terminator] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(736),
    [sym_string] = ACTIONS(732),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(734),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(734),
  },
  [222] = {
    [sym_switch_clause] = STATE(170),
    [sym_switch_clause_condition] = STATE(171),
    [aux_sym_switch_body_repeat1] = STATE(222),
    [anon_sym_RBRACE] = ACTIONS(738),
    [sym_identifier] = ACTIONS(740),
    [sym_comment] = ACTIONS(54),
  },
  [223] = {
    [anon_sym_RBRACK] = ACTIONS(743),
    [sym_comment] = ACTIONS(54),
  },
  [224] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(745),
    [anon_sym_EQ] = ACTIONS(747),
    [sym_comment] = ACTIONS(54),
  },
  [225] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(266),
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(751),
    [sym_comment] = ACTIONS(54),
  },
  [226] = {
    [anon_sym_LBRACK] = ACTIONS(753),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(755),
    [sym_comment] = ACTIONS(54),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(757),
    [sym_statement_terminator] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(761),
    [sym_string] = ACTIONS(757),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(759),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(759),
  },
  [228] = {
    [sym_statement_block] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [229] = {
    [sym_statement_block] = STATE(268),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(763),
    [sym_statement_terminator] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(763),
    [anon_sym_COLON] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(767),
    [sym_string] = ACTIONS(763),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(765),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(765),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(769),
    [sym_statement_terminator] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(771),
  },
  [232] = {
    [sym_elseif] = STATE(230),
    [sym_else] = STATE(269),
    [aux_sym_if_repeat1] = STATE(270),
    [ts_builtin_sym_end] = ACTIONS(769),
    [sym_statement_terminator] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(659),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(771),
  },
  [233] = {
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(54),
  },
  [234] = {
    [sym_script_block] = STATE(272),
    [sym_param_block] = STATE(123),
    [sym_statement_list] = STATE(124),
    [sym_statement] = STATE(89),
    [sym_function_definition] = STATE(86),
    [sym_if] = STATE(86),
    [sym_while] = STATE(86),
    [sym_do] = STATE(86),
    [sym_for] = STATE(86),
    [sym_foreach] = STATE(86),
    [sym_try] = STATE(86),
    [sym_trap] = STATE(86),
    [sym_data] = STATE(86),
    [sym_labeled_statement] = STATE(86),
    [sym_label] = STATE(90),
    [sym_flow_control_statement] = STATE(86),
    [sym_flow_break_continue] = STATE(83),
    [sym_switch] = STATE(86),
    [sym_boolean_value] = STATE(86),
    [sym_user_variable] = STATE(86),
    [sym_number] = STATE(86),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_string] = ACTIONS(192),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(54),
  },
  [235] = {
    [sym_statement_block] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [236] = {
    [sym_statement_block] = STATE(274),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [237] = {
    [sym_boolean_value] = STATE(275),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(54),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(553),
    [sym_statement_terminator] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(557),
    [sym_string] = ACTIONS(553),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(555),
    [sym_comment] = ACTIONS(54),
  },
  [239] = {
    [sym_statement_block] = STATE(276),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [240] = {
    [sym_pipeline] = STATE(278),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(777),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [241] = {
    [sym_pipeline] = STATE(280),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(777),
    [sym_statement_terminator] = ACTIONS(779),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [242] = {
    [sym_user_variable] = STATE(281),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [243] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(781),
    [sym_comment] = ACTIONS(54),
  },
  [244] = {
    [anon_sym_RBRACE] = ACTIONS(565),
    [sym_statement_terminator] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(565),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(569),
    [sym_string] = ACTIONS(565),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(567),
    [sym_comment] = ACTIONS(54),
  },
  [245] = {
    [sym_statement_block] = STATE(283),
    [sym_type_literal] = STATE(159),
    [aux_sym_catch_repeat1] = STATE(214),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(573),
    [sym_statement_terminator] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(577),
    [sym_string] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(575),
    [sym_comment] = ACTIONS(54),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(579),
    [sym_statement_terminator] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(583),
    [sym_string] = ACTIONS(579),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(581),
    [sym_comment] = ACTIONS(54),
  },
  [248] = {
    [sym_catch] = STATE(196),
    [aux_sym_try_repeat1] = STATE(248),
    [anon_sym_RBRACE] = ACTIONS(585),
    [sym_statement_terminator] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(592),
    [sym_string] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(587),
    [sym_comment] = ACTIONS(54),
  },
  [249] = {
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_statement_terminator] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(606),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(608),
    [sym_string] = ACTIONS(604),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(606),
    [sym_comment] = ACTIONS(54),
  },
  [250] = {
    [sym_switch_clause] = STATE(170),
    [sym_switch_clause_condition] = STATE(171),
    [aux_sym_switch_body_repeat1] = STATE(222),
    [anon_sym_RBRACE] = ACTIONS(786),
    [sym_identifier] = ACTIONS(439),
    [sym_comment] = ACTIONS(54),
  },
  [251] = {
    [anon_sym_RBRACE] = ACTIONS(620),
    [sym_statement_terminator] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(620),
    [anon_sym_COLON] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(620),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(622),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(624),
    [sym_string] = ACTIONS(620),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(622),
    [sym_comment] = ACTIONS(54),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(788),
    [sym_statement_terminator] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(788),
    [anon_sym_COLON] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(792),
    [sym_string] = ACTIONS(788),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(790),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(790),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(794),
    [sym_statement_terminator] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(796),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(794),
    [anon_sym_COLON] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(796),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(798),
    [sym_string] = ACTIONS(794),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(796),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(796),
  },
  [254] = {
    [sym_statement_block] = STATE(285),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [255] = {
    [sym_pipeline] = STATE(287),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(800),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(54),
  },
  [257] = {
    [sym_statement_block] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [258] = {
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_comment] = ACTIONS(54),
  },
  [259] = {
    [anon_sym_RBRACK] = ACTIONS(804),
    [sym_comment] = ACTIONS(54),
  },
  [260] = {
    [aux_sym_array_declaration_repeat1] = STATE(260),
    [anon_sym_COMMA] = ACTIONS(806),
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_comment] = ACTIONS(54),
  },
  [261] = {
    [anon_sym_RBRACE] = ACTIONS(359),
    [sym_identifier] = ACTIONS(361),
    [sym_comment] = ACTIONS(54),
  },
  [262] = {
    [anon_sym_RBRACE] = ACTIONS(811),
    [sym_comment] = ACTIONS(54),
  },
  [263] = {
    [sym_number] = STATE(291),
    [sym_identifier] = ACTIONS(813),
    [sym_string] = ACTIONS(815),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(817),
    [sym_comment] = ACTIONS(54),
  },
  [264] = {
    [sym_attribute_argument] = STATE(293),
    [sym_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(54),
  },
  [265] = {
    [anon_sym_RBRACK] = ACTIONS(819),
    [sym_comment] = ACTIONS(54),
  },
  [266] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym_comment] = ACTIONS(54),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(823),
    [sym_statement_terminator] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(823),
    [anon_sym_COLON] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(827),
    [sym_string] = ACTIONS(823),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(825),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(825),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(829),
    [sym_statement_terminator] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(833),
    [sym_string] = ACTIONS(829),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(831),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(831),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(835),
    [sym_statement_terminator] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(835),
    [anon_sym_COLON] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(839),
    [sym_string] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(837),
  },
  [270] = {
    [sym_elseif] = STATE(230),
    [aux_sym_if_repeat1] = STATE(270),
    [ts_builtin_sym_end] = ACTIONS(841),
    [sym_statement_terminator] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(848),
    [sym_string] = ACTIONS(841),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(846),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(846),
  },
  [271] = {
    [anon_sym_RBRACE] = ACTIONS(647),
    [sym_statement_terminator] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(649),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(649),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(651),
    [sym_string] = ACTIONS(647),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(649),
    [sym_comment] = ACTIONS(54),
  },
  [272] = {
    [anon_sym_RBRACE] = ACTIONS(850),
    [sym_comment] = ACTIONS(54),
  },
  [273] = {
    [sym_elseif] = STATE(299),
    [sym_else] = STATE(300),
    [aux_sym_if_repeat1] = STATE(301),
    [anon_sym_RBRACE] = ACTIONS(655),
    [sym_statement_terminator] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(852),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(663),
    [sym_string] = ACTIONS(655),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(661),
    [sym_comment] = ACTIONS(54),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(665),
    [sym_statement_terminator] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(667),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(667),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(669),
    [sym_string] = ACTIONS(665),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(667),
    [sym_comment] = ACTIONS(54),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(54),
  },
  [276] = {
    [anon_sym_RBRACE] = ACTIONS(695),
    [sym_statement_terminator] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(699),
    [sym_string] = ACTIONS(695),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(697),
    [sym_comment] = ACTIONS(54),
  },
  [277] = {
    [sym_statement_block] = STATE(303),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [278] = {
    [sym_pipeline] = STATE(306),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(858),
    [sym_statement_terminator] = ACTIONS(860),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [279] = {
    [sym_pipeline] = STATE(306),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(858),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(858),
    [sym_comment] = ACTIONS(54),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(862),
    [sym_comment] = ACTIONS(54),
  },
  [282] = {
    [sym_user_variable] = STATE(308),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(54),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(707),
    [sym_statement_terminator] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(711),
    [sym_string] = ACTIONS(707),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(709),
    [sym_comment] = ACTIONS(54),
  },
  [284] = {
    [anon_sym_RBRACE] = ACTIONS(732),
    [sym_statement_terminator] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(736),
    [sym_string] = ACTIONS(732),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(734),
    [sym_comment] = ACTIONS(54),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(864),
    [sym_statement_terminator] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(866),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(864),
    [anon_sym_COLON] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(866),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(868),
    [sym_string] = ACTIONS(864),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(866),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(866),
  },
  [286] = {
    [sym_statement_block] = STATE(309),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(870),
    [sym_comment] = ACTIONS(54),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [sym_statement_terminator] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(872),
    [anon_sym_COLON] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(876),
    [sym_string] = ACTIONS(872),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(874),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(874),
  },
  [289] = {
    [sym_statement_block] = STATE(311),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [290] = {
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(54),
  },
  [291] = {
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [sym_comment] = ACTIONS(54),
  },
  [292] = {
    [sym_suffix] = STATE(144),
    [aux_sym_number_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(54),
  },
  [293] = {
    [anon_sym_COMMA] = ACTIONS(880),
    [anon_sym_RPAREN] = ACTIONS(880),
    [sym_comment] = ACTIONS(54),
  },
  [294] = {
    [anon_sym_RBRACK] = ACTIONS(882),
    [sym_comment] = ACTIONS(54),
  },
  [295] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(880),
    [sym_comment] = ACTIONS(54),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(757),
    [sym_statement_terminator] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(761),
    [sym_string] = ACTIONS(757),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(759),
    [sym_comment] = ACTIONS(54),
  },
  [297] = {
    [sym_statement_block] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [298] = {
    [sym_statement_block] = STATE(314),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [299] = {
    [anon_sym_RBRACE] = ACTIONS(763),
    [sym_statement_terminator] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(763),
    [anon_sym_COLON] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(765),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(767),
    [sym_string] = ACTIONS(763),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(765),
    [sym_comment] = ACTIONS(54),
  },
  [300] = {
    [anon_sym_RBRACE] = ACTIONS(769),
    [sym_statement_terminator] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(54),
  },
  [301] = {
    [sym_elseif] = STATE(299),
    [sym_else] = STATE(315),
    [aux_sym_if_repeat1] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(769),
    [sym_statement_terminator] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(852),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(854),
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
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(54),
  },
  [302] = {
    [anon_sym_RBRACE] = ACTIONS(788),
    [sym_statement_terminator] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(788),
    [anon_sym_COLON] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(792),
    [sym_string] = ACTIONS(788),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(790),
    [sym_comment] = ACTIONS(54),
  },
  [303] = {
    [anon_sym_RBRACE] = ACTIONS(794),
    [sym_statement_terminator] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(796),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(794),
    [anon_sym_COLON] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(794),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(796),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(798),
    [sym_string] = ACTIONS(794),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(796),
    [sym_comment] = ACTIONS(54),
  },
  [304] = {
    [sym_statement_block] = STATE(317),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [305] = {
    [sym_pipeline] = STATE(319),
    [sym_boolean_value] = STATE(95),
    [sym_user_variable] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(887),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(887),
    [sym_comment] = ACTIONS(54),
  },
  [307] = {
    [sym_statement_block] = STATE(320),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(889),
    [sym_comment] = ACTIONS(54),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(891),
    [sym_statement_terminator] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(895),
    [sym_string] = ACTIONS(891),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(893),
  },
  [310] = {
    [sym_statement_block] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(54),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(897),
    [sym_statement_terminator] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(901),
    [sym_string] = ACTIONS(897),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(899),
  },
  [312] = {
    [sym_suffix] = STATE(144),
    [aux_sym_number_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(54),
  },
  [313] = {
    [anon_sym_RBRACE] = ACTIONS(823),
    [sym_statement_terminator] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(823),
    [anon_sym_COLON] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(827),
    [sym_string] = ACTIONS(823),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(825),
    [sym_comment] = ACTIONS(54),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [sym_statement_terminator] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(833),
    [sym_string] = ACTIONS(829),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(831),
    [sym_comment] = ACTIONS(54),
  },
  [315] = {
    [anon_sym_RBRACE] = ACTIONS(835),
    [sym_statement_terminator] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(835),
    [anon_sym_COLON] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(837),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(839),
    [sym_string] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(54),
  },
  [316] = {
    [sym_elseif] = STATE(299),
    [aux_sym_if_repeat1] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(841),
    [sym_statement_terminator] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(848),
    [sym_string] = ACTIONS(841),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(846),
    [sym_comment] = ACTIONS(54),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(864),
    [sym_statement_terminator] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(866),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(864),
    [anon_sym_COLON] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(864),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(866),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(868),
    [sym_string] = ACTIONS(864),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(866),
    [sym_comment] = ACTIONS(54),
  },
  [318] = {
    [sym_statement_block] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [319] = {
    [anon_sym_RPAREN] = ACTIONS(906),
    [sym_comment] = ACTIONS(54),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(872),
    [sym_statement_terminator] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(872),
    [anon_sym_COLON] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(872),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(876),
    [sym_string] = ACTIONS(872),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(874),
    [sym_comment] = ACTIONS(54),
  },
  [321] = {
    [sym_statement_block] = STATE(326),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(908),
    [sym_statement_terminator] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(908),
    [anon_sym_COLON] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(912),
    [sym_string] = ACTIONS(908),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(910),
    [sym_comment] = ACTIONS(48),
    [sym_signature_block] = ACTIONS(910),
  },
  [323] = {
    [sym_suffix] = STATE(144),
    [aux_sym_number_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(687),
    [sym_comment] = ACTIONS(54),
  },
  [324] = {
    [anon_sym_RBRACE] = ACTIONS(891),
    [sym_statement_terminator] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(895),
    [sym_string] = ACTIONS(891),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(54),
  },
  [325] = {
    [sym_statement_block] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(54),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(897),
    [sym_statement_terminator] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(901),
    [sym_string] = ACTIONS(897),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(54),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(908),
    [sym_statement_terminator] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(908),
    [anon_sym_COLON] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(910),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(912),
    [sym_string] = ACTIONS(908),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(910),
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
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_number, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_number, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_number, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 2),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 2),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 2),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_suffix, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_suffix, 1),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_suffix, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 1),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_number, 2),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_number, 2),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_number, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 2),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_statement, 2),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [284] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(3),
  [287] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(4),
  [290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [293] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [296] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [299] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [302] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [305] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [311] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(12),
  [314] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(13),
  [317] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [320] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [323] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(16),
  [326] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [329] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(18),
  [332] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(19),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pipeline, 1),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 3),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_parameter, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 3),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2),
  [449] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(49),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2),
  [458] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(53),
  [461] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(53),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [478] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(62),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [505] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(74),
  [508] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(75),
  [511] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(76),
  [514] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(77),
  [517] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(78),
  [520] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(79),
  [523] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(80),
  [526] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(81),
  [529] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(82),
  [532] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(83),
  [535] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(84),
  [538] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(85),
  [541] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(70),
  [544] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(63),
  [547] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(86),
  [550] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(87),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 1),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [589] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(101),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_condition, 3),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 2),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause_condition, 1),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 4),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(117),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [687] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(143),
  [690] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(143),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [713] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2), SHIFT_REPEAT(41),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 4),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause, 2),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_clause, 2),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 3),
  [736] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [740] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(169),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 6),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [783] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(194),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [792] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 3),
  [806] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(215),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [843] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(228),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [848] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [868] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [876] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [884] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(264),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [903] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(297),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
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
