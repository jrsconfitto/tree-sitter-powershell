#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 357
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
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
  anon_sym_AT_DQUOTE = 79,
  anon_sym_DQUOTE_AT = 80,
  sym_expandable_string_chars = 81,
  anon_sym_DOLLAR = 82,
  aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH = 83,
  aux_sym_SLASH_LBRACKlL_RBRACK_SLASH = 84,
  aux_sym_SLASH_LBRACKdD_RBRACK_SLASH = 85,
  aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH = 86,
  aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH = 87,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH = 88,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH = 89,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH = 90,
  sym_comment = 91,
  sym_signature_block = 92,
  sym_script = 93,
  sym_script_block = 94,
  sym_param_block = 95,
  sym_parameter_list = 96,
  sym_parameter_declaration = 97,
  sym_attribute = 98,
  sym_array_declaration = 99,
  sym_attribute_arguments = 100,
  sym_attribute_argument = 101,
  sym_statement_block = 102,
  sym_statement_list = 103,
  sym_statement = 104,
  sym_pipeline = 105,
  sym_function_definition = 106,
  sym_if = 107,
  sym_elseif = 108,
  sym_else = 109,
  sym_while = 110,
  sym_do = 111,
  sym_for = 112,
  sym_foreach = 113,
  sym_foreach_parameter = 114,
  sym_try = 115,
  sym_catch = 116,
  sym_finally = 117,
  sym_trap = 118,
  sym_data = 119,
  sym_labeled_statement = 120,
  sym_label = 121,
  sym_flow_control_statement = 122,
  sym_flow_break_continue = 123,
  sym_switch = 124,
  sym_switch_parameter = 125,
  sym_switch_condition = 126,
  sym_switch_body = 127,
  sym_switch_clause = 128,
  sym_switch_clause_condition = 129,
  sym_type_literal = 130,
  sym_boolean_value = 131,
  sym_user_variable = 132,
  sym_expandable_here_string = 133,
  sym_expandable_string_part = 134,
  sym_number = 135,
  sym_suffix = 136,
  aux_sym_parameter_list_repeat1 = 137,
  aux_sym_parameter_declaration_repeat1 = 138,
  aux_sym_array_declaration_repeat1 = 139,
  aux_sym_attribute_arguments_repeat1 = 140,
  aux_sym_statement_list_repeat1 = 141,
  aux_sym_if_repeat1 = 142,
  aux_sym_try_repeat1 = 143,
  aux_sym_catch_repeat1 = 144,
  aux_sym_switch_repeat1 = 145,
  aux_sym_switch_body_repeat1 = 146,
  aux_sym_expandable_here_string_repeat1 = 147,
  aux_sym_number_repeat1 = 148,
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
  [anon_sym_AT_DQUOTE] = "@\"",
  [anon_sym_DQUOTE_AT] = "\"@",
  [sym_expandable_string_chars] = "expandable_string_chars",
  [anon_sym_DOLLAR] = "$",
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
  [sym_expandable_here_string] = "expandable_here_string",
  [sym_expandable_string_part] = "expandable_string_part",
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
  [aux_sym_expandable_here_string_repeat1] = "expandable_here_string_repeat1",
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
  [anon_sym_AT_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_expandable_string_chars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
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
  [sym_expandable_here_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expandable_string_part] = {
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
  [aux_sym_expandable_here_string_repeat1] = {
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
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '@')
        ADVANCE(40);
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
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '@')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE_AT);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'I')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'G')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_signature_block);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '+')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'X')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(25);
      if (lookahead == 'x')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_statement_terminator);
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
      if (lookahead == '\"')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
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
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 64:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 74:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 89:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 96:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 104:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 110:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(111);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(117);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(119);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 120:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(121);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == '\"')
        ADVANCE(135);
      if (lookahead == '\\')
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead != 0)
        ADVANCE(134);
      END_STATE();
    case 137:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 138:
      if (lookahead == '\'')
        ADVANCE(135);
      if (lookahead == '\\')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        ADVANCE(138);
      if (lookahead != 0)
        ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == '\"')
        ADVANCE(41);
      if (lookahead == '\'')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '@')
        ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '\'')
        ADVANCE(143);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '@')
        ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == '@')
        ADVANCE(135);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 151:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(39);
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
        SKIP(151);
      END_STATE();
    case 152:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(33);
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
        SKIP(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(156);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(211);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(153);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(170);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(184);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(212);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(217);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(221);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 232:
      if (lookahead == '\"')
        ADVANCE(233);
      if (lookahead == '#')
        ADVANCE(237);
      if (lookahead == '$')
        ADVANCE(240);
      if (lookahead == '<')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(234);
      END_STATE();
    case 233:
      if (lookahead == '@')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(235);
      if (lookahead == '$')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '(')
        ADVANCE(234);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\n')
        ADVANCE(234);
      if (lookahead == '\"')
        ADVANCE(238);
      if (lookahead == '$')
        ADVANCE(239);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(234);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(234);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '(')
        ADVANCE(234);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(235);
      if (lookahead == '#')
        ADVANCE(242);
      if (lookahead == '$')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(234);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(243);
      if (lookahead == '#')
        ADVANCE(244);
      if (lookahead == '$')
        ADVANCE(247);
      if (lookahead == '@')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(242);
      END_STATE();
    case 243:
      if (lookahead == '#')
        ADVANCE(244);
      if (lookahead == '@')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(235);
      if (lookahead == '#')
        ADVANCE(244);
      if (lookahead == '$')
        ADVANCE(236);
      if (lookahead == '>')
        ADVANCE(234);
      if (lookahead == '?')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '>' || lookahead > '@'))
        ADVANCE(234);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(235);
      if (lookahead == '$')
        ADVANCE(236);
      if (lookahead == ':')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(234);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(243);
      if (lookahead == '$')
        ADVANCE(247);
      if (lookahead == '@')
        ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '<')
        ADVANCE(234);
      if (lookahead != 0)
        ADVANCE(242);
      END_STATE();
    case 247:
      if (lookahead == '#')
        ADVANCE(244);
      if (lookahead == '(')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(242);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(233);
      if (lookahead == '#')
        ADVANCE(237);
      if (lookahead == '$')
        ADVANCE(240);
      if (lookahead == '<')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(234);
      END_STATE();
    case 249:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 250:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(251);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      END_STATE();
    case 251:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 252:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(261);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(252);
      END_STATE();
    case 253:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(257);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 262:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(111);
      END_STATE();
    case 263:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(264);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 269:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(121);
      END_STATE();
    case 270:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(271);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      END_STATE();
    case 271:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 276:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 283:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(302);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(310);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 323:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 324:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(326);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(80);
      END_STATE();
    case 326:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(278);
      END_STATE();
    case 327:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 328:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(329);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 329:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 331:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 332:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 333:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(264);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(333);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 334:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(65);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 340:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(156);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(211);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 341:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(341);
      END_STATE();
    case 342:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(330);
      END_STATE();
    case 343:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(343);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 344:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(344);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 345:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(345);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 346:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(346);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 347:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 348:
      if (lookahead == '\'')
        ADVANCE(141);
      END_STATE();
    case 349:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(349);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 350:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(261);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(87);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      END_STATE();
    case 351:
      if (lookahead == '\"')
        ADVANCE(134);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(137);
      if (lookahead == '\'')
        ADVANCE(138);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(351);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 352:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(352);
      END_STATE();
    case 353:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(335);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 133},
  [2] = {.lex_state = 151},
  [3] = {.lex_state = 152},
  [4] = {.lex_state = 151},
  [5] = {.lex_state = 151},
  [6] = {.lex_state = 151},
  [7] = {.lex_state = 151},
  [8] = {.lex_state = 151},
  [9] = {.lex_state = 151},
  [10] = {.lex_state = 151},
  [11] = {.lex_state = 152},
  [12] = {.lex_state = 152},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 155},
  [15] = {.lex_state = 151},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 232},
  [20] = {.lex_state = 154},
  [21] = {.lex_state = 151},
  [22] = {.lex_state = 151},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 249},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 249},
  [28] = {.lex_state = 133},
  [29] = {.lex_state = 250},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 151},
  [32] = {.lex_state = 252},
  [33] = {.lex_state = 252},
  [34] = {.lex_state = 249},
  [35] = {.lex_state = 263},
  [36] = {.lex_state = 270},
  [37] = {.lex_state = 250},
  [38] = {.lex_state = 283},
  [39] = {.lex_state = 151},
  [40] = {.lex_state = 249},
  [41] = {.lex_state = 323},
  [42] = {.lex_state = 152},
  [43] = {.lex_state = 154},
  [44] = {.lex_state = 151},
  [45] = {.lex_state = 151},
  [46] = {.lex_state = 154},
  [47] = {.lex_state = 249},
  [48] = {.lex_state = 154},
  [49] = {.lex_state = 252},
  [50] = {.lex_state = 283},
  [51] = {.lex_state = 151},
  [52] = {.lex_state = 151},
  [53] = {.lex_state = 151},
  [54] = {.lex_state = 154},
  [55] = {.lex_state = 232},
  [56] = {.lex_state = 151},
  [57] = {.lex_state = 232},
  [58] = {.lex_state = 154},
  [59] = {.lex_state = 154},
  [60] = {.lex_state = 154},
  [61] = {.lex_state = 151},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 133},
  [64] = {.lex_state = 154},
  [65] = {.lex_state = 133},
  [66] = {.lex_state = 327},
  [67] = {.lex_state = 152},
  [68] = {.lex_state = 328},
  [69] = {.lex_state = 151},
  [70] = {.lex_state = 250},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 250},
  [73] = {.lex_state = 331},
  [74] = {.lex_state = 151},
  [75] = {.lex_state = 332},
  [76] = {.lex_state = 151},
  [77] = {.lex_state = 151},
  [78] = {.lex_state = 333},
  [79] = {.lex_state = 152},
  [80] = {.lex_state = 151},
  [81] = {.lex_state = 151},
  [82] = {.lex_state = 151},
  [83] = {.lex_state = 151},
  [84] = {.lex_state = 151},
  [85] = {.lex_state = 151},
  [86] = {.lex_state = 151},
  [87] = {.lex_state = 152},
  [88] = {.lex_state = 332},
  [89] = {.lex_state = 340},
  [90] = {.lex_state = 151},
  [91] = {.lex_state = 332},
  [92] = {.lex_state = 232},
  [93] = {.lex_state = 249},
  [94] = {.lex_state = 151},
  [95] = {.lex_state = 249},
  [96] = {.lex_state = 249},
  [97] = {.lex_state = 249},
  [98] = {.lex_state = 151},
  [99] = {.lex_state = 151},
  [100] = {.lex_state = 270},
  [101] = {.lex_state = 270},
  [102] = {.lex_state = 341},
  [103] = {.lex_state = 151},
  [104] = {.lex_state = 250},
  [105] = {.lex_state = 343},
  [106] = {.lex_state = 151},
  [107] = {.lex_state = 151},
  [108] = {.lex_state = 151},
  [109] = {.lex_state = 323},
  [110] = {.lex_state = 154},
  [111] = {.lex_state = 323},
  [112] = {.lex_state = 151},
  [113] = {.lex_state = 154},
  [114] = {.lex_state = 154},
  [115] = {.lex_state = 151},
  [116] = {.lex_state = 151},
  [117] = {.lex_state = 152},
  [118] = {.lex_state = 154},
  [119] = {.lex_state = 151},
  [120] = {.lex_state = 151},
  [121] = {.lex_state = 249},
  [122] = {.lex_state = 154},
  [123] = {.lex_state = 232},
  [124] = {.lex_state = 154},
  [125] = {.lex_state = 151},
  [126] = {.lex_state = 250},
  [127] = {.lex_state = 327},
  [128] = {.lex_state = 151},
  [129] = {.lex_state = 151},
  [130] = {.lex_state = 250},
  [131] = {.lex_state = 151},
  [132] = {.lex_state = 249},
  [133] = {.lex_state = 151},
  [134] = {.lex_state = 331},
  [135] = {.lex_state = 151},
  [136] = {.lex_state = 151},
  [137] = {.lex_state = 151},
  [138] = {.lex_state = 252},
  [139] = {.lex_state = 252},
  [140] = {.lex_state = 263},
  [141] = {.lex_state = 270},
  [142] = {.lex_state = 250},
  [143] = {.lex_state = 151},
  [144] = {.lex_state = 344},
  [145] = {.lex_state = 332},
  [146] = {.lex_state = 151},
  [147] = {.lex_state = 151},
  [148] = {.lex_state = 332},
  [149] = {.lex_state = 332},
  [150] = {.lex_state = 151},
  [151] = {.lex_state = 151},
  [152] = {.lex_state = 332},
  [153] = {.lex_state = 232},
  [154] = {.lex_state = 345},
  [155] = {.lex_state = 345},
  [156] = {.lex_state = 249},
  [157] = {.lex_state = 333},
  [158] = {.lex_state = 249},
  [159] = {.lex_state = 332},
  [160] = {.lex_state = 249},
  [161] = {.lex_state = 252},
  [162] = {.lex_state = 154},
  [163] = {.lex_state = 151},
  [164] = {.lex_state = 270},
  [165] = {.lex_state = 270},
  [166] = {.lex_state = 250},
  [167] = {.lex_state = 341},
  [168] = {.lex_state = 343},
  [169] = {.lex_state = 323},
  [170] = {.lex_state = 151},
  [171] = {.lex_state = 151},
  [172] = {.lex_state = 154},
  [173] = {.lex_state = 154},
  [174] = {.lex_state = 323},
  [175] = {.lex_state = 152},
  [176] = {.lex_state = 151},
  [177] = {.lex_state = 151},
  [178] = {.lex_state = 151},
  [179] = {.lex_state = 154},
  [180] = {.lex_state = 151},
  [181] = {.lex_state = 152},
  [182] = {.lex_state = 151},
  [183] = {.lex_state = 152},
  [184] = {.lex_state = 154},
  [185] = {.lex_state = 151},
  [186] = {.lex_state = 151},
  [187] = {.lex_state = 152},
  [188] = {.lex_state = 252},
  [189] = {.lex_state = 151},
  [190] = {.lex_state = 152},
  [191] = {.lex_state = 250},
  [192] = {.lex_state = 151},
  [193] = {.lex_state = 151},
  [194] = {.lex_state = 327},
  [195] = {.lex_state = 151},
  [196] = {.lex_state = 154},
  [197] = {.lex_state = 151},
  [198] = {.lex_state = 151},
  [199] = {.lex_state = 346},
  [200] = {.lex_state = 154},
  [201] = {.lex_state = 331},
  [202] = {.lex_state = 151},
  [203] = {.lex_state = 151},
  [204] = {.lex_state = 151},
  [205] = {.lex_state = 151},
  [206] = {.lex_state = 151},
  [207] = {.lex_state = 270},
  [208] = {.lex_state = 341},
  [209] = {.lex_state = 250},
  [210] = {.lex_state = 151},
  [211] = {.lex_state = 151},
  [212] = {.lex_state = 332},
  [213] = {.lex_state = 332},
  [214] = {.lex_state = 344},
  [215] = {.lex_state = 332},
  [216] = {.lex_state = 332},
  [217] = {.lex_state = 152},
  [218] = {.lex_state = 332},
  [219] = {.lex_state = 151},
  [220] = {.lex_state = 332},
  [221] = {.lex_state = 249},
  [222] = {.lex_state = 151},
  [223] = {.lex_state = 154},
  [224] = {.lex_state = 151},
  [225] = {.lex_state = 270},
  [226] = {.lex_state = 270},
  [227] = {.lex_state = 151},
  [228] = {.lex_state = 151},
  [229] = {.lex_state = 250},
  [230] = {.lex_state = 323},
  [231] = {.lex_state = 151},
  [232] = {.lex_state = 151},
  [233] = {.lex_state = 151},
  [234] = {.lex_state = 151},
  [235] = {.lex_state = 151},
  [236] = {.lex_state = 249},
  [237] = {.lex_state = 152},
  [238] = {.lex_state = 154},
  [239] = {.lex_state = 152},
  [240] = {.lex_state = 252},
  [241] = {.lex_state = 270},
  [242] = {.lex_state = 252},
  [243] = {.lex_state = 232},
  [244] = {.lex_state = 151},
  [245] = {.lex_state = 151},
  [246] = {.lex_state = 151},
  [247] = {.lex_state = 250},
  [248] = {.lex_state = 154},
  [249] = {.lex_state = 151},
  [250] = {.lex_state = 151},
  [251] = {.lex_state = 346},
  [252] = {.lex_state = 154},
  [253] = {.lex_state = 346},
  [254] = {.lex_state = 151},
  [255] = {.lex_state = 331},
  [256] = {.lex_state = 151},
  [257] = {.lex_state = 151},
  [258] = {.lex_state = 252},
  [259] = {.lex_state = 332},
  [260] = {.lex_state = 151},
  [261] = {.lex_state = 270},
  [262] = {.lex_state = 270},
  [263] = {.lex_state = 250},
  [264] = {.lex_state = 341},
  [265] = {.lex_state = 332},
  [266] = {.lex_state = 151},
  [267] = {.lex_state = 332},
  [268] = {.lex_state = 332},
  [269] = {.lex_state = 344},
  [270] = {.lex_state = 332},
  [271] = {.lex_state = 152},
  [272] = {.lex_state = 332},
  [273] = {.lex_state = 154},
  [274] = {.lex_state = 154},
  [275] = {.lex_state = 151},
  [276] = {.lex_state = 270},
  [277] = {.lex_state = 151},
  [278] = {.lex_state = 151},
  [279] = {.lex_state = 151},
  [280] = {.lex_state = 151},
  [281] = {.lex_state = 151},
  [282] = {.lex_state = 152},
  [283] = {.lex_state = 151},
  [284] = {.lex_state = 151},
  [285] = {.lex_state = 270},
  [286] = {.lex_state = 252},
  [287] = {.lex_state = 347},
  [288] = {.lex_state = 152},
  [289] = {.lex_state = 151},
  [290] = {.lex_state = 151},
  [291] = {.lex_state = 346},
  [292] = {.lex_state = 154},
  [293] = {.lex_state = 154},
  [294] = {.lex_state = 346},
  [295] = {.lex_state = 332},
  [296] = {.lex_state = 151},
  [297] = {.lex_state = 349},
  [298] = {.lex_state = 332},
  [299] = {.lex_state = 151},
  [300] = {.lex_state = 332},
  [301] = {.lex_state = 151},
  [302] = {.lex_state = 270},
  [303] = {.lex_state = 270},
  [304] = {.lex_state = 151},
  [305] = {.lex_state = 151},
  [306] = {.lex_state = 250},
  [307] = {.lex_state = 332},
  [308] = {.lex_state = 332},
  [309] = {.lex_state = 154},
  [310] = {.lex_state = 151},
  [311] = {.lex_state = 151},
  [312] = {.lex_state = 154},
  [313] = {.lex_state = 151},
  [314] = {.lex_state = 152},
  [315] = {.lex_state = 151},
  [316] = {.lex_state = 270},
  [317] = {.lex_state = 151},
  [318] = {.lex_state = 350},
  [319] = {.lex_state = 151},
  [320] = {.lex_state = 151},
  [321] = {.lex_state = 151},
  [322] = {.lex_state = 332},
  [323] = {.lex_state = 151},
  [324] = {.lex_state = 151},
  [325] = {.lex_state = 351},
  [326] = {.lex_state = 332},
  [327] = {.lex_state = 349},
  [328] = {.lex_state = 332},
  [329] = {.lex_state = 332},
  [330] = {.lex_state = 151},
  [331] = {.lex_state = 270},
  [332] = {.lex_state = 151},
  [333] = {.lex_state = 151},
  [334] = {.lex_state = 151},
  [335] = {.lex_state = 154},
  [336] = {.lex_state = 151},
  [337] = {.lex_state = 154},
  [338] = {.lex_state = 352},
  [339] = {.lex_state = 350},
  [340] = {.lex_state = 351},
  [341] = {.lex_state = 332},
  [342] = {.lex_state = 332},
  [343] = {.lex_state = 349},
  [344] = {.lex_state = 332},
  [345] = {.lex_state = 151},
  [346] = {.lex_state = 151},
  [347] = {.lex_state = 332},
  [348] = {.lex_state = 151},
  [349] = {.lex_state = 154},
  [350] = {.lex_state = 352},
  [351] = {.lex_state = 350},
  [352] = {.lex_state = 332},
  [353] = {.lex_state = 151},
  [354] = {.lex_state = 332},
  [355] = {.lex_state = 352},
  [356] = {.lex_state = 332},
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
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(3),
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
    [sym_script] = STATE(22),
    [sym_script_block] = STATE(23),
    [sym_param_block] = STATE(24),
    [sym_statement_list] = STATE(25),
    [sym_statement] = STATE(26),
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
    [sym_label] = STATE(27),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_expandable_here_string] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(28),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(46),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(52),
  },
  [2] = {
    [sym_parameter_list] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym_comment] = ACTIONS(56),
  },
  [3] = {
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(56),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_comment] = ACTIONS(56),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(56),
  },
  [6] = {
    [sym_statement_block] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_comment] = ACTIONS(56),
  },
  [8] = {
    [sym_foreach_parameter] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(56),
  },
  [9] = {
    [sym_statement_block] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [10] = {
    [sym_statement_block] = STATE(43),
    [sym_type_literal] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [11] = {
    [sym_statement_block] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(56),
  },
  [12] = {
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(56),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_statement_terminator] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_string] = ACTIONS(80),
    [anon_sym_AT_DQUOTE] = ACTIONS(80),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(82),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_statement_terminator] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_string] = ACTIONS(86),
    [anon_sym_AT_DQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(88),
  },
  [15] = {
    [sym_switch_parameter] = STATE(51),
    [sym_switch_condition] = STATE(52),
    [aux_sym_switch_repeat1] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(56),
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
    [anon_sym_COLON] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [anon_sym_AT_DQUOTE] = ACTIONS(98),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(50),
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
    [anon_sym_COLON] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(108),
    [sym_string] = ACTIONS(104),
    [anon_sym_AT_DQUOTE] = ACTIONS(104),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(106),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_statement_terminator] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(114),
    [sym_string] = ACTIONS(110),
    [anon_sym_AT_DQUOTE] = ACTIONS(110),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(112),
  },
  [19] = {
    [sym_expandable_string_part] = STATE(55),
    [aux_sym_expandable_here_string_repeat1] = STATE(57),
    [anon_sym_DQUOTE_AT] = ACTIONS(116),
    [sym_expandable_string_chars] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(50),
  },
  [20] = {
    [sym_suffix] = STATE(59),
    [aux_sym_number_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_statement_terminator] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(126),
    [sym_string] = ACTIONS(122),
    [anon_sym_AT_DQUOTE] = ACTIONS(122),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(124),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(56),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(56),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(136),
  },
  [24] = {
    [sym_statement_list] = STATE(62),
    [sym_statement] = STATE(26),
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
    [sym_label] = STATE(27),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_expandable_here_string] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(28),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(46),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(56),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(140),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_statement_terminator] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(146),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(148),
    [sym_string] = ACTIONS(142),
    [anon_sym_AT_DQUOTE] = ACTIONS(142),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(146),
  },
  [27] = {
    [sym_while] = STATE(64),
    [sym_do] = STATE(64),
    [sym_for] = STATE(64),
    [sym_foreach] = STATE(64),
    [sym_switch] = STATE(64),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(56),
  },
  [28] = {
    [sym_statement] = STATE(26),
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
    [sym_label] = STATE(27),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_expandable_here_string] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(150),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(46),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(152),
  },
  [29] = {
    [sym_parameter_declaration] = STATE(69),
    [sym_attribute] = STATE(70),
    [sym_user_variable] = STATE(71),
    [aux_sym_parameter_declaration_repeat1] = STATE(72),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [30] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(164),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(56),
  },
  [31] = {
    [sym_parameter_list] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(56),
  },
  [32] = {
    [sym_boolean_value] = STATE(76),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [33] = {
    [sym_boolean_value] = STATE(77),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [34] = {
    [sym_statement_list] = STATE(94),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [anon_sym_RBRACE] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [35] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(206),
    [sym_comment] = ACTIONS(56),
  },
  [36] = {
    [sym_pipeline] = STATE(100),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(208),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [37] = {
    [sym_user_variable] = STATE(102),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [38] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(210),
    [sym_comment] = ACTIONS(56),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(212),
    [sym_comment] = ACTIONS(56),
  },
  [40] = {
    [sym_statement_list] = STATE(106),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [anon_sym_RBRACE] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [41] = {
    [sym_catch] = STATE(109),
    [sym_finally] = STATE(110),
    [aux_sym_try_repeat1] = STATE(111),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(224),
    [sym_string] = ACTIONS(216),
    [anon_sym_AT_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(218),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(218),
  },
  [42] = {
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(56),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_statement_terminator] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(232),
    [sym_string] = ACTIONS(228),
    [anon_sym_AT_DQUOTE] = ACTIONS(228),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(230),
  },
  [44] = {
    [sym_statement_block] = STATE(113),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [45] = {
    [sym_statement_block] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [46] = {
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
    [anon_sym_AT_DQUOTE] = ACTIONS(234),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(236),
  },
  [47] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(240),
    [sym_comment] = ACTIONS(56),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_statement_terminator] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(248),
    [sym_string] = ACTIONS(244),
    [anon_sym_AT_DQUOTE] = ACTIONS(244),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(246),
  },
  [49] = {
    [sym_boolean_value] = STATE(115),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [50] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKrR_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKwW_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKcC_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKpP_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [sym_comment] = ACTIONS(56),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [sym_comment] = ACTIONS(56),
  },
  [52] = {
    [sym_switch_body] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(56),
  },
  [53] = {
    [sym_switch_parameter] = STATE(51),
    [sym_switch_condition] = STATE(119),
    [aux_sym_switch_repeat1] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(56),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_statement_terminator] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(262),
    [sym_string] = ACTIONS(258),
    [anon_sym_AT_DQUOTE] = ACTIONS(258),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(260),
  },
  [55] = {
    [anon_sym_DQUOTE_AT] = ACTIONS(264),
    [sym_expandable_string_chars] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(50),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(268),
    [sym_comment] = ACTIONS(56),
  },
  [57] = {
    [sym_expandable_string_part] = STATE(55),
    [aux_sym_expandable_here_string_repeat1] = STATE(123),
    [anon_sym_DQUOTE_AT] = ACTIONS(270),
    [sym_expandable_string_chars] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(50),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym_statement_terminator] = ACTIONS(272),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [sym_comment] = ACTIONS(50),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(278),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(280),
  },
  [60] = {
    [sym_suffix] = STATE(59),
    [aux_sym_number_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_statement_terminator] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(288),
    [sym_string] = ACTIONS(284),
    [anon_sym_AT_DQUOTE] = ACTIONS(284),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(286),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_comment] = ACTIONS(56),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(294),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(300),
    [sym_string] = ACTIONS(296),
    [anon_sym_AT_DQUOTE] = ACTIONS(296),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(298),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(298),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_statement_terminator] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(306),
    [sym_string] = ACTIONS(302),
    [anon_sym_AT_DQUOTE] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(304),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(304),
  },
  [65] = {
    [sym_statement] = STATE(26),
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
    [sym_label] = STATE(27),
    [sym_flow_control_statement] = STATE(18),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(18),
    [sym_boolean_value] = STATE(18),
    [sym_user_variable] = STATE(18),
    [sym_expandable_here_string] = STATE(18),
    [sym_number] = STATE(18),
    [aux_sym_statement_list_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(350),
    [sym_string] = ACTIONS(353),
    [anon_sym_AT_DQUOTE] = ACTIONS(356),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(359),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(298),
  },
  [66] = {
    [anon_sym_LBRACE] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(364),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(364),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(366),
    [sym_string] = ACTIONS(362),
    [anon_sym_AT_DQUOTE] = ACTIONS(362),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(364),
    [sym_comment] = ACTIONS(56),
  },
  [67] = {
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(56),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
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
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(108),
    [sym_string] = ACTIONS(104),
    [anon_sym_AT_DQUOTE] = ACTIONS(104),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(56),
  },
  [69] = {
    [aux_sym_parameter_list_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(372),
    [sym_comment] = ACTIONS(56),
  },
  [70] = {
    [anon_sym_LBRACK] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(376),
    [sym_comment] = ACTIONS(56),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_comment] = ACTIONS(56),
  },
  [72] = {
    [sym_attribute] = STATE(70),
    [sym_user_variable] = STATE(129),
    [aux_sym_parameter_declaration_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [73] = {
    [sym_script_block] = STATE(131),
    [sym_param_block] = STATE(132),
    [sym_statement_list] = STATE(133),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [74] = {
    [anon_sym_LBRACE] = ACTIONS(380),
    [sym_comment] = ACTIONS(56),
  },
  [75] = {
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
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [sym_string] = ACTIONS(98),
    [anon_sym_AT_DQUOTE] = ACTIONS(98),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(56),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(382),
    [sym_comment] = ACTIONS(56),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(384),
    [sym_comment] = ACTIONS(56),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(386),
    [sym_statement_terminator] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(390),
    [sym_string] = ACTIONS(386),
    [anon_sym_AT_DQUOTE] = ACTIONS(386),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(388),
    [sym_comment] = ACTIONS(56),
  },
  [79] = {
    [sym_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(56),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(394),
    [sym_comment] = ACTIONS(56),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(56),
  },
  [82] = {
    [sym_statement_block] = STATE(140),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(56),
  },
  [84] = {
    [sym_foreach_parameter] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(56),
  },
  [85] = {
    [sym_statement_block] = STATE(144),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [86] = {
    [sym_statement_block] = STATE(145),
    [sym_type_literal] = STATE(146),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [87] = {
    [sym_statement_block] = STATE(148),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(56),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [sym_statement_terminator] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(84),
    [sym_string] = ACTIONS(80),
    [anon_sym_AT_DQUOTE] = ACTIONS(80),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(56),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(86),
    [sym_statement_terminator] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(90),
    [sym_identifier] = ACTIONS(404),
    [sym_string] = ACTIONS(86),
    [anon_sym_AT_DQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(56),
  },
  [90] = {
    [sym_switch_parameter] = STATE(51),
    [sym_switch_condition] = STATE(150),
    [aux_sym_switch_repeat1] = STATE(151),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(56),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [sym_statement_terminator] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(114),
    [sym_string] = ACTIONS(110),
    [anon_sym_AT_DQUOTE] = ACTIONS(110),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(56),
  },
  [92] = {
    [sym_expandable_string_part] = STATE(55),
    [aux_sym_expandable_here_string_repeat1] = STATE(153),
    [anon_sym_DQUOTE_AT] = ACTIONS(406),
    [sym_expandable_string_chars] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(50),
  },
  [93] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(156),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym_statement_terminator] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(126),
    [sym_string] = ACTIONS(122),
    [anon_sym_AT_DQUOTE] = ACTIONS(122),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(56),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(412),
    [sym_comment] = ACTIONS(56),
  },
  [95] = {
    [anon_sym_RBRACE] = ACTIONS(142),
    [sym_statement_terminator] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(146),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(148),
    [sym_string] = ACTIONS(142),
    [anon_sym_AT_DQUOTE] = ACTIONS(142),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(56),
  },
  [96] = {
    [sym_while] = STATE(159),
    [sym_do] = STATE(159),
    [sym_for] = STATE(159),
    [sym_foreach] = STATE(159),
    [sym_switch] = STATE(159),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(56),
  },
  [97] = {
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(160),
    [anon_sym_RBRACE] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(416),
    [sym_comment] = ACTIONS(56),
  },
  [99] = {
    [sym_statement_block] = STATE(162),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [100] = {
    [sym_pipeline] = STATE(165),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_statement_terminator] = ACTIONS(420),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_statement_terminator] = ACTIONS(422),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(426),
    [sym_comment] = ACTIONS(56),
  },
  [102] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(428),
    [sym_comment] = ACTIONS(56),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(56),
  },
  [104] = {
    [sym_user_variable] = STATE(167),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [sym_statement_terminator] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(390),
    [sym_string] = ACTIONS(386),
    [anon_sym_AT_DQUOTE] = ACTIONS(386),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(388),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(388),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(432),
    [sym_comment] = ACTIONS(56),
  },
  [107] = {
    [sym_statement_block] = STATE(169),
    [sym_type_literal] = STATE(170),
    [aux_sym_catch_repeat1] = STATE(171),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [108] = {
    [sym_statement_block] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [sym_statement_terminator] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(434),
    [anon_sym_COLON] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(438),
    [sym_string] = ACTIONS(434),
    [anon_sym_AT_DQUOTE] = ACTIONS(434),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(436),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(436),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_statement_terminator] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(440),
    [anon_sym_AT_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(442),
  },
  [111] = {
    [sym_catch] = STATE(109),
    [sym_finally] = STATE(173),
    [aux_sym_try_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_statement_terminator] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(440),
    [anon_sym_AT_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(442),
  },
  [112] = {
    [sym_array_declaration] = STATE(177),
    [sym_type_literal] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_comment] = ACTIONS(56),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_statement_terminator] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(454),
    [sym_string] = ACTIONS(450),
    [anon_sym_AT_DQUOTE] = ACTIONS(450),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(452),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(452),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_statement_terminator] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(460),
    [sym_string] = ACTIONS(456),
    [anon_sym_AT_DQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(458),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(458),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(462),
    [sym_comment] = ACTIONS(56),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_DASH] = ACTIONS(464),
    [sym_comment] = ACTIONS(56),
  },
  [117] = {
    [sym_switch_clause] = STATE(181),
    [sym_switch_clause_condition] = STATE(182),
    [aux_sym_switch_body_repeat1] = STATE(183),
    [anon_sym_RBRACE] = ACTIONS(466),
    [sym_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(56),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_statement_terminator] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(474),
    [sym_string] = ACTIONS(470),
    [anon_sym_AT_DQUOTE] = ACTIONS(470),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(472),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(472),
  },
  [119] = {
    [sym_switch_body] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(56),
  },
  [120] = {
    [sym_switch_parameter] = STATE(51),
    [aux_sym_switch_repeat1] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(478),
    [sym_comment] = ACTIONS(56),
  },
  [121] = {
    [sym_statement] = STATE(189),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(487),
    [sym_comment] = ACTIONS(56),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [sym_statement_terminator] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(493),
    [sym_string] = ACTIONS(489),
    [anon_sym_AT_DQUOTE] = ACTIONS(489),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(491),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(491),
  },
  [123] = {
    [sym_expandable_string_part] = STATE(55),
    [aux_sym_expandable_here_string_repeat1] = STATE(123),
    [anon_sym_DQUOTE_AT] = ACTIONS(495),
    [sym_expandable_string_chars] = ACTIONS(497),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [sym_comment] = ACTIONS(50),
  },
  [124] = {
    [sym_suffix] = STATE(59),
    [aux_sym_number_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym_statement_terminator] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(507),
    [sym_string] = ACTIONS(503),
    [anon_sym_AT_DQUOTE] = ACTIONS(503),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(509),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(505),
  },
  [125] = {
    [sym_attribute_arguments] = STATE(192),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_comment] = ACTIONS(56),
  },
  [126] = {
    [sym_parameter_declaration] = STATE(193),
    [sym_attribute] = STATE(70),
    [sym_user_variable] = STATE(71),
    [aux_sym_parameter_declaration_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [127] = {
    [anon_sym_LBRACE] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(519),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(521),
    [sym_comment] = ACTIONS(56),
  },
  [128] = {
    [aux_sym_parameter_list_repeat1] = STATE(195),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(525),
    [sym_comment] = ACTIONS(56),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_comment] = ACTIONS(56),
  },
  [130] = {
    [sym_attribute] = STATE(70),
    [aux_sym_parameter_declaration_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(529),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(532),
    [sym_comment] = ACTIONS(56),
  },
  [131] = {
    [anon_sym_RBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(56),
  },
  [132] = {
    [sym_statement_list] = STATE(197),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [133] = {
    [anon_sym_RBRACE] = ACTIONS(138),
    [sym_comment] = ACTIONS(56),
  },
  [134] = {
    [sym_script_block] = STATE(198),
    [sym_param_block] = STATE(132),
    [sym_statement_list] = STATE(133),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [135] = {
    [sym_statement_block] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [136] = {
    [sym_statement_block] = STATE(200),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [137] = {
    [sym_parameter_list] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(536),
    [sym_comment] = ACTIONS(56),
  },
  [138] = {
    [sym_boolean_value] = STATE(203),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [139] = {
    [sym_boolean_value] = STATE(204),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [140] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(538),
    [sym_comment] = ACTIONS(56),
  },
  [141] = {
    [sym_pipeline] = STATE(207),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(540),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [142] = {
    [sym_user_variable] = STATE(208),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym_comment] = ACTIONS(56),
  },
  [144] = {
    [sym_catch] = STATE(212),
    [sym_finally] = STATE(213),
    [aux_sym_try_repeat1] = STATE(214),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(546),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(224),
    [sym_string] = ACTIONS(216),
    [anon_sym_AT_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(218),
    [sym_comment] = ACTIONS(56),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [sym_statement_terminator] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(232),
    [sym_string] = ACTIONS(228),
    [anon_sym_AT_DQUOTE] = ACTIONS(228),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(56),
  },
  [146] = {
    [sym_statement_block] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [147] = {
    [sym_statement_block] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(234),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(234),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(56),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [sym_statement_terminator] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(248),
    [sym_string] = ACTIONS(244),
    [anon_sym_AT_DQUOTE] = ACTIONS(244),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(56),
  },
  [150] = {
    [sym_switch_body] = STATE(218),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(56),
  },
  [151] = {
    [sym_switch_parameter] = STATE(51),
    [sym_switch_condition] = STATE(219),
    [aux_sym_switch_repeat1] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(56),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [sym_statement_terminator] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(262),
    [sym_string] = ACTIONS(258),
    [anon_sym_AT_DQUOTE] = ACTIONS(258),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(260),
    [sym_comment] = ACTIONS(56),
  },
  [153] = {
    [sym_expandable_string_part] = STATE(55),
    [aux_sym_expandable_here_string_repeat1] = STATE(123),
    [anon_sym_DQUOTE_AT] = ACTIONS(550),
    [sym_expandable_string_chars] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(50),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [sym_statement_terminator] = ACTIONS(272),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(272),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(272),
    [sym_comment] = ACTIONS(56),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(278),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(278),
    [sym_comment] = ACTIONS(56),
  },
  [156] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(221),
    [anon_sym_RBRACE] = ACTIONS(284),
    [sym_statement_terminator] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(288),
    [sym_string] = ACTIONS(284),
    [anon_sym_AT_DQUOTE] = ACTIONS(284),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(56),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_RBRACE] = ACTIONS(552),
    [sym_statement_terminator] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(556),
    [sym_string] = ACTIONS(552),
    [anon_sym_AT_DQUOTE] = ACTIONS(552),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(554),
    [sym_comment] = ACTIONS(56),
  },
  [158] = {
    [anon_sym_RBRACE] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(300),
    [sym_string] = ACTIONS(296),
    [anon_sym_AT_DQUOTE] = ACTIONS(296),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(298),
    [sym_comment] = ACTIONS(56),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_statement_terminator] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(306),
    [sym_string] = ACTIONS(302),
    [anon_sym_AT_DQUOTE] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(304),
    [sym_comment] = ACTIONS(56),
  },
  [160] = {
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(160),
    [anon_sym_RBRACE] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(597),
    [sym_string] = ACTIONS(600),
    [anon_sym_AT_DQUOTE] = ACTIONS(603),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(606),
    [sym_comment] = ACTIONS(56),
  },
  [161] = {
    [sym_boolean_value] = STATE(222),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [sym_statement_terminator] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(611),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(613),
    [sym_string] = ACTIONS(609),
    [anon_sym_AT_DQUOTE] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(611),
  },
  [163] = {
    [sym_statement_block] = STATE(223),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [164] = {
    [sym_pipeline] = STATE(225),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(615),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [165] = {
    [sym_pipeline] = STATE(227),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(615),
    [sym_statement_terminator] = ACTIONS(617),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [166] = {
    [sym_user_variable] = STATE(228),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [167] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(619),
    [sym_comment] = ACTIONS(56),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [sym_statement_terminator] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(556),
    [sym_string] = ACTIONS(552),
    [anon_sym_AT_DQUOTE] = ACTIONS(552),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(554),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(554),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [sym_statement_terminator] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(621),
    [anon_sym_COLON] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(625),
    [sym_string] = ACTIONS(621),
    [anon_sym_AT_DQUOTE] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(623),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(623),
  },
  [170] = {
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(56),
  },
  [171] = {
    [sym_statement_block] = STATE(230),
    [sym_type_literal] = STATE(170),
    [aux_sym_catch_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [sym_statement_terminator] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(629),
    [anon_sym_AT_DQUOTE] = ACTIONS(629),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(631),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(631),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [sym_statement_terminator] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(639),
    [sym_string] = ACTIONS(635),
    [anon_sym_AT_DQUOTE] = ACTIONS(635),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(637),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(637),
  },
  [174] = {
    [sym_catch] = STATE(109),
    [aux_sym_try_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(641),
    [sym_statement_terminator] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(641),
    [anon_sym_COLON] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(648),
    [sym_string] = ACTIONS(641),
    [anon_sym_AT_DQUOTE] = ACTIONS(641),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(643),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(643),
  },
  [175] = {
    [aux_sym_array_declaration_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(650),
    [anon_sym_RBRACK] = ACTIONS(652),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(56),
  },
  [176] = {
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_RBRACK] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(654),
    [sym_comment] = ACTIONS(56),
  },
  [177] = {
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym_comment] = ACTIONS(56),
  },
  [178] = {
    [anon_sym_LBRACE] = ACTIONS(658),
    [sym_comment] = ACTIONS(56),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(660),
    [sym_statement_terminator] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(662),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(660),
    [anon_sym_COLON] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(662),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(664),
    [sym_string] = ACTIONS(660),
    [anon_sym_AT_DQUOTE] = ACTIONS(660),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(662),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(662),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(666),
    [sym_comment] = ACTIONS(56),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(668),
    [sym_identifier] = ACTIONS(670),
    [sym_comment] = ACTIONS(56),
  },
  [182] = {
    [sym_statement_block] = STATE(237),
    [anon_sym_LBRACE] = ACTIONS(672),
    [sym_comment] = ACTIONS(56),
  },
  [183] = {
    [sym_switch_clause] = STATE(181),
    [sym_switch_clause_condition] = STATE(182),
    [aux_sym_switch_body_repeat1] = STATE(239),
    [anon_sym_RBRACE] = ACTIONS(674),
    [sym_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(56),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [sym_statement_terminator] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(680),
    [sym_string] = ACTIONS(676),
    [anon_sym_AT_DQUOTE] = ACTIONS(676),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(678),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(678),
  },
  [185] = {
    [anon_sym_LPAREN] = ACTIONS(682),
    [sym_comment] = ACTIONS(56),
  },
  [186] = {
    [sym_statement_block] = STATE(241),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(86),
    [sym_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(56),
  },
  [188] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(242),
    [anon_sym_RPAREN] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(56),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(686),
    [sym_comment] = ACTIONS(56),
  },
  [190] = {
    [sym_attribute_argument] = STATE(246),
    [anon_sym_RPAREN] = ACTIONS(688),
    [sym_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(56),
  },
  [191] = {
    [anon_sym_LBRACK] = ACTIONS(692),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(694),
    [sym_comment] = ACTIONS(56),
  },
  [192] = {
    [anon_sym_RBRACK] = ACTIONS(696),
    [sym_comment] = ACTIONS(56),
  },
  [193] = {
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(698),
    [sym_comment] = ACTIONS(56),
  },
  [194] = {
    [anon_sym_LBRACE] = ACTIONS(700),
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
    [anon_sym_COLON] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(704),
    [sym_string] = ACTIONS(700),
    [anon_sym_AT_DQUOTE] = ACTIONS(700),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(702),
    [sym_comment] = ACTIONS(56),
  },
  [195] = {
    [aux_sym_parameter_list_repeat1] = STATE(195),
    [anon_sym_COMMA] = ACTIONS(706),
    [anon_sym_RPAREN] = ACTIONS(698),
    [sym_comment] = ACTIONS(56),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [sym_statement_terminator] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(713),
    [sym_string] = ACTIONS(709),
    [anon_sym_AT_DQUOTE] = ACTIONS(709),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(711),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(711),
  },
  [197] = {
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(56),
  },
  [198] = {
    [anon_sym_RBRACE] = ACTIONS(715),
    [sym_comment] = ACTIONS(56),
  },
  [199] = {
    [sym_elseif] = STATE(251),
    [sym_else] = STATE(252),
    [aux_sym_if_repeat1] = STATE(253),
    [ts_builtin_sym_end] = ACTIONS(717),
    [sym_statement_terminator] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(723),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(723),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(725),
    [sym_string] = ACTIONS(717),
    [anon_sym_AT_DQUOTE] = ACTIONS(717),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(723),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(723),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [sym_statement_terminator] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(727),
    [anon_sym_COLON] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(731),
    [sym_string] = ACTIONS(727),
    [anon_sym_AT_DQUOTE] = ACTIONS(727),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(729),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(729),
  },
  [201] = {
    [sym_script_block] = STATE(254),
    [sym_param_block] = STATE(132),
    [sym_statement_list] = STATE(133),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [202] = {
    [anon_sym_LBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(56),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(735),
    [sym_comment] = ACTIONS(56),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_comment] = ACTIONS(56),
  },
  [205] = {
    [anon_sym_LPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(56),
  },
  [206] = {
    [sym_statement_block] = STATE(259),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [207] = {
    [sym_pipeline] = STATE(262),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_statement_terminator] = ACTIONS(743),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [208] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(745),
    [sym_comment] = ACTIONS(56),
  },
  [209] = {
    [sym_user_variable] = STATE(264),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [210] = {
    [sym_statement_block] = STATE(265),
    [sym_type_literal] = STATE(170),
    [aux_sym_catch_repeat1] = STATE(266),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [211] = {
    [sym_statement_block] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [sym_statement_terminator] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(434),
    [anon_sym_COLON] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(436),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(438),
    [sym_string] = ACTIONS(434),
    [anon_sym_AT_DQUOTE] = ACTIONS(434),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(436),
    [sym_comment] = ACTIONS(56),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_statement_terminator] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(440),
    [anon_sym_AT_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(56),
  },
  [214] = {
    [sym_catch] = STATE(212),
    [sym_finally] = STATE(268),
    [aux_sym_try_repeat1] = STATE(269),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_statement_terminator] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(546),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(444),
    [sym_string] = ACTIONS(440),
    [anon_sym_AT_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(56),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(450),
    [sym_statement_terminator] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(454),
    [sym_string] = ACTIONS(450),
    [anon_sym_AT_DQUOTE] = ACTIONS(450),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(452),
    [sym_comment] = ACTIONS(56),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(456),
    [sym_statement_terminator] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(460),
    [sym_string] = ACTIONS(456),
    [anon_sym_AT_DQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(458),
    [sym_comment] = ACTIONS(56),
  },
  [217] = {
    [sym_switch_clause] = STATE(181),
    [sym_switch_clause_condition] = STATE(182),
    [aux_sym_switch_body_repeat1] = STATE(271),
    [anon_sym_RBRACE] = ACTIONS(747),
    [sym_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(56),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [sym_statement_terminator] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(474),
    [sym_string] = ACTIONS(470),
    [anon_sym_AT_DQUOTE] = ACTIONS(470),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(472),
    [sym_comment] = ACTIONS(56),
  },
  [219] = {
    [sym_switch_body] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(56),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [sym_statement_terminator] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(493),
    [sym_string] = ACTIONS(489),
    [anon_sym_AT_DQUOTE] = ACTIONS(489),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(491),
    [sym_comment] = ACTIONS(56),
  },
  [221] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(221),
    [anon_sym_RBRACE] = ACTIONS(503),
    [sym_statement_terminator] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(507),
    [sym_string] = ACTIONS(503),
    [anon_sym_AT_DQUOTE] = ACTIONS(503),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [sym_comment] = ACTIONS(56),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(755),
    [sym_comment] = ACTIONS(56),
  },
  [223] = {
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
    [anon_sym_AT_DQUOTE] = ACTIONS(757),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(759),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(759),
  },
  [224] = {
    [sym_statement_block] = STATE(274),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [225] = {
    [sym_pipeline] = STATE(277),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_statement_terminator] = ACTIONS(765),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [226] = {
    [sym_pipeline] = STATE(277),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(763),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(56),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_comment] = ACTIONS(56),
  },
  [229] = {
    [sym_user_variable] = STATE(279),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [230] = {
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(769),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(769),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(771),
  },
  [231] = {
    [sym_type_literal] = STATE(170),
    [aux_sym_catch_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(56),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [sym_comment] = ACTIONS(56),
  },
  [233] = {
    [anon_sym_RBRACK] = ACTIONS(782),
    [sym_comment] = ACTIONS(56),
  },
  [234] = {
    [aux_sym_array_declaration_repeat1] = STATE(281),
    [anon_sym_COMMA] = ACTIONS(650),
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym_comment] = ACTIONS(56),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [anon_sym_LBRACE] = ACTIONS(786),
    [sym_comment] = ACTIONS(56),
  },
  [236] = {
    [sym_statement_list] = STATE(283),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [anon_sym_RBRACE] = ACTIONS(788),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(790),
    [sym_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(56),
  },
  [238] = {
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
    [anon_sym_AT_DQUOTE] = ACTIONS(794),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(796),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(796),
  },
  [239] = {
    [sym_switch_clause] = STATE(181),
    [sym_switch_clause_condition] = STATE(182),
    [aux_sym_switch_body_repeat1] = STATE(239),
    [anon_sym_RBRACE] = ACTIONS(800),
    [sym_identifier] = ACTIONS(802),
    [sym_comment] = ACTIONS(56),
  },
  [240] = {
    [sym_boolean_value] = STATE(284),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [241] = {
    [sym_catch] = STATE(212),
    [sym_finally] = STATE(213),
    [aux_sym_try_repeat1] = STATE(285),
    [anon_sym_RPAREN] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(546),
    [sym_comment] = ACTIONS(56),
  },
  [242] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(286),
    [anon_sym_RPAREN] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(56),
  },
  [243] = {
    [anon_sym_DQUOTE_AT] = ACTIONS(805),
    [sym_expandable_string_chars] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(807),
    [sym_comment] = ACTIONS(50),
  },
  [244] = {
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_comment] = ACTIONS(56),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_EQ] = ACTIONS(813),
    [sym_comment] = ACTIONS(56),
  },
  [246] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(815),
    [anon_sym_RPAREN] = ACTIONS(817),
    [sym_comment] = ACTIONS(56),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(821),
    [sym_comment] = ACTIONS(56),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(823),
    [sym_statement_terminator] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(823),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(823),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(825),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(825),
  },
  [249] = {
    [sym_statement_block] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [250] = {
    [sym_statement_block] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(829),
    [sym_statement_terminator] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(831),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(829),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(831),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(831),
  },
  [252] = {
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
    [anon_sym_AT_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(837),
  },
  [253] = {
    [sym_elseif] = STATE(251),
    [sym_else] = STATE(293),
    [aux_sym_if_repeat1] = STATE(294),
    [ts_builtin_sym_end] = ACTIONS(835),
    [sym_statement_terminator] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(721),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(837),
  },
  [254] = {
    [anon_sym_RBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(56),
  },
  [255] = {
    [sym_script_block] = STATE(296),
    [sym_param_block] = STATE(132),
    [sym_statement_list] = STATE(133),
    [sym_statement] = STATE(95),
    [sym_function_definition] = STATE(91),
    [sym_if] = STATE(91),
    [sym_while] = STATE(91),
    [sym_do] = STATE(91),
    [sym_for] = STATE(91),
    [sym_foreach] = STATE(91),
    [sym_try] = STATE(91),
    [sym_trap] = STATE(91),
    [sym_data] = STATE(91),
    [sym_labeled_statement] = STATE(91),
    [sym_label] = STATE(96),
    [sym_flow_control_statement] = STATE(91),
    [sym_flow_break_continue] = STATE(88),
    [sym_switch] = STATE(91),
    [sym_boolean_value] = STATE(91),
    [sym_user_variable] = STATE(91),
    [sym_expandable_here_string] = STATE(91),
    [sym_number] = STATE(91),
    [aux_sym_statement_list_repeat1] = STATE(97),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_string] = ACTIONS(200),
    [anon_sym_AT_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(56),
  },
  [256] = {
    [sym_statement_block] = STATE(297),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [257] = {
    [sym_statement_block] = STATE(298),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [258] = {
    [sym_boolean_value] = STATE(299),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(56),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [sym_statement_terminator] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(611),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(613),
    [sym_string] = ACTIONS(609),
    [anon_sym_AT_DQUOTE] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(56),
  },
  [260] = {
    [sym_statement_block] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [261] = {
    [sym_pipeline] = STATE(302),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(843),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [262] = {
    [sym_pipeline] = STATE(304),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(843),
    [sym_statement_terminator] = ACTIONS(845),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [263] = {
    [sym_user_variable] = STATE(305),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [264] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(847),
    [sym_comment] = ACTIONS(56),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_RBRACE] = ACTIONS(621),
    [sym_statement_terminator] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(621),
    [anon_sym_COLON] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(623),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(625),
    [sym_string] = ACTIONS(621),
    [anon_sym_AT_DQUOTE] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(623),
    [sym_comment] = ACTIONS(56),
  },
  [266] = {
    [sym_statement_block] = STATE(307),
    [sym_type_literal] = STATE(170),
    [aux_sym_catch_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [267] = {
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [sym_statement_terminator] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(633),
    [sym_string] = ACTIONS(629),
    [anon_sym_AT_DQUOTE] = ACTIONS(629),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(631),
    [sym_comment] = ACTIONS(56),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_statement_terminator] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(639),
    [sym_string] = ACTIONS(635),
    [anon_sym_AT_DQUOTE] = ACTIONS(635),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(637),
    [sym_comment] = ACTIONS(56),
  },
  [269] = {
    [sym_catch] = STATE(212),
    [aux_sym_try_repeat1] = STATE(269),
    [anon_sym_RBRACE] = ACTIONS(641),
    [sym_statement_terminator] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(849),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(641),
    [anon_sym_COLON] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(648),
    [sym_string] = ACTIONS(641),
    [anon_sym_AT_DQUOTE] = ACTIONS(641),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(643),
    [sym_comment] = ACTIONS(56),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(660),
    [anon_sym_RBRACE] = ACTIONS(660),
    [sym_statement_terminator] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(662),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(660),
    [anon_sym_COLON] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(660),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(662),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(664),
    [sym_string] = ACTIONS(660),
    [anon_sym_AT_DQUOTE] = ACTIONS(660),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(662),
    [sym_comment] = ACTIONS(56),
  },
  [271] = {
    [sym_switch_clause] = STATE(181),
    [sym_switch_clause_condition] = STATE(182),
    [aux_sym_switch_body_repeat1] = STATE(239),
    [anon_sym_RBRACE] = ACTIONS(852),
    [sym_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(56),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_RBRACE] = ACTIONS(676),
    [sym_statement_terminator] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(680),
    [sym_string] = ACTIONS(676),
    [anon_sym_AT_DQUOTE] = ACTIONS(676),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(678),
    [sym_comment] = ACTIONS(56),
  },
  [273] = {
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
    [anon_sym_AT_DQUOTE] = ACTIONS(854),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(856),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(856),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [sym_statement_terminator] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(860),
    [anon_sym_COLON] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(864),
    [sym_string] = ACTIONS(860),
    [anon_sym_AT_DQUOTE] = ACTIONS(860),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(862),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(862),
  },
  [275] = {
    [sym_statement_block] = STATE(309),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [276] = {
    [sym_pipeline] = STATE(311),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(866),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym_comment] = ACTIONS(56),
  },
  [278] = {
    [sym_statement_block] = STATE(312),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(868),
    [sym_comment] = ACTIONS(56),
  },
  [280] = {
    [anon_sym_RBRACK] = ACTIONS(870),
    [sym_comment] = ACTIONS(56),
  },
  [281] = {
    [aux_sym_array_declaration_repeat1] = STATE(281),
    [anon_sym_COMMA] = ACTIONS(872),
    [anon_sym_RBRACK] = ACTIONS(875),
    [sym_comment] = ACTIONS(56),
  },
  [282] = {
    [anon_sym_RBRACE] = ACTIONS(386),
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(56),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(877),
    [sym_comment] = ACTIONS(56),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(879),
    [sym_comment] = ACTIONS(56),
  },
  [285] = {
    [sym_catch] = STATE(212),
    [sym_finally] = STATE(268),
    [aux_sym_try_repeat1] = STATE(316),
    [anon_sym_RPAREN] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(546),
    [sym_comment] = ACTIONS(56),
  },
  [286] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(286),
    [anon_sym_RPAREN] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [sym_comment] = ACTIONS(56),
  },
  [287] = {
    [sym_number] = STATE(317),
    [sym_identifier] = ACTIONS(881),
    [sym_string] = ACTIONS(883),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(885),
    [sym_comment] = ACTIONS(56),
  },
  [288] = {
    [sym_attribute_argument] = STATE(319),
    [sym_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(56),
  },
  [289] = {
    [anon_sym_RBRACK] = ACTIONS(887),
    [sym_comment] = ACTIONS(56),
  },
  [290] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(815),
    [anon_sym_RPAREN] = ACTIONS(889),
    [sym_comment] = ACTIONS(56),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(891),
    [sym_statement_terminator] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(893),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(891),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(893),
  },
  [292] = {
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
    [anon_sym_AT_DQUOTE] = ACTIONS(897),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(899),
  },
  [293] = {
    [ts_builtin_sym_end] = ACTIONS(903),
    [sym_statement_terminator] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(903),
    [anon_sym_COLON] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(907),
    [sym_string] = ACTIONS(903),
    [anon_sym_AT_DQUOTE] = ACTIONS(903),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(905),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(905),
  },
  [294] = {
    [sym_elseif] = STATE(251),
    [aux_sym_if_repeat1] = STATE(294),
    [ts_builtin_sym_end] = ACTIONS(909),
    [sym_statement_terminator] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(911),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(909),
    [anon_sym_COLON] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(916),
    [sym_string] = ACTIONS(909),
    [anon_sym_AT_DQUOTE] = ACTIONS(909),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(914),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(914),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(709),
    [anon_sym_RBRACE] = ACTIONS(709),
    [sym_statement_terminator] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(711),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(713),
    [sym_string] = ACTIONS(709),
    [anon_sym_AT_DQUOTE] = ACTIONS(709),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(711),
    [sym_comment] = ACTIONS(56),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(918),
    [sym_comment] = ACTIONS(56),
  },
  [297] = {
    [sym_elseif] = STATE(325),
    [sym_else] = STATE(326),
    [aux_sym_if_repeat1] = STATE(327),
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_statement_terminator] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(920),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(922),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(723),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(723),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(725),
    [sym_string] = ACTIONS(717),
    [anon_sym_AT_DQUOTE] = ACTIONS(717),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(723),
    [sym_comment] = ACTIONS(56),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(727),
    [sym_statement_terminator] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(727),
    [anon_sym_COLON] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(727),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(729),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(731),
    [sym_string] = ACTIONS(727),
    [anon_sym_AT_DQUOTE] = ACTIONS(727),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(729),
    [sym_comment] = ACTIONS(56),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(56),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(757),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(757),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(759),
    [sym_comment] = ACTIONS(56),
  },
  [301] = {
    [sym_statement_block] = STATE(329),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [302] = {
    [sym_pipeline] = STATE(332),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym_statement_terminator] = ACTIONS(928),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [303] = {
    [sym_pipeline] = STATE(332),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(926),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym_comment] = ACTIONS(56),
  },
  [305] = {
    [anon_sym_RPAREN] = ACTIONS(930),
    [sym_comment] = ACTIONS(56),
  },
  [306] = {
    [sym_user_variable] = STATE(334),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(56),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(769),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(769),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(769),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(56),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(794),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(794),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(796),
    [sym_comment] = ACTIONS(56),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(932),
    [sym_statement_terminator] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(932),
    [anon_sym_COLON] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(936),
    [sym_string] = ACTIONS(932),
    [anon_sym_AT_DQUOTE] = ACTIONS(932),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(934),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(934),
  },
  [310] = {
    [sym_statement_block] = STATE(335),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [311] = {
    [anon_sym_RPAREN] = ACTIONS(938),
    [sym_comment] = ACTIONS(56),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(940),
    [sym_statement_terminator] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(944),
    [sym_string] = ACTIONS(940),
    [anon_sym_AT_DQUOTE] = ACTIONS(940),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(942),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(942),
  },
  [313] = {
    [sym_statement_block] = STATE(337),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(552),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(56),
  },
  [315] = {
    [sym_statement_block] = STATE(338),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [316] = {
    [sym_catch] = STATE(212),
    [aux_sym_try_repeat1] = STATE(316),
    [anon_sym_RPAREN] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(849),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(56),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(946),
    [anon_sym_RPAREN] = ACTIONS(946),
    [sym_comment] = ACTIONS(56),
  },
  [318] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(56),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(948),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(56),
  },
  [320] = {
    [anon_sym_RBRACK] = ACTIONS(950),
    [sym_comment] = ACTIONS(56),
  },
  [321] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(952),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(56),
  },
  [322] = {
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [sym_statement_terminator] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(823),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(823),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(825),
    [sym_comment] = ACTIONS(56),
  },
  [323] = {
    [sym_statement_block] = STATE(340),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [324] = {
    [sym_statement_block] = STATE(341),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_RBRACE] = ACTIONS(829),
    [sym_statement_terminator] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(831),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(829),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(831),
    [sym_comment] = ACTIONS(56),
  },
  [326] = {
    [anon_sym_RPAREN] = ACTIONS(835),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(56),
  },
  [327] = {
    [sym_elseif] = STATE(325),
    [sym_else] = STATE(342),
    [aux_sym_if_repeat1] = STATE(343),
    [anon_sym_RBRACE] = ACTIONS(835),
    [sym_statement_terminator] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(920),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(922),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(56),
  },
  [328] = {
    [anon_sym_RPAREN] = ACTIONS(854),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(854),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(856),
    [sym_comment] = ACTIONS(56),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(860),
    [anon_sym_RBRACE] = ACTIONS(860),
    [sym_statement_terminator] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(860),
    [anon_sym_COLON] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(862),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(864),
    [sym_string] = ACTIONS(860),
    [anon_sym_AT_DQUOTE] = ACTIONS(860),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(862),
    [sym_comment] = ACTIONS(56),
  },
  [330] = {
    [sym_statement_block] = STATE(344),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [331] = {
    [sym_pipeline] = STATE(346),
    [sym_boolean_value] = STATE(101),
    [sym_user_variable] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(955),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(56),
  },
  [332] = {
    [anon_sym_RPAREN] = ACTIONS(955),
    [sym_comment] = ACTIONS(56),
  },
  [333] = {
    [sym_statement_block] = STATE(347),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [334] = {
    [anon_sym_RPAREN] = ACTIONS(957),
    [sym_comment] = ACTIONS(56),
  },
  [335] = {
    [ts_builtin_sym_end] = ACTIONS(959),
    [sym_statement_terminator] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(961),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(959),
    [anon_sym_COLON] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(961),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(963),
    [sym_string] = ACTIONS(959),
    [anon_sym_AT_DQUOTE] = ACTIONS(959),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(961),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(961),
  },
  [336] = {
    [sym_statement_block] = STATE(349),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(56),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(965),
    [sym_statement_terminator] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(965),
    [anon_sym_COLON] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(969),
    [sym_string] = ACTIONS(965),
    [anon_sym_AT_DQUOTE] = ACTIONS(965),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(967),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(967),
  },
  [338] = {
    [sym_elseif] = STATE(325),
    [sym_else] = STATE(326),
    [aux_sym_if_repeat1] = STATE(350),
    [anon_sym_RPAREN] = ACTIONS(717),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(920),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(922),
    [sym_comment] = ACTIONS(56),
  },
  [339] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(351),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(56),
  },
  [340] = {
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [sym_statement_terminator] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(891),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(893),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(891),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(56),
  },
  [341] = {
    [anon_sym_RPAREN] = ACTIONS(897),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(897),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(56),
  },
  [342] = {
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_RBRACE] = ACTIONS(903),
    [sym_statement_terminator] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(903),
    [anon_sym_COLON] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(907),
    [sym_string] = ACTIONS(903),
    [anon_sym_AT_DQUOTE] = ACTIONS(903),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(905),
    [sym_comment] = ACTIONS(56),
  },
  [343] = {
    [sym_elseif] = STATE(325),
    [aux_sym_if_repeat1] = STATE(343),
    [anon_sym_RBRACE] = ACTIONS(909),
    [sym_statement_terminator] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(909),
    [anon_sym_COLON] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(909),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(916),
    [sym_string] = ACTIONS(909),
    [anon_sym_AT_DQUOTE] = ACTIONS(909),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(914),
    [sym_comment] = ACTIONS(56),
  },
  [344] = {
    [anon_sym_RPAREN] = ACTIONS(932),
    [anon_sym_RBRACE] = ACTIONS(932),
    [sym_statement_terminator] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(932),
    [anon_sym_COLON] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(936),
    [sym_string] = ACTIONS(932),
    [anon_sym_AT_DQUOTE] = ACTIONS(932),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(934),
    [sym_comment] = ACTIONS(56),
  },
  [345] = {
    [sym_statement_block] = STATE(352),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [346] = {
    [anon_sym_RPAREN] = ACTIONS(974),
    [sym_comment] = ACTIONS(56),
  },
  [347] = {
    [anon_sym_RPAREN] = ACTIONS(940),
    [anon_sym_RBRACE] = ACTIONS(940),
    [sym_statement_terminator] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(944),
    [sym_string] = ACTIONS(940),
    [anon_sym_AT_DQUOTE] = ACTIONS(940),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(942),
    [sym_comment] = ACTIONS(56),
  },
  [348] = {
    [sym_statement_block] = STATE(354),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(976),
    [sym_statement_terminator] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(976),
    [anon_sym_COLON] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(980),
    [sym_string] = ACTIONS(976),
    [anon_sym_AT_DQUOTE] = ACTIONS(976),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(978),
    [sym_comment] = ACTIONS(50),
    [sym_signature_block] = ACTIONS(978),
  },
  [350] = {
    [sym_elseif] = STATE(325),
    [sym_else] = STATE(342),
    [aux_sym_if_repeat1] = STATE(355),
    [anon_sym_RPAREN] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(920),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(922),
    [sym_comment] = ACTIONS(56),
  },
  [351] = {
    [sym_suffix] = STATE(155),
    [aux_sym_number_repeat1] = STATE(351),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(749),
    [sym_comment] = ACTIONS(56),
  },
  [352] = {
    [anon_sym_RPAREN] = ACTIONS(959),
    [anon_sym_RBRACE] = ACTIONS(959),
    [sym_statement_terminator] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(961),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(959),
    [anon_sym_COLON] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(959),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(961),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(963),
    [sym_string] = ACTIONS(959),
    [anon_sym_AT_DQUOTE] = ACTIONS(959),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(961),
    [sym_comment] = ACTIONS(56),
  },
  [353] = {
    [sym_statement_block] = STATE(356),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(56),
  },
  [354] = {
    [anon_sym_RPAREN] = ACTIONS(965),
    [anon_sym_RBRACE] = ACTIONS(965),
    [sym_statement_terminator] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(965),
    [anon_sym_COLON] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(969),
    [sym_string] = ACTIONS(965),
    [anon_sym_AT_DQUOTE] = ACTIONS(965),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(967),
    [sym_comment] = ACTIONS(56),
  },
  [355] = {
    [sym_elseif] = STATE(325),
    [aux_sym_if_repeat1] = STATE(355),
    [anon_sym_RPAREN] = ACTIONS(909),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
    [sym_comment] = ACTIONS(56),
  },
  [356] = {
    [anon_sym_RPAREN] = ACTIONS(976),
    [anon_sym_RBRACE] = ACTIONS(976),
    [sym_statement_terminator] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(976),
    [anon_sym_COLON] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(980),
    [sym_string] = ACTIONS(976),
    [anon_sym_AT_DQUOTE] = ACTIONS(976),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(978),
    [sym_comment] = ACTIONS(56),
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
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_user_variable, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_user_variable, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_number, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_number, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_number, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 2),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 2),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 2),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expandable_here_string, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expandable_here_string, 2),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expandable_here_string, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expandable_here_string_repeat1, 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expandable_here_string_repeat1, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_suffix, 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_suffix, 1),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_suffix, 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 1),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 1),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_number, 2),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_number, 2),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_number, 2),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 2),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_statement, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(3),
  [311] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(4),
  [314] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [317] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [320] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [323] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [326] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [329] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [332] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [335] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(12),
  [338] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(13),
  [341] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [344] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [347] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(16),
  [350] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [353] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(18),
  [356] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(19),
  [359] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(20),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pipeline, 1),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 3),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_parameter, 2),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 3),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2),
  [478] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(50),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expandable_here_string, 3),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expandable_here_string, 3),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expandable_here_string, 3),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expandable_here_string_repeat1, 2),
  [497] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expandable_here_string_repeat1, 2), SHIFT_REPEAT(55),
  [500] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expandable_here_string_repeat1, 2), SHIFT_REPEAT(56),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2),
  [509] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(58),
  [512] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(58),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [529] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(67),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [556] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [558] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(79),
  [561] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(80),
  [564] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(81),
  [567] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(82),
  [570] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(83),
  [573] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(84),
  [576] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(85),
  [579] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(86),
  [582] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(87),
  [585] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(88),
  [588] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(89),
  [591] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(90),
  [594] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(75),
  [597] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(68),
  [600] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(91),
  [603] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(92),
  [606] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(93),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 1),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [645] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(107),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_condition, 3),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 2),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause_condition, 1),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 4),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [706] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(126),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [749] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(154),
  [752] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(154),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [775] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2), SHIFT_REPEAT(42),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 2),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 4),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause, 2),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_clause, 2),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 3),
  [798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [802] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(180),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expandable_string_part, 4),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expandable_string_part, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 6),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [849] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(210),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 3),
  [872] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(232),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [911] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(249),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [936] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [952] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(288),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [963] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [971] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(323),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
  [980] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
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
