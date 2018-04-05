#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 419
#define SYMBOL_COUNT 165
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
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
  anon_sym_DOLLAR_DOLLAR = 76,
  anon_sym_DOLLAR_QMARK = 77,
  anon_sym_DOLLAR_CARET = 78,
  anon_sym_DOLLAR = 79,
  anon_sym_DOLLAR_LBRACE = 80,
  anon_sym_global = 81,
  anon_sym_local = 82,
  anon_sym_private = 83,
  anon_sym_script = 84,
  anon_sym_using = 85,
  anon_sym_workflow = 86,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH = 87,
  anon_sym__ = 88,
  anon_sym_QMARK = 89,
  sym_string = 90,
  anon_sym_AT_DQUOTE = 91,
  anon_sym_DQUOTE_AT = 92,
  sym_expandable_string_chars = 93,
  aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH = 94,
  aux_sym_SLASH_LBRACKlL_RBRACK_SLASH = 95,
  aux_sym_SLASH_LBRACKdD_RBRACK_SLASH = 96,
  aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH = 97,
  aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH = 98,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH = 99,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH = 100,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH = 101,
  sym_comment = 102,
  sym_signature_block = 103,
  sym_script = 104,
  sym_script_block = 105,
  sym_param_block = 106,
  sym_parameter_list = 107,
  sym_parameter_declaration = 108,
  sym_attribute = 109,
  sym_array_declaration = 110,
  sym_attribute_arguments = 111,
  sym_attribute_argument = 112,
  sym_statement_block = 113,
  sym_statement_list = 114,
  sym_statement = 115,
  sym_pipeline = 116,
  sym_function_definition = 117,
  sym_if = 118,
  sym_elseif = 119,
  sym_else = 120,
  sym_while = 121,
  sym_do = 122,
  sym_for = 123,
  sym_foreach = 124,
  sym_foreach_parameter = 125,
  sym_try = 126,
  sym_catch = 127,
  sym_finally = 128,
  sym_trap = 129,
  sym_data = 130,
  sym_labeled_statement = 131,
  sym_label = 132,
  sym_flow_control_statement = 133,
  sym_flow_break_continue = 134,
  sym_switch = 135,
  sym_switch_parameter = 136,
  sym_switch_condition = 137,
  sym_switch_body = 138,
  sym_switch_clause = 139,
  sym_switch_clause_condition = 140,
  sym_type_literal = 141,
  sym_boolean_value = 142,
  sym_variable = 143,
  sym_variable_scope = 144,
  sym_variable_characters = 145,
  sym_identifier = 146,
  sym_expandable_here_string = 147,
  sym_expandable_string_part = 148,
  sym_number = 149,
  sym_suffix = 150,
  aux_sym_parameter_list_repeat1 = 151,
  aux_sym_parameter_declaration_repeat1 = 152,
  aux_sym_array_declaration_repeat1 = 153,
  aux_sym_attribute_arguments_repeat1 = 154,
  aux_sym_statement_list_repeat1 = 155,
  aux_sym_if_repeat1 = 156,
  aux_sym_try_repeat1 = 157,
  aux_sym_catch_repeat1 = 158,
  aux_sym_switch_repeat1 = 159,
  aux_sym_switch_body_repeat1 = 160,
  aux_sym_variable_repeat1 = 161,
  aux_sym_variable_characters_repeat1 = 162,
  aux_sym_expandable_here_string_repeat1 = 163,
  aux_sym_number_repeat1 = 164,
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
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_DOLLAR_QMARK] = "$?",
  [anon_sym_DOLLAR_CARET] = "$^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_global] = "global",
  [anon_sym_local] = "local",
  [anon_sym_private] = "private",
  [anon_sym_script] = "script",
  [anon_sym_using] = "using",
  [anon_sym_workflow] = "workflow",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = "/[a-zA-Z]\\w*/",
  [anon_sym__] = "_",
  [anon_sym_QMARK] = "?",
  [sym_string] = "string",
  [anon_sym_AT_DQUOTE] = "@\"",
  [anon_sym_DQUOTE_AT] = "\"@",
  [sym_expandable_string_chars] = "expandable_string_chars",
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
  [sym_variable] = "variable",
  [sym_variable_scope] = "variable_scope",
  [sym_variable_characters] = "variable_characters",
  [sym_identifier] = "identifier",
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
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_variable_characters_repeat1] = "variable_characters_repeat1",
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
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_characters] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_characters_repeat1] = {
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
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '@')
        ADVANCE(44);
      if (lookahead == 'G')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == 'g')
        ADVANCE(60);
      if (lookahead == 'l')
        ADVANCE(66);
      if (lookahead == 'p')
        ADVANCE(71);
      if (lookahead == 's')
        ADVANCE(78);
      if (lookahead == 'u')
        ADVANCE(84);
      if (lookahead == '{')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(132);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
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
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '^')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOLLAR_CARET);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH);
      END_STATE();
    case 20:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(18);
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
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 44:
      if (lookahead == '\"')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 49:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 51:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 60:
      if (lookahead == 'l')
        ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'b')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'a')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'c')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 71:
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'i')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'v')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 78:
      if (lookahead == 'c')
        ADVANCE(79);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'r')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'i')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'p')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 84:
      if (lookahead == 's')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'i')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'g')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 91:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 109:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 137:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(146);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(152);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(156);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(160);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 168:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(180);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead == '\"')
        ADVANCE(170);
      if (lookahead == '\\')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 171:
      if (lookahead == '\n')
        ADVANCE(169);
      if (lookahead != 0)
        ADVANCE(169);
      END_STATE();
    case 172:
      if (lookahead == '\'')
        ADVANCE(170);
      if (lookahead == '\\')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(172);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == '\"')
        ADVANCE(45);
      if (lookahead == '\'')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 176:
      if (lookahead == '\'')
        ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|')
        ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead == '@')
        ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(108);
      END_STATE();
    case 179:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(133);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 186:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(187);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '{')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '^')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(14);
      END_STATE();
    case 188:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == '{')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 190:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(48);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 191:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '@')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(197);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(210);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(247);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(206);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(248);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(253);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 268:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == 'g')
        ADVANCE(269);
      if (lookahead == 'l')
        ADVANCE(275);
      if (lookahead == 'p')
        ADVANCE(280);
      if (lookahead == 's')
        ADVANCE(287);
      if (lookahead == 'u')
        ADVANCE(293);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'b')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'a')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'c')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'a')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'r')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'i')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'v')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'a')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 't')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'c')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'r')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'i')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 't')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_script);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'i')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'g')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'r')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'k')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'f')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'w')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 306:
      if (lookahead == '\"')
        ADVANCE(307);
      if (lookahead == '#')
        ADVANCE(311);
      if (lookahead == '$')
        ADVANCE(314);
      if (lookahead == '<')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(308);
      END_STATE();
    case 307:
      if (lookahead == '@')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(309);
      if (lookahead == '$')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(308);
      END_STATE();
    case 310:
      if (lookahead != 0 &&
          lookahead != '(')
        ADVANCE(308);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\n')
        ADVANCE(308);
      if (lookahead == '\"')
        ADVANCE(312);
      if (lookahead == '$')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(308);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '(')
        ADVANCE(308);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(309);
      if (lookahead == '#')
        ADVANCE(316);
      if (lookahead == '$')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(308);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(317);
      if (lookahead == '#')
        ADVANCE(318);
      if (lookahead == '$')
        ADVANCE(321);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(316);
      END_STATE();
    case 317:
      if (lookahead == '#')
        ADVANCE(318);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(309);
      if (lookahead == '#')
        ADVANCE(318);
      if (lookahead == '$')
        ADVANCE(310);
      if (lookahead == '>')
        ADVANCE(308);
      if (lookahead == '?')
        ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '>' || lookahead > '@'))
        ADVANCE(308);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(309);
      if (lookahead == '$')
        ADVANCE(310);
      if (lookahead == ':')
        ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(308);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(317);
      if (lookahead == '$')
        ADVANCE(321);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '<')
        ADVANCE(308);
      if (lookahead != 0)
        ADVANCE(316);
      END_STATE();
    case 321:
      if (lookahead == '#')
        ADVANCE(318);
      if (lookahead == '(')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(316);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_expandable_string_chars);
      if (lookahead == '\"')
        ADVANCE(307);
      if (lookahead == '#')
        ADVANCE(311);
      if (lookahead == '$')
        ADVANCE(314);
      if (lookahead == '<')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(308);
      END_STATE();
    case 323:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(48);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 324:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
      if (lookahead == '(')
        ADVANCE(22);
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
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(174);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead == '{')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 325:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(326);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 331:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(156);
      END_STATE();
    case 332:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
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
        SKIP(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 333:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(347);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(360);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKdD_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 373:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(373);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 374:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(375);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(97);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(125);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH);
      END_STATE();
    case 386:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 387:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(174);
      if (lookahead == '{')
        ADVANCE(89);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(387);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 388:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 389:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(180);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 390:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 391:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(392);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(326);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(391);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(393);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(110);
      END_STATE();
    case 393:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 398:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '@')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(197);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(210);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(247);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(398);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 399:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 402:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(392);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(402);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 403:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(403);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 404:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(48);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(145);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(404);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 405:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(406);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(46);
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(48);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_SLASH);
      END_STATE();
    case 407:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(146);
      END_STATE();
    case 408:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(392);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(408);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 409:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      END_STATE();
    case 410:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(375);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(381);
      END_STATE();
    case 413:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      END_STATE();
    case 414:
      if (lookahead == '\'')
        ADVANCE(175);
      END_STATE();
    case 415:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(392);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(415);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 416:
      if (lookahead == '\"')
        ADVANCE(169);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(172);
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
        ADVANCE(174);
      if (lookahead == '}')
        ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(91);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(392);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(416);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 417:
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(393);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 186},
  [3] = {.lex_state = 188},
  [4] = {.lex_state = 186},
  [5] = {.lex_state = 186},
  [6] = {.lex_state = 186},
  [7] = {.lex_state = 186},
  [8] = {.lex_state = 186},
  [9] = {.lex_state = 186},
  [10] = {.lex_state = 186},
  [11] = {.lex_state = 188},
  [12] = {.lex_state = 188},
  [13] = {.lex_state = 190},
  [14] = {.lex_state = 191},
  [15] = {.lex_state = 186},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 190},
  [18] = {.lex_state = 268},
  [19] = {.lex_state = 268},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 306},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 186},
  [24] = {.lex_state = 186},
  [25] = {.lex_state = 168},
  [26] = {.lex_state = 323},
  [27] = {.lex_state = 168},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 323},
  [30] = {.lex_state = 168},
  [31] = {.lex_state = 186},
  [32] = {.lex_state = 323},
  [33] = {.lex_state = 324},
  [34] = {.lex_state = 186},
  [35] = {.lex_state = 323},
  [36] = {.lex_state = 323},
  [37] = {.lex_state = 323},
  [38] = {.lex_state = 325},
  [39] = {.lex_state = 332},
  [40] = {.lex_state = 186},
  [41] = {.lex_state = 333},
  [42] = {.lex_state = 186},
  [43] = {.lex_state = 323},
  [44] = {.lex_state = 373},
  [45] = {.lex_state = 188},
  [46] = {.lex_state = 190},
  [47] = {.lex_state = 186},
  [48] = {.lex_state = 190},
  [49] = {.lex_state = 186},
  [50] = {.lex_state = 323},
  [51] = {.lex_state = 190},
  [52] = {.lex_state = 190},
  [53] = {.lex_state = 323},
  [54] = {.lex_state = 333},
  [55] = {.lex_state = 186},
  [56] = {.lex_state = 186},
  [57] = {.lex_state = 186},
  [58] = {.lex_state = 186},
  [59] = {.lex_state = 191},
  [60] = {.lex_state = 188},
  [61] = {.lex_state = 188},
  [62] = {.lex_state = 191},
  [63] = {.lex_state = 191},
  [64] = {.lex_state = 188},
  [65] = {.lex_state = 386},
  [66] = {.lex_state = 188},
  [67] = {.lex_state = 386},
  [68] = {.lex_state = 188},
  [69] = {.lex_state = 186},
  [70] = {.lex_state = 190},
  [71] = {.lex_state = 306},
  [72] = {.lex_state = 306},
  [73] = {.lex_state = 190},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 186},
  [77] = {.lex_state = 168},
  [78] = {.lex_state = 168},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 168},
  [81] = {.lex_state = 387},
  [82] = {.lex_state = 188},
  [83] = {.lex_state = 388},
  [84] = {.lex_state = 268},
  [85] = {.lex_state = 268},
  [86] = {.lex_state = 186},
  [87] = {.lex_state = 186},
  [88] = {.lex_state = 186},
  [89] = {.lex_state = 186},
  [90] = {.lex_state = 389},
  [91] = {.lex_state = 186},
  [92] = {.lex_state = 390},
  [93] = {.lex_state = 186},
  [94] = {.lex_state = 186},
  [95] = {.lex_state = 391},
  [96] = {.lex_state = 188},
  [97] = {.lex_state = 186},
  [98] = {.lex_state = 186},
  [99] = {.lex_state = 186},
  [100] = {.lex_state = 186},
  [101] = {.lex_state = 186},
  [102] = {.lex_state = 186},
  [103] = {.lex_state = 186},
  [104] = {.lex_state = 188},
  [105] = {.lex_state = 390},
  [106] = {.lex_state = 398},
  [107] = {.lex_state = 186},
  [108] = {.lex_state = 268},
  [109] = {.lex_state = 390},
  [110] = {.lex_state = 306},
  [111] = {.lex_state = 323},
  [112] = {.lex_state = 186},
  [113] = {.lex_state = 323},
  [114] = {.lex_state = 323},
  [115] = {.lex_state = 323},
  [116] = {.lex_state = 186},
  [117] = {.lex_state = 186},
  [118] = {.lex_state = 268},
  [119] = {.lex_state = 332},
  [120] = {.lex_state = 332},
  [121] = {.lex_state = 268},
  [122] = {.lex_state = 399},
  [123] = {.lex_state = 186},
  [124] = {.lex_state = 186},
  [125] = {.lex_state = 402},
  [126] = {.lex_state = 186},
  [127] = {.lex_state = 186},
  [128] = {.lex_state = 186},
  [129] = {.lex_state = 373},
  [130] = {.lex_state = 190},
  [131] = {.lex_state = 373},
  [132] = {.lex_state = 186},
  [133] = {.lex_state = 190},
  [134] = {.lex_state = 190},
  [135] = {.lex_state = 186},
  [136] = {.lex_state = 186},
  [137] = {.lex_state = 188},
  [138] = {.lex_state = 190},
  [139] = {.lex_state = 186},
  [140] = {.lex_state = 186},
  [141] = {.lex_state = 188},
  [142] = {.lex_state = 191},
  [143] = {.lex_state = 191},
  [144] = {.lex_state = 191},
  [145] = {.lex_state = 188},
  [146] = {.lex_state = 386},
  [147] = {.lex_state = 188},
  [148] = {.lex_state = 190},
  [149] = {.lex_state = 188},
  [150] = {.lex_state = 323},
  [151] = {.lex_state = 190},
  [152] = {.lex_state = 306},
  [153] = {.lex_state = 190},
  [154] = {.lex_state = 186},
  [155] = {.lex_state = 188},
  [156] = {.lex_state = 188},
  [157] = {.lex_state = 188},
  [158] = {.lex_state = 188},
  [159] = {.lex_state = 186},
  [160] = {.lex_state = 387},
  [161] = {.lex_state = 186},
  [162] = {.lex_state = 186},
  [163] = {.lex_state = 186},
  [164] = {.lex_state = 186},
  [165] = {.lex_state = 323},
  [166] = {.lex_state = 186},
  [167] = {.lex_state = 389},
  [168] = {.lex_state = 186},
  [169] = {.lex_state = 186},
  [170] = {.lex_state = 186},
  [171] = {.lex_state = 323},
  [172] = {.lex_state = 323},
  [173] = {.lex_state = 325},
  [174] = {.lex_state = 332},
  [175] = {.lex_state = 186},
  [176] = {.lex_state = 186},
  [177] = {.lex_state = 403},
  [178] = {.lex_state = 390},
  [179] = {.lex_state = 186},
  [180] = {.lex_state = 390},
  [181] = {.lex_state = 186},
  [182] = {.lex_state = 390},
  [183] = {.lex_state = 186},
  [184] = {.lex_state = 186},
  [185] = {.lex_state = 398},
  [186] = {.lex_state = 188},
  [187] = {.lex_state = 398},
  [188] = {.lex_state = 398},
  [189] = {.lex_state = 390},
  [190] = {.lex_state = 306},
  [191] = {.lex_state = 404},
  [192] = {.lex_state = 404},
  [193] = {.lex_state = 323},
  [194] = {.lex_state = 391},
  [195] = {.lex_state = 323},
  [196] = {.lex_state = 390},
  [197] = {.lex_state = 323},
  [198] = {.lex_state = 323},
  [199] = {.lex_state = 190},
  [200] = {.lex_state = 188},
  [201] = {.lex_state = 332},
  [202] = {.lex_state = 186},
  [203] = {.lex_state = 332},
  [204] = {.lex_state = 332},
  [205] = {.lex_state = 399},
  [206] = {.lex_state = 188},
  [207] = {.lex_state = 399},
  [208] = {.lex_state = 399},
  [209] = {.lex_state = 186},
  [210] = {.lex_state = 399},
  [211] = {.lex_state = 402},
  [212] = {.lex_state = 373},
  [213] = {.lex_state = 186},
  [214] = {.lex_state = 186},
  [215] = {.lex_state = 190},
  [216] = {.lex_state = 190},
  [217] = {.lex_state = 373},
  [218] = {.lex_state = 188},
  [219] = {.lex_state = 186},
  [220] = {.lex_state = 186},
  [221] = {.lex_state = 186},
  [222] = {.lex_state = 190},
  [223] = {.lex_state = 188},
  [224] = {.lex_state = 186},
  [225] = {.lex_state = 186},
  [226] = {.lex_state = 188},
  [227] = {.lex_state = 190},
  [228] = {.lex_state = 190},
  [229] = {.lex_state = 186},
  [230] = {.lex_state = 186},
  [231] = {.lex_state = 188},
  [232] = {.lex_state = 268},
  [233] = {.lex_state = 405},
  [234] = {.lex_state = 186},
  [235] = {.lex_state = 188},
  [236] = {.lex_state = 186},
  [237] = {.lex_state = 186},
  [238] = {.lex_state = 188},
  [239] = {.lex_state = 188},
  [240] = {.lex_state = 188},
  [241] = {.lex_state = 388},
  [242] = {.lex_state = 186},
  [243] = {.lex_state = 387},
  [244] = {.lex_state = 186},
  [245] = {.lex_state = 190},
  [246] = {.lex_state = 186},
  [247] = {.lex_state = 186},
  [248] = {.lex_state = 408},
  [249] = {.lex_state = 190},
  [250] = {.lex_state = 389},
  [251] = {.lex_state = 186},
  [252] = {.lex_state = 186},
  [253] = {.lex_state = 186},
  [254] = {.lex_state = 186},
  [255] = {.lex_state = 186},
  [256] = {.lex_state = 332},
  [257] = {.lex_state = 399},
  [258] = {.lex_state = 186},
  [259] = {.lex_state = 186},
  [260] = {.lex_state = 186},
  [261] = {.lex_state = 390},
  [262] = {.lex_state = 390},
  [263] = {.lex_state = 403},
  [264] = {.lex_state = 390},
  [265] = {.lex_state = 390},
  [266] = {.lex_state = 188},
  [267] = {.lex_state = 390},
  [268] = {.lex_state = 186},
  [269] = {.lex_state = 398},
  [270] = {.lex_state = 398},
  [271] = {.lex_state = 398},
  [272] = {.lex_state = 390},
  [273] = {.lex_state = 323},
  [274] = {.lex_state = 186},
  [275] = {.lex_state = 332},
  [276] = {.lex_state = 332},
  [277] = {.lex_state = 190},
  [278] = {.lex_state = 186},
  [279] = {.lex_state = 332},
  [280] = {.lex_state = 332},
  [281] = {.lex_state = 186},
  [282] = {.lex_state = 399},
  [283] = {.lex_state = 399},
  [284] = {.lex_state = 399},
  [285] = {.lex_state = 186},
  [286] = {.lex_state = 186},
  [287] = {.lex_state = 373},
  [288] = {.lex_state = 186},
  [289] = {.lex_state = 186},
  [290] = {.lex_state = 186},
  [291] = {.lex_state = 186},
  [292] = {.lex_state = 186},
  [293] = {.lex_state = 323},
  [294] = {.lex_state = 188},
  [295] = {.lex_state = 190},
  [296] = {.lex_state = 188},
  [297] = {.lex_state = 323},
  [298] = {.lex_state = 409},
  [299] = {.lex_state = 188},
  [300] = {.lex_state = 188},
  [301] = {.lex_state = 405},
  [302] = {.lex_state = 306},
  [303] = {.lex_state = 186},
  [304] = {.lex_state = 186},
  [305] = {.lex_state = 186},
  [306] = {.lex_state = 186},
  [307] = {.lex_state = 388},
  [308] = {.lex_state = 190},
  [309] = {.lex_state = 186},
  [310] = {.lex_state = 186},
  [311] = {.lex_state = 408},
  [312] = {.lex_state = 190},
  [313] = {.lex_state = 408},
  [314] = {.lex_state = 186},
  [315] = {.lex_state = 389},
  [316] = {.lex_state = 186},
  [317] = {.lex_state = 186},
  [318] = {.lex_state = 323},
  [319] = {.lex_state = 390},
  [320] = {.lex_state = 186},
  [321] = {.lex_state = 332},
  [322] = {.lex_state = 332},
  [323] = {.lex_state = 186},
  [324] = {.lex_state = 399},
  [325] = {.lex_state = 390},
  [326] = {.lex_state = 186},
  [327] = {.lex_state = 390},
  [328] = {.lex_state = 390},
  [329] = {.lex_state = 403},
  [330] = {.lex_state = 390},
  [331] = {.lex_state = 188},
  [332] = {.lex_state = 390},
  [333] = {.lex_state = 190},
  [334] = {.lex_state = 190},
  [335] = {.lex_state = 186},
  [336] = {.lex_state = 332},
  [337] = {.lex_state = 186},
  [338] = {.lex_state = 186},
  [339] = {.lex_state = 186},
  [340] = {.lex_state = 186},
  [341] = {.lex_state = 186},
  [342] = {.lex_state = 188},
  [343] = {.lex_state = 186},
  [344] = {.lex_state = 186},
  [345] = {.lex_state = 409},
  [346] = {.lex_state = 188},
  [347] = {.lex_state = 188},
  [348] = {.lex_state = 405},
  [349] = {.lex_state = 188},
  [350] = {.lex_state = 186},
  [351] = {.lex_state = 186},
  [352] = {.lex_state = 413},
  [353] = {.lex_state = 408},
  [354] = {.lex_state = 190},
  [355] = {.lex_state = 190},
  [356] = {.lex_state = 408},
  [357] = {.lex_state = 390},
  [358] = {.lex_state = 186},
  [359] = {.lex_state = 415},
  [360] = {.lex_state = 390},
  [361] = {.lex_state = 186},
  [362] = {.lex_state = 390},
  [363] = {.lex_state = 186},
  [364] = {.lex_state = 332},
  [365] = {.lex_state = 332},
  [366] = {.lex_state = 186},
  [367] = {.lex_state = 186},
  [368] = {.lex_state = 186},
  [369] = {.lex_state = 390},
  [370] = {.lex_state = 390},
  [371] = {.lex_state = 190},
  [372] = {.lex_state = 186},
  [373] = {.lex_state = 186},
  [374] = {.lex_state = 190},
  [375] = {.lex_state = 186},
  [376] = {.lex_state = 188},
  [377] = {.lex_state = 186},
  [378] = {.lex_state = 409},
  [379] = {.lex_state = 186},
  [380] = {.lex_state = 186},
  [381] = {.lex_state = 186},
  [382] = {.lex_state = 186},
  [383] = {.lex_state = 405},
  [384] = {.lex_state = 390},
  [385] = {.lex_state = 186},
  [386] = {.lex_state = 186},
  [387] = {.lex_state = 416},
  [388] = {.lex_state = 390},
  [389] = {.lex_state = 415},
  [390] = {.lex_state = 390},
  [391] = {.lex_state = 390},
  [392] = {.lex_state = 186},
  [393] = {.lex_state = 332},
  [394] = {.lex_state = 186},
  [395] = {.lex_state = 186},
  [396] = {.lex_state = 186},
  [397] = {.lex_state = 190},
  [398] = {.lex_state = 186},
  [399] = {.lex_state = 190},
  [400] = {.lex_state = 417},
  [401] = {.lex_state = 405},
  [402] = {.lex_state = 416},
  [403] = {.lex_state = 390},
  [404] = {.lex_state = 390},
  [405] = {.lex_state = 415},
  [406] = {.lex_state = 390},
  [407] = {.lex_state = 186},
  [408] = {.lex_state = 186},
  [409] = {.lex_state = 390},
  [410] = {.lex_state = 186},
  [411] = {.lex_state = 190},
  [412] = {.lex_state = 417},
  [413] = {.lex_state = 405},
  [414] = {.lex_state = 390},
  [415] = {.lex_state = 186},
  [416] = {.lex_state = 390},
  [417] = {.lex_state = 417},
  [418] = {.lex_state = 390},
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
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(1),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_AT] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_signature_block] = ACTIONS(3),
  },
  [1] = {
    [sym_script] = STATE(24),
    [sym_script_block] = STATE(25),
    [sym_param_block] = STATE(26),
    [sym_statement_list] = STATE(27),
    [sym_statement] = STATE(28),
    [sym_function_definition] = STATE(20),
    [sym_if] = STATE(20),
    [sym_while] = STATE(20),
    [sym_do] = STATE(20),
    [sym_for] = STATE(20),
    [sym_foreach] = STATE(20),
    [sym_try] = STATE(20),
    [sym_trap] = STATE(20),
    [sym_data] = STATE(20),
    [sym_labeled_statement] = STATE(20),
    [sym_label] = STATE(29),
    [sym_flow_control_statement] = STATE(20),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(20),
    [sym_boolean_value] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_expandable_here_string] = STATE(20),
    [sym_number] = STATE(20),
    [aux_sym_statement_list_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(40),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(40),
    [anon_sym_DOLLAR_CARET] = ACTIONS(40),
    [anon_sym_DOLLAR] = ACTIONS(42),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(44),
    [sym_string] = ACTIONS(46),
    [anon_sym_AT_DQUOTE] = ACTIONS(48),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(54),
  },
  [2] = {
    [sym_parameter_list] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [3] = {
    [sym_identifier] = STATE(34),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(58),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(58),
  },
  [6] = {
    [sym_statement_block] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(58),
  },
  [8] = {
    [sym_foreach_parameter] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(58),
  },
  [9] = {
    [sym_statement_block] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [10] = {
    [sym_statement_block] = STATE(46),
    [sym_type_literal] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [11] = {
    [sym_statement_block] = STATE(48),
    [sym_identifier] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [12] = {
    [sym_identifier] = STATE(50),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(78),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(78),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(78),
    [anon_sym_DOLLAR_CARET] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [anon_sym_AT_DQUOTE] = ACTIONS(78),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(80),
  },
  [14] = {
    [sym_identifier] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_statement_terminator] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(82),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(82),
    [anon_sym_DOLLAR_CARET] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(86),
    [sym_string] = ACTIONS(82),
    [anon_sym_AT_DQUOTE] = ACTIONS(82),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(84),
  },
  [15] = {
    [sym_switch_parameter] = STATE(55),
    [sym_switch_condition] = STATE(56),
    [aux_sym_switch_repeat1] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [16] = {
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
    [anon_sym_COLON] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(92),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(92),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(92),
    [anon_sym_DOLLAR_CARET] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(92),
    [sym_string] = ACTIONS(92),
    [anon_sym_AT_DQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(94),
  },
  [17] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(96),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(96),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(96),
    [anon_sym_DOLLAR_CARET] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(96),
    [sym_string] = ACTIONS(96),
    [anon_sym_AT_DQUOTE] = ACTIONS(96),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(98),
  },
  [18] = {
    [sym_variable_scope] = STATE(61),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(62),
    [aux_sym_variable_repeat1] = STATE(63),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(102),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [19] = {
    [sym_variable_scope] = STATE(66),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(68),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [20] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(108),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(108),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(108),
    [anon_sym_DOLLAR_CARET] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(108),
    [sym_string] = ACTIONS(108),
    [anon_sym_AT_DQUOTE] = ACTIONS(108),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(110),
  },
  [21] = {
    [sym_expandable_string_part] = STATE(71),
    [aux_sym_expandable_here_string_repeat1] = STATE(72),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_DQUOTE_AT] = ACTIONS(114),
    [sym_expandable_string_chars] = ACTIONS(116),
    [sym_comment] = ACTIONS(52),
  },
  [22] = {
    [sym_suffix] = STATE(74),
    [aux_sym_number_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_statement_terminator] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(118),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(118),
    [anon_sym_DOLLAR_CARET] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(118),
    [sym_string] = ACTIONS(118),
    [anon_sym_AT_DQUOTE] = ACTIONS(118),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(120),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(58),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_comment] = ACTIONS(58),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(130),
  },
  [26] = {
    [sym_statement_list] = STATE(77),
    [sym_statement] = STATE(28),
    [sym_function_definition] = STATE(20),
    [sym_if] = STATE(20),
    [sym_while] = STATE(20),
    [sym_do] = STATE(20),
    [sym_for] = STATE(20),
    [sym_foreach] = STATE(20),
    [sym_try] = STATE(20),
    [sym_trap] = STATE(20),
    [sym_data] = STATE(20),
    [sym_labeled_statement] = STATE(20),
    [sym_label] = STATE(29),
    [sym_flow_control_statement] = STATE(20),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(20),
    [sym_boolean_value] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_expandable_here_string] = STATE(20),
    [sym_number] = STATE(20),
    [aux_sym_statement_list_repeat1] = STATE(30),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(40),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(40),
    [anon_sym_DOLLAR_CARET] = ACTIONS(40),
    [anon_sym_DOLLAR] = ACTIONS(42),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(44),
    [sym_string] = ACTIONS(46),
    [anon_sym_AT_DQUOTE] = ACTIONS(48),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(58),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(134),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_statement_terminator] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(136),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(136),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(136),
    [anon_sym_DOLLAR_CARET] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [anon_sym_AT_DQUOTE] = ACTIONS(136),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(140),
  },
  [29] = {
    [sym_while] = STATE(79),
    [sym_do] = STATE(79),
    [sym_for] = STATE(79),
    [sym_foreach] = STATE(79),
    [sym_switch] = STATE(79),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [sym_comment] = ACTIONS(58),
  },
  [30] = {
    [sym_statement] = STATE(28),
    [sym_function_definition] = STATE(20),
    [sym_if] = STATE(20),
    [sym_while] = STATE(20),
    [sym_do] = STATE(20),
    [sym_for] = STATE(20),
    [sym_foreach] = STATE(20),
    [sym_try] = STATE(20),
    [sym_trap] = STATE(20),
    [sym_data] = STATE(20),
    [sym_labeled_statement] = STATE(20),
    [sym_label] = STATE(29),
    [sym_flow_control_statement] = STATE(20),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(20),
    [sym_boolean_value] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_expandable_here_string] = STATE(20),
    [sym_number] = STATE(20),
    [aux_sym_statement_list_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(36),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(38),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(40),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(40),
    [anon_sym_DOLLAR_CARET] = ACTIONS(40),
    [anon_sym_DOLLAR] = ACTIONS(42),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(44),
    [sym_string] = ACTIONS(46),
    [anon_sym_AT_DQUOTE] = ACTIONS(48),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(144),
  },
  [31] = {
    [sym_parameter_declaration] = STATE(86),
    [sym_attribute] = STATE(87),
    [sym_variable] = STATE(88),
    [aux_sym_parameter_declaration_repeat1] = STATE(89),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [32] = {
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(156),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(156),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(156),
    [anon_sym_DOLLAR_CARET] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(158),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(156),
    [sym_string] = ACTIONS(156),
    [anon_sym_AT_DQUOTE] = ACTIONS(156),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(58),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(58),
  },
  [34] = {
    [sym_parameter_list] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(58),
  },
  [35] = {
    [sym_boolean_value] = STATE(93),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [36] = {
    [sym_boolean_value] = STATE(94),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [37] = {
    [sym_statement_list] = STATE(112),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [anon_sym_RBRACE] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [38] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(202),
    [sym_comment] = ACTIONS(58),
  },
  [39] = {
    [sym_pipeline] = STATE(119),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(204),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [40] = {
    [sym_variable] = STATE(122),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [41] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(210),
    [sym_comment] = ACTIONS(58),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(212),
    [sym_comment] = ACTIONS(58),
  },
  [43] = {
    [sym_statement_list] = STATE(126),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [anon_sym_RBRACE] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [44] = {
    [sym_catch] = STATE(129),
    [sym_finally] = STATE(130),
    [aux_sym_try_repeat1] = STATE(131),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(216),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(216),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(216),
    [anon_sym_DOLLAR_CARET] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(216),
    [sym_string] = ACTIONS(216),
    [anon_sym_AT_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(218),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(218),
  },
  [45] = {
    [sym_identifier] = STATE(132),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(224),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(224),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(224),
    [anon_sym_DOLLAR_CARET] = ACTIONS(224),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(224),
    [sym_string] = ACTIONS(224),
    [anon_sym_AT_DQUOTE] = ACTIONS(224),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(226),
  },
  [47] = {
    [sym_statement_block] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [48] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(228),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(228),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(228),
    [anon_sym_DOLLAR_CARET] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(230),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(228),
    [sym_string] = ACTIONS(228),
    [anon_sym_AT_DQUOTE] = ACTIONS(228),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(230),
  },
  [49] = {
    [sym_statement_block] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [50] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(232),
    [sym_comment] = ACTIONS(58),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(162),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_statement_terminator] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(236),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(236),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(236),
    [anon_sym_DOLLAR_CARET] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(236),
    [sym_string] = ACTIONS(236),
    [anon_sym_AT_DQUOTE] = ACTIONS(236),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(238),
  },
  [53] = {
    [sym_boolean_value] = STATE(135),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [54] = {
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
    [sym_comment] = ACTIONS(58),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [sym_comment] = ACTIONS(58),
  },
  [56] = {
    [sym_switch_body] = STATE(138),
    [anon_sym_LBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(58),
  },
  [57] = {
    [sym_switch_parameter] = STATE(55),
    [sym_switch_condition] = STATE(139),
    [aux_sym_switch_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [58] = {
    [anon_sym_COLON] = ACTIONS(248),
    [sym_comment] = ACTIONS(58),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(162),
  },
  [60] = {
    [anon_sym_COLON] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(254),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [sym_comment] = ACTIONS(58),
  },
  [61] = {
    [sym_identifier] = STATE(62),
    [aux_sym_variable_repeat1] = STATE(143),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(256),
    [sym_comment] = ACTIONS(58),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_statement_terminator] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(258),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(258),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(258),
    [anon_sym_DOLLAR_CARET] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(262),
    [sym_string] = ACTIONS(258),
    [anon_sym_AT_DQUOTE] = ACTIONS(258),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(260),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(260),
  },
  [63] = {
    [sym_identifier] = STATE(62),
    [aux_sym_variable_repeat1] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_statement_terminator] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(264),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(264),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(264),
    [anon_sym_DOLLAR_CARET] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(268),
    [sym_string] = ACTIONS(264),
    [anon_sym_AT_DQUOTE] = ACTIONS(264),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(266),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(266),
  },
  [64] = {
    [aux_sym_variable_characters_repeat1] = STATE(145),
    [anon_sym_COLON] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(272),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [65] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(252),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(162),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [sym_comment] = ACTIONS(58),
  },
  [66] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(147),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [67] = {
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [sym_statement_terminator] = ACTIONS(258),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(258),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(258),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(258),
    [anon_sym_DOLLAR_CARET] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(260),
    [sym_comment] = ACTIONS(58),
  },
  [68] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(276),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [sym_comment] = ACTIONS(58),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_statement_terminator] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(280),
    [anon_sym_COLON] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(280),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(280),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(280),
    [anon_sym_DOLLAR_CARET] = ACTIONS(280),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(280),
    [sym_string] = ACTIONS(280),
    [anon_sym_AT_DQUOTE] = ACTIONS(280),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(282),
  },
  [71] = {
    [anon_sym_DOLLAR] = ACTIONS(284),
    [anon_sym_DQUOTE_AT] = ACTIONS(286),
    [sym_expandable_string_chars] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [72] = {
    [sym_expandable_string_part] = STATE(71),
    [aux_sym_expandable_here_string_repeat1] = STATE(152),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_DQUOTE_AT] = ACTIONS(288),
    [sym_expandable_string_chars] = ACTIONS(116),
    [sym_comment] = ACTIONS(52),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_statement_terminator] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(290),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(290),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(290),
    [anon_sym_DOLLAR_CARET] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [anon_sym_AT_DQUOTE] = ACTIONS(290),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(292),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_statement_terminator] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(294),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(294),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(294),
    [anon_sym_DOLLAR_CARET] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(294),
    [sym_string] = ACTIONS(294),
    [anon_sym_AT_DQUOTE] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(296),
  },
  [75] = {
    [sym_suffix] = STATE(74),
    [aux_sym_number_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_statement_terminator] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(298),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(298),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(298),
    [anon_sym_DOLLAR_CARET] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [anon_sym_AT_DQUOTE] = ACTIONS(298),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(300),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_comment] = ACTIONS(58),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(306),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(308),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(308),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(308),
    [anon_sym_DOLLAR_CARET] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [anon_sym_AT_DQUOTE] = ACTIONS(308),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(310),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(310),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym_statement_terminator] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(312),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(312),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(312),
    [anon_sym_DOLLAR_CARET] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(312),
    [sym_string] = ACTIONS(312),
    [anon_sym_AT_DQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(314),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(314),
  },
  [80] = {
    [sym_statement] = STATE(28),
    [sym_function_definition] = STATE(20),
    [sym_if] = STATE(20),
    [sym_while] = STATE(20),
    [sym_do] = STATE(20),
    [sym_for] = STATE(20),
    [sym_foreach] = STATE(20),
    [sym_try] = STATE(20),
    [sym_trap] = STATE(20),
    [sym_data] = STATE(20),
    [sym_labeled_statement] = STATE(20),
    [sym_label] = STATE(29),
    [sym_flow_control_statement] = STATE(20),
    [sym_flow_break_continue] = STATE(13),
    [sym_switch] = STATE(20),
    [sym_boolean_value] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_expandable_here_string] = STATE(20),
    [sym_number] = STATE(20),
    [aux_sym_statement_list_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(358),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(358),
    [anon_sym_DOLLAR_CARET] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(364),
    [sym_string] = ACTIONS(367),
    [anon_sym_AT_DQUOTE] = ACTIONS(370),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(310),
  },
  [81] = {
    [anon_sym_LBRACE] = ACTIONS(376),
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
    [anon_sym_COLON] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(376),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(376),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(376),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(376),
    [anon_sym_DOLLAR_CARET] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(376),
    [sym_string] = ACTIONS(376),
    [anon_sym_AT_DQUOTE] = ACTIONS(376),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(378),
    [sym_comment] = ACTIONS(58),
  },
  [82] = {
    [sym_identifier] = STATE(154),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(96),
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
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(96),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(96),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(96),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(96),
    [anon_sym_DOLLAR_CARET] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(96),
    [sym_string] = ACTIONS(96),
    [anon_sym_AT_DQUOTE] = ACTIONS(96),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [84] = {
    [sym_variable_scope] = STATE(155),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(156),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [85] = {
    [sym_variable_scope] = STATE(157),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(158),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [86] = {
    [aux_sym_parameter_list_repeat1] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(382),
    [sym_comment] = ACTIONS(58),
  },
  [87] = {
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(384),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(384),
    [anon_sym_DOLLAR_CARET] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(384),
    [sym_comment] = ACTIONS(58),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(58),
  },
  [89] = {
    [sym_attribute] = STATE(87),
    [sym_variable] = STATE(162),
    [aux_sym_parameter_declaration_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [90] = {
    [sym_script_block] = STATE(164),
    [sym_param_block] = STATE(165),
    [sym_statement_list] = STATE(166),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_comment] = ACTIONS(58),
  },
  [92] = {
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
    [anon_sym_COLON] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(92),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(92),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(92),
    [anon_sym_DOLLAR_CARET] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(92),
    [sym_string] = ACTIONS(92),
    [anon_sym_AT_DQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(58),
  },
  [93] = {
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(58),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(394),
    [sym_comment] = ACTIONS(58),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(396),
    [sym_statement_terminator] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(396),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(396),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(396),
    [anon_sym_DOLLAR_CARET] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(396),
    [sym_string] = ACTIONS(396),
    [anon_sym_AT_DQUOTE] = ACTIONS(396),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(398),
    [sym_comment] = ACTIONS(58),
  },
  [96] = {
    [sym_identifier] = STATE(170),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(400),
    [sym_comment] = ACTIONS(58),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(402),
    [sym_comment] = ACTIONS(58),
  },
  [99] = {
    [sym_statement_block] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(58),
  },
  [101] = {
    [sym_foreach_parameter] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(58),
  },
  [102] = {
    [sym_statement_block] = STATE(177),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [103] = {
    [sym_statement_block] = STATE(178),
    [sym_type_literal] = STATE(179),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [104] = {
    [sym_statement_block] = STATE(180),
    [sym_identifier] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(78),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(78),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(78),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(78),
    [anon_sym_DOLLAR_CARET] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [anon_sym_AT_DQUOTE] = ACTIONS(78),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(58),
  },
  [106] = {
    [sym_identifier] = STATE(182),
    [anon_sym_RBRACE] = ACTIONS(82),
    [sym_statement_terminator] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(82),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(82),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(82),
    [anon_sym_DOLLAR_CARET] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(408),
    [sym_string] = ACTIONS(82),
    [anon_sym_AT_DQUOTE] = ACTIONS(82),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(58),
  },
  [107] = {
    [sym_switch_parameter] = STATE(55),
    [sym_switch_condition] = STATE(183),
    [aux_sym_switch_repeat1] = STATE(184),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [108] = {
    [sym_variable_scope] = STATE(186),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(187),
    [aux_sym_variable_repeat1] = STATE(188),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(410),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(108),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(108),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(108),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(108),
    [anon_sym_DOLLAR_CARET] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(108),
    [sym_string] = ACTIONS(108),
    [anon_sym_AT_DQUOTE] = ACTIONS(108),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(58),
  },
  [110] = {
    [sym_expandable_string_part] = STATE(71),
    [aux_sym_expandable_here_string_repeat1] = STATE(190),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_DQUOTE_AT] = ACTIONS(412),
    [sym_expandable_string_chars] = ACTIONS(116),
    [sym_comment] = ACTIONS(52),
  },
  [111] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(193),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym_statement_terminator] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(118),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(118),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(118),
    [anon_sym_DOLLAR_CARET] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(118),
    [sym_string] = ACTIONS(118),
    [anon_sym_AT_DQUOTE] = ACTIONS(118),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(58),
  },
  [112] = {
    [anon_sym_RBRACE] = ACTIONS(418),
    [sym_comment] = ACTIONS(58),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(136),
    [sym_statement_terminator] = ACTIONS(420),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(136),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(136),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(136),
    [anon_sym_DOLLAR_CARET] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [anon_sym_AT_DQUOTE] = ACTIONS(136),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(58),
  },
  [114] = {
    [sym_while] = STATE(196),
    [sym_do] = STATE(196),
    [sym_for] = STATE(196),
    [sym_foreach] = STATE(196),
    [sym_switch] = STATE(196),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [sym_comment] = ACTIONS(58),
  },
  [115] = {
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(197),
    [anon_sym_RBRACE] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(58),
  },
  [117] = {
    [sym_statement_block] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [118] = {
    [sym_variable_scope] = STATE(200),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(201),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [119] = {
    [sym_pipeline] = STATE(204),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_statement_terminator] = ACTIONS(426),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_statement_terminator] = ACTIONS(428),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(428),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(428),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(428),
    [anon_sym_DOLLAR_CARET] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(430),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(58),
  },
  [121] = {
    [sym_variable_scope] = STATE(206),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(207),
    [aux_sym_variable_repeat1] = STATE(208),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(432),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [122] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [sym_comment] = ACTIONS(58),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(436),
    [sym_comment] = ACTIONS(58),
  },
  [124] = {
    [sym_variable] = STATE(210),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_statement_terminator] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(396),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(396),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(396),
    [anon_sym_DOLLAR_CARET] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(396),
    [sym_string] = ACTIONS(396),
    [anon_sym_AT_DQUOTE] = ACTIONS(396),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(398),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(398),
  },
  [126] = {
    [anon_sym_RBRACE] = ACTIONS(438),
    [sym_comment] = ACTIONS(58),
  },
  [127] = {
    [sym_statement_block] = STATE(212),
    [sym_type_literal] = STATE(213),
    [aux_sym_catch_repeat1] = STATE(214),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [128] = {
    [sym_statement_block] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [129] = {
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(440),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(440),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(440),
    [anon_sym_DOLLAR_CARET] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [anon_sym_AT_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(442),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_statement_terminator] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(444),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(444),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(444),
    [anon_sym_DOLLAR_CARET] = ACTIONS(444),
    [anon_sym_DOLLAR] = ACTIONS(446),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(444),
    [sym_string] = ACTIONS(444),
    [anon_sym_AT_DQUOTE] = ACTIONS(444),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(446),
  },
  [131] = {
    [sym_catch] = STATE(129),
    [sym_finally] = STATE(216),
    [aux_sym_try_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_statement_terminator] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(444),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(444),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(444),
    [anon_sym_DOLLAR_CARET] = ACTIONS(444),
    [anon_sym_DOLLAR] = ACTIONS(446),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(444),
    [sym_string] = ACTIONS(444),
    [anon_sym_AT_DQUOTE] = ACTIONS(444),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(446),
  },
  [132] = {
    [sym_array_declaration] = STATE(220),
    [sym_type_literal] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_comment] = ACTIONS(58),
  },
  [133] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(452),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(452),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(452),
    [anon_sym_DOLLAR_CARET] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(454),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(452),
    [sym_string] = ACTIONS(452),
    [anon_sym_AT_DQUOTE] = ACTIONS(452),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(454),
  },
  [134] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(456),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(456),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(456),
    [anon_sym_DOLLAR_CARET] = ACTIONS(456),
    [anon_sym_DOLLAR] = ACTIONS(458),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(456),
    [sym_string] = ACTIONS(456),
    [anon_sym_AT_DQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(458),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(460),
    [sym_comment] = ACTIONS(58),
  },
  [136] = {
    [anon_sym_LPAREN] = ACTIONS(462),
    [anon_sym_DASH] = ACTIONS(462),
    [sym_comment] = ACTIONS(58),
  },
  [137] = {
    [sym_switch_clause] = STATE(223),
    [sym_switch_clause_condition] = STATE(224),
    [sym_identifier] = STATE(225),
    [aux_sym_switch_body_repeat1] = STATE(226),
    [anon_sym_RBRACE] = ACTIONS(464),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [sym_statement_terminator] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(466),
    [anon_sym_COLON] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(466),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(466),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(466),
    [anon_sym_DOLLAR_CARET] = ACTIONS(466),
    [anon_sym_DOLLAR] = ACTIONS(468),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(466),
    [sym_string] = ACTIONS(466),
    [anon_sym_AT_DQUOTE] = ACTIONS(466),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(468),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(468),
  },
  [139] = {
    [sym_switch_body] = STATE(227),
    [anon_sym_LBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(58),
  },
  [140] = {
    [sym_switch_parameter] = STATE(55),
    [aux_sym_switch_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(472),
    [sym_comment] = ACTIONS(58),
  },
  [141] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(475),
    [sym_comment] = ACTIONS(58),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(162),
  },
  [143] = {
    [sym_identifier] = STATE(62),
    [aux_sym_variable_repeat1] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(477),
    [sym_statement_terminator] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(268),
    [sym_string] = ACTIONS(477),
    [anon_sym_AT_DQUOTE] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(479),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(479),
  },
  [144] = {
    [sym_identifier] = STATE(62),
    [aux_sym_variable_repeat1] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(481),
    [sym_statement_terminator] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(481),
    [anon_sym_DOLLAR_CARET] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(485),
    [sym_string] = ACTIONS(481),
    [anon_sym_AT_DQUOTE] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(483),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(483),
  },
  [145] = {
    [aux_sym_variable_characters_repeat1] = STATE(145),
    [anon_sym_COLON] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(490),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [sym_comment] = ACTIONS(58),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(58),
  },
  [147] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(496),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [sym_statement_terminator] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [sym_string] = ACTIONS(477),
    [anon_sym_AT_DQUOTE] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(479),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(479),
  },
  [149] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(498),
    [sym_comment] = ACTIONS(58),
  },
  [150] = {
    [sym_statement] = STATE(234),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [sym_statement_terminator] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(513),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(511),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(511),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(511),
    [anon_sym_DOLLAR_CARET] = ACTIONS(511),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(511),
    [sym_string] = ACTIONS(511),
    [anon_sym_AT_DQUOTE] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(513),
  },
  [152] = {
    [sym_expandable_string_part] = STATE(71),
    [aux_sym_expandable_here_string_repeat1] = STATE(152),
    [anon_sym_DOLLAR] = ACTIONS(515),
    [anon_sym_DQUOTE_AT] = ACTIONS(518),
    [sym_expandable_string_chars] = ACTIONS(520),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [sym_suffix] = STATE(74),
    [aux_sym_number_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(523),
    [sym_statement_terminator] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(523),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(523),
    [anon_sym_DOLLAR_CARET] = ACTIONS(523),
    [anon_sym_DOLLAR] = ACTIONS(525),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(523),
    [sym_string] = ACTIONS(523),
    [anon_sym_AT_DQUOTE] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(527),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(525),
  },
  [154] = {
    [sym_attribute_arguments] = STATE(237),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(535),
    [sym_comment] = ACTIONS(58),
  },
  [155] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(238),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [156] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(239),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [157] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(240),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [158] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(537),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [159] = {
    [sym_parameter_declaration] = STATE(242),
    [sym_attribute] = STATE(87),
    [sym_variable] = STATE(88),
    [aux_sym_parameter_declaration_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(152),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [160] = {
    [anon_sym_LBRACE] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(539),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(539),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(539),
    [anon_sym_DOLLAR_CARET] = ACTIONS(539),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(539),
    [sym_string] = ACTIONS(539),
    [anon_sym_AT_DQUOTE] = ACTIONS(539),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(541),
    [sym_comment] = ACTIONS(58),
  },
  [161] = {
    [aux_sym_parameter_list_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(543),
    [sym_comment] = ACTIONS(58),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [sym_comment] = ACTIONS(58),
  },
  [163] = {
    [sym_attribute] = STATE(87),
    [aux_sym_parameter_declaration_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(550),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(550),
    [anon_sym_DOLLAR_CARET] = ACTIONS(550),
    [anon_sym_DOLLAR] = ACTIONS(552),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(550),
    [sym_comment] = ACTIONS(58),
  },
  [164] = {
    [anon_sym_RBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(58),
  },
  [165] = {
    [sym_statement_list] = STATE(246),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [166] = {
    [anon_sym_RBRACE] = ACTIONS(132),
    [sym_comment] = ACTIONS(58),
  },
  [167] = {
    [sym_script_block] = STATE(247),
    [sym_param_block] = STATE(165),
    [sym_statement_list] = STATE(166),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [168] = {
    [sym_statement_block] = STATE(248),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [169] = {
    [sym_statement_block] = STATE(249),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [170] = {
    [sym_parameter_list] = STATE(251),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(556),
    [sym_comment] = ACTIONS(58),
  },
  [171] = {
    [sym_boolean_value] = STATE(252),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [172] = {
    [sym_boolean_value] = STATE(253),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [173] = {
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(558),
    [sym_comment] = ACTIONS(58),
  },
  [174] = {
    [sym_pipeline] = STATE(256),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(560),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [175] = {
    [sym_variable] = STATE(257),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(562),
    [sym_comment] = ACTIONS(58),
  },
  [177] = {
    [sym_catch] = STATE(261),
    [sym_finally] = STATE(262),
    [aux_sym_try_repeat1] = STATE(263),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(216),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(216),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(216),
    [anon_sym_DOLLAR_CARET] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(216),
    [sym_string] = ACTIONS(216),
    [anon_sym_AT_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(218),
    [sym_comment] = ACTIONS(58),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(224),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(224),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(224),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(224),
    [anon_sym_DOLLAR_CARET] = ACTIONS(224),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(224),
    [sym_string] = ACTIONS(224),
    [anon_sym_AT_DQUOTE] = ACTIONS(224),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(58),
  },
  [179] = {
    [sym_statement_block] = STATE(264),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [180] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(228),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(228),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(228),
    [anon_sym_DOLLAR_CARET] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(230),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(228),
    [sym_string] = ACTIONS(228),
    [anon_sym_AT_DQUOTE] = ACTIONS(228),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(58),
  },
  [181] = {
    [sym_statement_block] = STATE(265),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [sym_statement_terminator] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(236),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(236),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(236),
    [anon_sym_DOLLAR_CARET] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(236),
    [sym_string] = ACTIONS(236),
    [anon_sym_AT_DQUOTE] = ACTIONS(236),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(58),
  },
  [183] = {
    [sym_switch_body] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(568),
    [sym_comment] = ACTIONS(58),
  },
  [184] = {
    [sym_switch_parameter] = STATE(55),
    [sym_switch_condition] = STATE(268),
    [aux_sym_switch_repeat1] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [185] = {
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(58),
  },
  [186] = {
    [sym_identifier] = STATE(187),
    [aux_sym_variable_repeat1] = STATE(270),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(570),
    [sym_comment] = ACTIONS(58),
  },
  [187] = {
    [anon_sym_RBRACE] = ACTIONS(258),
    [sym_statement_terminator] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(258),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(258),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(258),
    [anon_sym_DOLLAR_CARET] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(258),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(262),
    [sym_string] = ACTIONS(258),
    [anon_sym_AT_DQUOTE] = ACTIONS(258),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(260),
    [sym_comment] = ACTIONS(58),
  },
  [188] = {
    [sym_identifier] = STATE(187),
    [aux_sym_variable_repeat1] = STATE(271),
    [anon_sym_RBRACE] = ACTIONS(264),
    [sym_statement_terminator] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(264),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(264),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(264),
    [anon_sym_DOLLAR_CARET] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(572),
    [sym_string] = ACTIONS(264),
    [anon_sym_AT_DQUOTE] = ACTIONS(264),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(266),
    [sym_comment] = ACTIONS(58),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [sym_statement_terminator] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(280),
    [anon_sym_COLON] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(280),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(280),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(280),
    [anon_sym_DOLLAR_CARET] = ACTIONS(280),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(280),
    [sym_string] = ACTIONS(280),
    [anon_sym_AT_DQUOTE] = ACTIONS(280),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(282),
    [sym_comment] = ACTIONS(58),
  },
  [190] = {
    [sym_expandable_string_part] = STATE(71),
    [aux_sym_expandable_here_string_repeat1] = STATE(152),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_DQUOTE_AT] = ACTIONS(574),
    [sym_expandable_string_chars] = ACTIONS(116),
    [sym_comment] = ACTIONS(52),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
    [sym_statement_terminator] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(290),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(290),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(290),
    [anon_sym_DOLLAR_CARET] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [anon_sym_AT_DQUOTE] = ACTIONS(290),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(290),
    [sym_comment] = ACTIONS(58),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_statement_terminator] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(294),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(294),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(294),
    [anon_sym_DOLLAR_CARET] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(294),
    [sym_string] = ACTIONS(294),
    [anon_sym_AT_DQUOTE] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(294),
    [sym_comment] = ACTIONS(58),
  },
  [193] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(273),
    [anon_sym_RBRACE] = ACTIONS(298),
    [sym_statement_terminator] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(298),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(298),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(298),
    [anon_sym_DOLLAR_CARET] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [anon_sym_AT_DQUOTE] = ACTIONS(298),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(58),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(576),
    [anon_sym_RBRACE] = ACTIONS(576),
    [sym_statement_terminator] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(576),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(576),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(576),
    [anon_sym_DOLLAR_CARET] = ACTIONS(576),
    [anon_sym_DOLLAR] = ACTIONS(578),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(576),
    [sym_string] = ACTIONS(576),
    [anon_sym_AT_DQUOTE] = ACTIONS(576),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(578),
    [sym_comment] = ACTIONS(58),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(308),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(308),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(308),
    [anon_sym_DOLLAR_CARET] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [anon_sym_AT_DQUOTE] = ACTIONS(308),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(310),
    [sym_comment] = ACTIONS(58),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym_statement_terminator] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(312),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(312),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(312),
    [anon_sym_DOLLAR_CARET] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(312),
    [sym_string] = ACTIONS(312),
    [anon_sym_AT_DQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(314),
    [sym_comment] = ACTIONS(58),
  },
  [197] = {
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(197),
    [anon_sym_RBRACE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(598),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(610),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(616),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(619),
    [anon_sym_DOLLAR_CARET] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(622),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(625),
    [sym_string] = ACTIONS(628),
    [anon_sym_AT_DQUOTE] = ACTIONS(631),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(634),
    [sym_comment] = ACTIONS(58),
  },
  [198] = {
    [sym_boolean_value] = STATE(274),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(637),
    [sym_statement_terminator] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(637),
    [anon_sym_COLON] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(637),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(637),
    [anon_sym_DOLLAR_CARET] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(637),
    [sym_string] = ACTIONS(637),
    [anon_sym_AT_DQUOTE] = ACTIONS(637),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(639),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(639),
  },
  [200] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(275),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [201] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(276),
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_statement_terminator] = ACTIONS(264),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(264),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(264),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(264),
    [anon_sym_DOLLAR_CARET] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [202] = {
    [sym_statement_block] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [203] = {
    [sym_pipeline] = STATE(279),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(641),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [204] = {
    [sym_pipeline] = STATE(281),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(641),
    [sym_statement_terminator] = ACTIONS(643),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [205] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [sym_comment] = ACTIONS(58),
  },
  [206] = {
    [sym_identifier] = STATE(207),
    [aux_sym_variable_repeat1] = STATE(283),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(58),
  },
  [207] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(262),
    [sym_comment] = ACTIONS(58),
  },
  [208] = {
    [sym_identifier] = STATE(207),
    [aux_sym_variable_repeat1] = STATE(284),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_comment] = ACTIONS(58),
  },
  [209] = {
    [sym_variable] = STATE(285),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [210] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(649),
    [sym_comment] = ACTIONS(58),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [sym_statement_terminator] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(576),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(576),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(576),
    [anon_sym_DOLLAR_CARET] = ACTIONS(576),
    [anon_sym_DOLLAR] = ACTIONS(578),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(576),
    [sym_string] = ACTIONS(576),
    [anon_sym_AT_DQUOTE] = ACTIONS(576),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(578),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(578),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [sym_statement_terminator] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(653),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(651),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(651),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(651),
    [anon_sym_DOLLAR_CARET] = ACTIONS(651),
    [anon_sym_DOLLAR] = ACTIONS(653),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(651),
    [sym_string] = ACTIONS(651),
    [anon_sym_AT_DQUOTE] = ACTIONS(651),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(653),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(653),
  },
  [213] = {
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_LBRACE] = ACTIONS(655),
    [sym_comment] = ACTIONS(58),
  },
  [214] = {
    [sym_statement_block] = STATE(287),
    [sym_type_literal] = STATE(213),
    [aux_sym_catch_repeat1] = STATE(288),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [sym_statement_terminator] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(657),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(657),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(657),
    [anon_sym_DOLLAR_CARET] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(659),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(657),
    [sym_string] = ACTIONS(657),
    [anon_sym_AT_DQUOTE] = ACTIONS(657),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(659),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(661),
    [sym_statement_terminator] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(661),
    [anon_sym_COLON] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(661),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(661),
    [anon_sym_DOLLAR_CARET] = ACTIONS(661),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(661),
    [sym_string] = ACTIONS(661),
    [anon_sym_AT_DQUOTE] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(663),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(663),
  },
  [217] = {
    [sym_catch] = STATE(129),
    [aux_sym_try_repeat1] = STATE(217),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(669),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(665),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(665),
    [anon_sym_DOLLAR_CARET] = ACTIONS(665),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(665),
    [sym_string] = ACTIONS(665),
    [anon_sym_AT_DQUOTE] = ACTIONS(665),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(667),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(667),
  },
  [218] = {
    [sym_identifier] = STATE(132),
    [aux_sym_array_declaration_repeat1] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(674),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [219] = {
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_RBRACK] = ACTIONS(676),
    [anon_sym_LBRACE] = ACTIONS(676),
    [sym_comment] = ACTIONS(58),
  },
  [220] = {
    [anon_sym_RBRACK] = ACTIONS(678),
    [sym_comment] = ACTIONS(58),
  },
  [221] = {
    [anon_sym_LBRACE] = ACTIONS(680),
    [sym_comment] = ACTIONS(58),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [sym_statement_terminator] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(682),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(682),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(682),
    [anon_sym_DOLLAR_CARET] = ACTIONS(682),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(682),
    [sym_string] = ACTIONS(682),
    [anon_sym_AT_DQUOTE] = ACTIONS(682),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(684),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(686),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(688),
    [sym_comment] = ACTIONS(58),
  },
  [224] = {
    [sym_statement_block] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(690),
    [sym_comment] = ACTIONS(58),
  },
  [225] = {
    [anon_sym_LBRACE] = ACTIONS(692),
    [sym_comment] = ACTIONS(58),
  },
  [226] = {
    [sym_switch_clause] = STATE(223),
    [sym_switch_clause_condition] = STATE(224),
    [sym_identifier] = STATE(225),
    [aux_sym_switch_body_repeat1] = STATE(296),
    [anon_sym_RBRACE] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [sym_statement_terminator] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(696),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(696),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(696),
    [anon_sym_DOLLAR_CARET] = ACTIONS(696),
    [anon_sym_DOLLAR] = ACTIONS(698),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(696),
    [sym_string] = ACTIONS(696),
    [anon_sym_AT_DQUOTE] = ACTIONS(696),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(698),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(698),
  },
  [228] = {
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
    [anon_sym_COLON] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(700),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(700),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(700),
    [anon_sym_DOLLAR_CARET] = ACTIONS(700),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(700),
    [sym_string] = ACTIONS(700),
    [anon_sym_AT_DQUOTE] = ACTIONS(700),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(702),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(702),
  },
  [229] = {
    [anon_sym_LPAREN] = ACTIONS(704),
    [sym_comment] = ACTIONS(58),
  },
  [230] = {
    [sym_statement_block] = STATE(298),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [231] = {
    [sym_identifier] = STATE(182),
    [anon_sym_RPAREN] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [232] = {
    [sym_variable_scope] = STATE(299),
    [sym_variable_characters] = STATE(58),
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(300),
    [aux_sym_variable_characters_repeat1] = STATE(64),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_local] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_script] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_workflow] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [233] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(301),
    [anon_sym_RPAREN] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(58),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym_comment] = ACTIONS(58),
  },
  [235] = {
    [sym_attribute_argument] = STATE(304),
    [sym_identifier] = STATE(305),
    [anon_sym_RPAREN] = ACTIONS(708),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [236] = {
    [anon_sym_LBRACK] = ACTIONS(710),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(710),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(710),
    [anon_sym_DOLLAR_CARET] = ACTIONS(710),
    [anon_sym_DOLLAR] = ACTIONS(712),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(710),
    [sym_comment] = ACTIONS(58),
  },
  [237] = {
    [anon_sym_RBRACK] = ACTIONS(714),
    [sym_comment] = ACTIONS(58),
  },
  [238] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(239),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [239] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(239),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(498),
    [sym_comment] = ACTIONS(58),
  },
  [240] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(149),
    [anon_sym_RBRACE] = ACTIONS(716),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [241] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [sym_statement_terminator] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [sym_string] = ACTIONS(477),
    [anon_sym_AT_DQUOTE] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(479),
    [sym_comment] = ACTIONS(58),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(718),
    [anon_sym_RPAREN] = ACTIONS(718),
    [sym_comment] = ACTIONS(58),
  },
  [243] = {
    [anon_sym_LBRACE] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(722),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(720),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(720),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(720),
    [anon_sym_DOLLAR_CARET] = ACTIONS(720),
    [anon_sym_DOLLAR] = ACTIONS(722),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(720),
    [sym_string] = ACTIONS(720),
    [anon_sym_AT_DQUOTE] = ACTIONS(720),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(722),
    [sym_comment] = ACTIONS(58),
  },
  [244] = {
    [aux_sym_parameter_list_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(724),
    [anon_sym_RPAREN] = ACTIONS(718),
    [sym_comment] = ACTIONS(58),
  },
  [245] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(727),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(727),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(727),
    [anon_sym_DOLLAR_CARET] = ACTIONS(727),
    [anon_sym_DOLLAR] = ACTIONS(729),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(727),
    [sym_string] = ACTIONS(727),
    [anon_sym_AT_DQUOTE] = ACTIONS(727),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(729),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(729),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(58),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(58),
  },
  [248] = {
    [sym_elseif] = STATE(311),
    [sym_else] = STATE(312),
    [aux_sym_if_repeat1] = STATE(313),
    [ts_builtin_sym_end] = ACTIONS(733),
    [sym_statement_terminator] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(735),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(737),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(733),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(733),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(733),
    [anon_sym_DOLLAR_CARET] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(739),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(733),
    [sym_string] = ACTIONS(733),
    [anon_sym_AT_DQUOTE] = ACTIONS(733),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(739),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(739),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [sym_statement_terminator] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(741),
    [anon_sym_COLON] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(741),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(741),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(741),
    [anon_sym_DOLLAR_CARET] = ACTIONS(741),
    [anon_sym_DOLLAR] = ACTIONS(743),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(741),
    [sym_string] = ACTIONS(741),
    [anon_sym_AT_DQUOTE] = ACTIONS(741),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(743),
  },
  [250] = {
    [sym_script_block] = STATE(314),
    [sym_param_block] = STATE(165),
    [sym_statement_list] = STATE(166),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [251] = {
    [anon_sym_LBRACE] = ACTIONS(745),
    [sym_comment] = ACTIONS(58),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(747),
    [sym_comment] = ACTIONS(58),
  },
  [253] = {
    [anon_sym_RPAREN] = ACTIONS(749),
    [sym_comment] = ACTIONS(58),
  },
  [254] = {
    [anon_sym_LPAREN] = ACTIONS(751),
    [sym_comment] = ACTIONS(58),
  },
  [255] = {
    [sym_statement_block] = STATE(319),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [256] = {
    [sym_pipeline] = STATE(322),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(753),
    [sym_statement_terminator] = ACTIONS(755),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [257] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(757),
    [sym_comment] = ACTIONS(58),
  },
  [258] = {
    [sym_variable] = STATE(324),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [259] = {
    [sym_statement_block] = STATE(325),
    [sym_type_literal] = STATE(213),
    [aux_sym_catch_repeat1] = STATE(326),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [260] = {
    [sym_statement_block] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [261] = {
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(440),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(440),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(440),
    [anon_sym_DOLLAR_CARET] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [anon_sym_AT_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(58),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [sym_statement_terminator] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(444),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(444),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(444),
    [anon_sym_DOLLAR_CARET] = ACTIONS(444),
    [anon_sym_DOLLAR] = ACTIONS(446),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(444),
    [sym_string] = ACTIONS(444),
    [anon_sym_AT_DQUOTE] = ACTIONS(444),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(446),
    [sym_comment] = ACTIONS(58),
  },
  [263] = {
    [sym_catch] = STATE(261),
    [sym_finally] = STATE(328),
    [aux_sym_try_repeat1] = STATE(329),
    [anon_sym_RBRACE] = ACTIONS(444),
    [sym_statement_terminator] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(444),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(444),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(444),
    [anon_sym_DOLLAR_CARET] = ACTIONS(444),
    [anon_sym_DOLLAR] = ACTIONS(446),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(444),
    [sym_string] = ACTIONS(444),
    [anon_sym_AT_DQUOTE] = ACTIONS(444),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(446),
    [sym_comment] = ACTIONS(58),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(452),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(452),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(452),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(452),
    [anon_sym_DOLLAR_CARET] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(454),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(452),
    [sym_string] = ACTIONS(452),
    [anon_sym_AT_DQUOTE] = ACTIONS(452),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(454),
    [sym_comment] = ACTIONS(58),
  },
  [265] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(456),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(456),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(456),
    [anon_sym_DOLLAR_CARET] = ACTIONS(456),
    [anon_sym_DOLLAR] = ACTIONS(458),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(456),
    [sym_string] = ACTIONS(456),
    [anon_sym_AT_DQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(458),
    [sym_comment] = ACTIONS(58),
  },
  [266] = {
    [sym_switch_clause] = STATE(223),
    [sym_switch_clause_condition] = STATE(224),
    [sym_identifier] = STATE(225),
    [aux_sym_switch_body_repeat1] = STATE(331),
    [anon_sym_RBRACE] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [267] = {
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [sym_statement_terminator] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(466),
    [anon_sym_COLON] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(466),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(466),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(466),
    [anon_sym_DOLLAR_CARET] = ACTIONS(466),
    [anon_sym_DOLLAR] = ACTIONS(468),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(466),
    [sym_string] = ACTIONS(466),
    [anon_sym_AT_DQUOTE] = ACTIONS(466),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(468),
    [sym_comment] = ACTIONS(58),
  },
  [268] = {
    [sym_switch_body] = STATE(332),
    [anon_sym_LBRACE] = ACTIONS(568),
    [sym_comment] = ACTIONS(58),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_statement_terminator] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(160),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(160),
    [anon_sym_DOLLAR_CARET] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_string] = ACTIONS(160),
    [anon_sym_AT_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(58),
  },
  [270] = {
    [sym_identifier] = STATE(187),
    [aux_sym_variable_repeat1] = STATE(271),
    [anon_sym_RBRACE] = ACTIONS(477),
    [sym_statement_terminator] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(572),
    [sym_string] = ACTIONS(477),
    [anon_sym_AT_DQUOTE] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(479),
    [sym_comment] = ACTIONS(58),
  },
  [271] = {
    [sym_identifier] = STATE(187),
    [aux_sym_variable_repeat1] = STATE(271),
    [anon_sym_RBRACE] = ACTIONS(481),
    [sym_statement_terminator] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(481),
    [anon_sym_DOLLAR_CARET] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(761),
    [sym_string] = ACTIONS(481),
    [anon_sym_AT_DQUOTE] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(483),
    [sym_comment] = ACTIONS(58),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [sym_statement_terminator] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(513),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(511),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(511),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(511),
    [anon_sym_DOLLAR_CARET] = ACTIONS(511),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(511),
    [sym_string] = ACTIONS(511),
    [anon_sym_AT_DQUOTE] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(58),
  },
  [273] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(273),
    [anon_sym_RBRACE] = ACTIONS(523),
    [sym_statement_terminator] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(523),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(523),
    [anon_sym_DOLLAR_CARET] = ACTIONS(523),
    [anon_sym_DOLLAR] = ACTIONS(525),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(523),
    [sym_string] = ACTIONS(523),
    [anon_sym_AT_DQUOTE] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [sym_comment] = ACTIONS(58),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(770),
    [sym_comment] = ACTIONS(58),
  },
  [275] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(276),
    [anon_sym_RPAREN] = ACTIONS(477),
    [sym_statement_terminator] = ACTIONS(477),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [276] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(276),
    [anon_sym_RPAREN] = ACTIONS(481),
    [sym_statement_terminator] = ACTIONS(481),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(481),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(481),
    [anon_sym_DOLLAR_CARET] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(498),
    [sym_comment] = ACTIONS(58),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(772),
    [sym_statement_terminator] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(772),
    [anon_sym_COLON] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(772),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(772),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(772),
    [anon_sym_DOLLAR_CARET] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(774),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(772),
    [sym_string] = ACTIONS(772),
    [anon_sym_AT_DQUOTE] = ACTIONS(772),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(774),
  },
  [278] = {
    [sym_statement_block] = STATE(334),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [279] = {
    [sym_pipeline] = STATE(337),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(776),
    [sym_statement_terminator] = ACTIONS(778),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [280] = {
    [sym_pipeline] = STATE(337),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(776),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(776),
    [sym_comment] = ACTIONS(58),
  },
  [282] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(250),
    [sym_comment] = ACTIONS(58),
  },
  [283] = {
    [sym_identifier] = STATE(207),
    [aux_sym_variable_repeat1] = STATE(284),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(647),
    [sym_comment] = ACTIONS(58),
  },
  [284] = {
    [sym_identifier] = STATE(207),
    [aux_sym_variable_repeat1] = STATE(284),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(483),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(780),
    [sym_comment] = ACTIONS(58),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(783),
    [sym_comment] = ACTIONS(58),
  },
  [286] = {
    [sym_variable] = STATE(339),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [287] = {
    [ts_builtin_sym_end] = ACTIONS(785),
    [sym_statement_terminator] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(785),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(785),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(785),
    [anon_sym_DOLLAR_CARET] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(787),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(785),
    [sym_string] = ACTIONS(785),
    [anon_sym_AT_DQUOTE] = ACTIONS(785),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(787),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(787),
  },
  [288] = {
    [sym_type_literal] = STATE(213),
    [aux_sym_catch_repeat1] = STATE(288),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_LBRACE] = ACTIONS(792),
    [sym_comment] = ACTIONS(58),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RBRACK] = ACTIONS(794),
    [sym_comment] = ACTIONS(58),
  },
  [290] = {
    [anon_sym_RBRACK] = ACTIONS(796),
    [sym_comment] = ACTIONS(58),
  },
  [291] = {
    [aux_sym_array_declaration_repeat1] = STATE(341),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(798),
    [sym_comment] = ACTIONS(58),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [sym_comment] = ACTIONS(58),
  },
  [293] = {
    [sym_statement_list] = STATE(343),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [anon_sym_RBRACE] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(804),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(806),
    [sym_comment] = ACTIONS(58),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(808),
    [sym_statement_terminator] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(808),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(808),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(808),
    [anon_sym_DOLLAR_CARET] = ACTIONS(808),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(808),
    [sym_string] = ACTIONS(808),
    [anon_sym_AT_DQUOTE] = ACTIONS(808),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(810),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(810),
  },
  [296] = {
    [sym_switch_clause] = STATE(223),
    [sym_switch_clause_condition] = STATE(224),
    [sym_identifier] = STATE(225),
    [aux_sym_switch_body_repeat1] = STATE(296),
    [anon_sym_RBRACE] = ACTIONS(812),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(814),
    [sym_comment] = ACTIONS(58),
  },
  [297] = {
    [sym_boolean_value] = STATE(344),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [298] = {
    [sym_catch] = STATE(261),
    [sym_finally] = STATE(262),
    [aux_sym_try_repeat1] = STATE(345),
    [anon_sym_RPAREN] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(566),
    [sym_comment] = ACTIONS(58),
  },
  [299] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(346),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [300] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(347),
    [anon_sym_RPAREN] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [301] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(348),
    [anon_sym_RPAREN] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(58),
  },
  [302] = {
    [anon_sym_DOLLAR] = ACTIONS(817),
    [anon_sym_DQUOTE_AT] = ACTIONS(819),
    [sym_expandable_string_chars] = ACTIONS(817),
    [sym_comment] = ACTIONS(52),
  },
  [303] = {
    [anon_sym_RBRACK] = ACTIONS(821),
    [sym_comment] = ACTIONS(58),
  },
  [304] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(351),
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(825),
    [sym_comment] = ACTIONS(58),
  },
  [305] = {
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_EQ] = ACTIONS(829),
    [sym_comment] = ACTIONS(58),
  },
  [306] = {
    [anon_sym_LBRACK] = ACTIONS(831),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(831),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(831),
    [anon_sym_DOLLAR_CARET] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
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
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(700),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(700),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(700),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(700),
    [anon_sym_DOLLAR_CARET] = ACTIONS(700),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(700),
    [sym_string] = ACTIONS(700),
    [anon_sym_AT_DQUOTE] = ACTIONS(700),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(702),
    [sym_comment] = ACTIONS(58),
  },
  [308] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(835),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(835),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(835),
    [anon_sym_DOLLAR_CARET] = ACTIONS(835),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(835),
    [sym_string] = ACTIONS(835),
    [anon_sym_AT_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(837),
  },
  [309] = {
    [sym_statement_block] = STATE(353),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [310] = {
    [sym_statement_block] = STATE(354),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(839),
    [sym_statement_terminator] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(839),
    [anon_sym_COLON] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(839),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(839),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(839),
    [anon_sym_DOLLAR_CARET] = ACTIONS(839),
    [anon_sym_DOLLAR] = ACTIONS(841),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(839),
    [sym_string] = ACTIONS(839),
    [anon_sym_AT_DQUOTE] = ACTIONS(839),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(841),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(841),
  },
  [312] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(843),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(843),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(843),
    [anon_sym_DOLLAR_CARET] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(843),
    [sym_string] = ACTIONS(843),
    [anon_sym_AT_DQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(845),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(845),
  },
  [313] = {
    [sym_elseif] = STATE(311),
    [sym_else] = STATE(355),
    [aux_sym_if_repeat1] = STATE(356),
    [ts_builtin_sym_end] = ACTIONS(843),
    [sym_statement_terminator] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(735),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(737),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(843),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(843),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(843),
    [anon_sym_DOLLAR_CARET] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(843),
    [sym_string] = ACTIONS(843),
    [anon_sym_AT_DQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(845),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(845),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(58),
  },
  [315] = {
    [sym_script_block] = STATE(358),
    [sym_param_block] = STATE(165),
    [sym_statement_list] = STATE(166),
    [sym_statement] = STATE(113),
    [sym_function_definition] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_do] = STATE(109),
    [sym_for] = STATE(109),
    [sym_foreach] = STATE(109),
    [sym_try] = STATE(109),
    [sym_trap] = STATE(109),
    [sym_data] = STATE(109),
    [sym_labeled_statement] = STATE(109),
    [sym_label] = STATE(114),
    [sym_flow_control_statement] = STATE(109),
    [sym_flow_break_continue] = STATE(105),
    [sym_switch] = STATE(109),
    [sym_boolean_value] = STATE(109),
    [sym_variable] = STATE(109),
    [sym_expandable_here_string] = STATE(109),
    [sym_number] = STATE(109),
    [aux_sym_statement_list_repeat1] = STATE(115),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(10),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_string] = ACTIONS(196),
    [anon_sym_AT_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(58),
  },
  [316] = {
    [sym_statement_block] = STATE(359),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [317] = {
    [sym_statement_block] = STATE(360),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [318] = {
    [sym_boolean_value] = STATE(361),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [319] = {
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_RBRACE] = ACTIONS(637),
    [sym_statement_terminator] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(637),
    [anon_sym_COLON] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(637),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(637),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(637),
    [anon_sym_DOLLAR_CARET] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(637),
    [sym_string] = ACTIONS(637),
    [anon_sym_AT_DQUOTE] = ACTIONS(637),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(639),
    [sym_comment] = ACTIONS(58),
  },
  [320] = {
    [sym_statement_block] = STATE(362),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [321] = {
    [sym_pipeline] = STATE(364),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(849),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [322] = {
    [sym_pipeline] = STATE(366),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(849),
    [sym_statement_terminator] = ACTIONS(851),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [323] = {
    [sym_variable] = STATE(367),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [324] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(853),
    [sym_comment] = ACTIONS(58),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(651),
    [sym_statement_terminator] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(653),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(651),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(651),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(651),
    [anon_sym_DOLLAR_CARET] = ACTIONS(651),
    [anon_sym_DOLLAR] = ACTIONS(653),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(651),
    [sym_string] = ACTIONS(651),
    [anon_sym_AT_DQUOTE] = ACTIONS(651),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(653),
    [sym_comment] = ACTIONS(58),
  },
  [326] = {
    [sym_statement_block] = STATE(369),
    [sym_type_literal] = STATE(213),
    [aux_sym_catch_repeat1] = STATE(288),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [327] = {
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_RBRACE] = ACTIONS(657),
    [sym_statement_terminator] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(657),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(657),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(657),
    [anon_sym_DOLLAR_CARET] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(659),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(657),
    [sym_string] = ACTIONS(657),
    [anon_sym_AT_DQUOTE] = ACTIONS(657),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(58),
  },
  [328] = {
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_RBRACE] = ACTIONS(661),
    [sym_statement_terminator] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(661),
    [anon_sym_COLON] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(661),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(661),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(661),
    [anon_sym_DOLLAR_CARET] = ACTIONS(661),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(661),
    [sym_string] = ACTIONS(661),
    [anon_sym_AT_DQUOTE] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(663),
    [sym_comment] = ACTIONS(58),
  },
  [329] = {
    [sym_catch] = STATE(261),
    [aux_sym_try_repeat1] = STATE(329),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(855),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(665),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(665),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(665),
    [anon_sym_DOLLAR_CARET] = ACTIONS(665),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(665),
    [sym_string] = ACTIONS(665),
    [anon_sym_AT_DQUOTE] = ACTIONS(665),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(667),
    [sym_comment] = ACTIONS(58),
  },
  [330] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(682),
    [sym_statement_terminator] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(682),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(682),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(682),
    [anon_sym_DOLLAR_CARET] = ACTIONS(682),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(682),
    [sym_string] = ACTIONS(682),
    [anon_sym_AT_DQUOTE] = ACTIONS(682),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(684),
    [sym_comment] = ACTIONS(58),
  },
  [331] = {
    [sym_switch_clause] = STATE(223),
    [sym_switch_clause_condition] = STATE(224),
    [sym_identifier] = STATE(225),
    [aux_sym_switch_body_repeat1] = STATE(296),
    [anon_sym_RBRACE] = ACTIONS(858),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [332] = {
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_RBRACE] = ACTIONS(696),
    [sym_statement_terminator] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(696),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(696),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(696),
    [anon_sym_DOLLAR_CARET] = ACTIONS(696),
    [anon_sym_DOLLAR] = ACTIONS(698),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(696),
    [sym_string] = ACTIONS(696),
    [anon_sym_AT_DQUOTE] = ACTIONS(696),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(698),
    [sym_comment] = ACTIONS(58),
  },
  [333] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(860),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(860),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(860),
    [anon_sym_DOLLAR_CARET] = ACTIONS(860),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(860),
    [sym_string] = ACTIONS(860),
    [anon_sym_AT_DQUOTE] = ACTIONS(860),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(862),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(862),
  },
  [334] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(864),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(864),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(864),
    [anon_sym_DOLLAR_CARET] = ACTIONS(864),
    [anon_sym_DOLLAR] = ACTIONS(866),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(864),
    [sym_string] = ACTIONS(864),
    [anon_sym_AT_DQUOTE] = ACTIONS(864),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(866),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(866),
  },
  [335] = {
    [sym_statement_block] = STATE(371),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [336] = {
    [sym_pipeline] = STATE(373),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(868),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [337] = {
    [anon_sym_RPAREN] = ACTIONS(868),
    [sym_comment] = ACTIONS(58),
  },
  [338] = {
    [sym_statement_block] = STATE(374),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(870),
    [sym_comment] = ACTIONS(58),
  },
  [340] = {
    [anon_sym_RBRACK] = ACTIONS(872),
    [sym_comment] = ACTIONS(58),
  },
  [341] = {
    [aux_sym_array_declaration_repeat1] = STATE(341),
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_RBRACK] = ACTIONS(877),
    [sym_comment] = ACTIONS(58),
  },
  [342] = {
    [anon_sym_RBRACE] = ACTIONS(396),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(398),
    [sym_comment] = ACTIONS(58),
  },
  [343] = {
    [anon_sym_RBRACE] = ACTIONS(879),
    [sym_comment] = ACTIONS(58),
  },
  [344] = {
    [anon_sym_RPAREN] = ACTIONS(881),
    [sym_comment] = ACTIONS(58),
  },
  [345] = {
    [sym_catch] = STATE(261),
    [sym_finally] = STATE(328),
    [aux_sym_try_repeat1] = STATE(378),
    [anon_sym_RPAREN] = ACTIONS(444),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(566),
    [sym_comment] = ACTIONS(58),
  },
  [346] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(347),
    [anon_sym_RPAREN] = ACTIONS(477),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(58),
  },
  [347] = {
    [sym_identifier] = STATE(67),
    [aux_sym_variable_repeat1] = STATE(347),
    [anon_sym_RPAREN] = ACTIONS(481),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(498),
    [sym_comment] = ACTIONS(58),
  },
  [348] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(348),
    [anon_sym_RPAREN] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [sym_comment] = ACTIONS(58),
  },
  [349] = {
    [sym_attribute_argument] = STATE(379),
    [sym_identifier] = STATE(305),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [350] = {
    [anon_sym_RBRACK] = ACTIONS(883),
    [sym_comment] = ACTIONS(58),
  },
  [351] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(381),
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_comment] = ACTIONS(58),
  },
  [352] = {
    [sym_identifier] = STATE(382),
    [sym_number] = STATE(382),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(60),
    [sym_string] = ACTIONS(887),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(889),
    [sym_comment] = ACTIONS(58),
  },
  [353] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(891),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(891),
    [anon_sym_DOLLAR_CARET] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(893),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [sym_string] = ACTIONS(891),
    [anon_sym_AT_DQUOTE] = ACTIONS(891),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(893),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(895),
    [sym_statement_terminator] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(895),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(895),
    [anon_sym_DOLLAR_CARET] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [sym_string] = ACTIONS(895),
    [anon_sym_AT_DQUOTE] = ACTIONS(895),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(897),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(897),
  },
  [355] = {
    [ts_builtin_sym_end] = ACTIONS(899),
    [sym_statement_terminator] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(899),
    [anon_sym_COLON] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(899),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(899),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(899),
    [anon_sym_DOLLAR_CARET] = ACTIONS(899),
    [anon_sym_DOLLAR] = ACTIONS(901),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(899),
    [sym_string] = ACTIONS(899),
    [anon_sym_AT_DQUOTE] = ACTIONS(899),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(901),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(901),
  },
  [356] = {
    [sym_elseif] = STATE(311),
    [aux_sym_if_repeat1] = STATE(356),
    [ts_builtin_sym_end] = ACTIONS(903),
    [sym_statement_terminator] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(905),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(908),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(903),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(903),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(903),
    [anon_sym_DOLLAR_CARET] = ACTIONS(903),
    [anon_sym_DOLLAR] = ACTIONS(908),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(903),
    [sym_string] = ACTIONS(903),
    [anon_sym_AT_DQUOTE] = ACTIONS(903),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(908),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(908),
  },
  [357] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(727),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(727),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(727),
    [anon_sym_DOLLAR_CARET] = ACTIONS(727),
    [anon_sym_DOLLAR] = ACTIONS(729),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(727),
    [sym_string] = ACTIONS(727),
    [anon_sym_AT_DQUOTE] = ACTIONS(727),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(729),
    [sym_comment] = ACTIONS(58),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(910),
    [sym_comment] = ACTIONS(58),
  },
  [359] = {
    [sym_elseif] = STATE(387),
    [sym_else] = STATE(388),
    [aux_sym_if_repeat1] = STATE(389),
    [anon_sym_RBRACE] = ACTIONS(733),
    [sym_statement_terminator] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(733),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(733),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(733),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(733),
    [anon_sym_DOLLAR_CARET] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(739),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(733),
    [sym_string] = ACTIONS(733),
    [anon_sym_AT_DQUOTE] = ACTIONS(733),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(739),
    [sym_comment] = ACTIONS(58),
  },
  [360] = {
    [anon_sym_RPAREN] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(741),
    [sym_statement_terminator] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(743),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(741),
    [anon_sym_COLON] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(741),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(741),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(741),
    [anon_sym_DOLLAR_CARET] = ACTIONS(741),
    [anon_sym_DOLLAR] = ACTIONS(743),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(741),
    [sym_string] = ACTIONS(741),
    [anon_sym_AT_DQUOTE] = ACTIONS(741),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(58),
  },
  [361] = {
    [anon_sym_RPAREN] = ACTIONS(916),
    [sym_comment] = ACTIONS(58),
  },
  [362] = {
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_RBRACE] = ACTIONS(772),
    [sym_statement_terminator] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(772),
    [anon_sym_COLON] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(772),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(772),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(772),
    [anon_sym_DOLLAR_CARET] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(774),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(772),
    [sym_string] = ACTIONS(772),
    [anon_sym_AT_DQUOTE] = ACTIONS(772),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(774),
    [sym_comment] = ACTIONS(58),
  },
  [363] = {
    [sym_statement_block] = STATE(391),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [364] = {
    [sym_pipeline] = STATE(394),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_statement_terminator] = ACTIONS(920),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [365] = {
    [sym_pipeline] = STATE(394),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(918),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [366] = {
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(58),
  },
  [367] = {
    [anon_sym_RPAREN] = ACTIONS(922),
    [sym_comment] = ACTIONS(58),
  },
  [368] = {
    [sym_variable] = STATE(396),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [369] = {
    [anon_sym_RPAREN] = ACTIONS(785),
    [anon_sym_RBRACE] = ACTIONS(785),
    [sym_statement_terminator] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(785),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(785),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(785),
    [anon_sym_DOLLAR_CARET] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(787),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(785),
    [sym_string] = ACTIONS(785),
    [anon_sym_AT_DQUOTE] = ACTIONS(785),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(787),
    [sym_comment] = ACTIONS(58),
  },
  [370] = {
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [sym_statement_terminator] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(808),
    [anon_sym_COLON] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(808),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(808),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(808),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(808),
    [anon_sym_DOLLAR_CARET] = ACTIONS(808),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(808),
    [sym_string] = ACTIONS(808),
    [anon_sym_AT_DQUOTE] = ACTIONS(808),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(810),
    [sym_comment] = ACTIONS(58),
  },
  [371] = {
    [ts_builtin_sym_end] = ACTIONS(924),
    [sym_statement_terminator] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(926),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(924),
    [anon_sym_COLON] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(924),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(924),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(924),
    [anon_sym_DOLLAR_CARET] = ACTIONS(924),
    [anon_sym_DOLLAR] = ACTIONS(926),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(924),
    [sym_string] = ACTIONS(924),
    [anon_sym_AT_DQUOTE] = ACTIONS(924),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(926),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(926),
  },
  [372] = {
    [sym_statement_block] = STATE(397),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [373] = {
    [anon_sym_RPAREN] = ACTIONS(928),
    [sym_comment] = ACTIONS(58),
  },
  [374] = {
    [ts_builtin_sym_end] = ACTIONS(930),
    [sym_statement_terminator] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(930),
    [anon_sym_COLON] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(930),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(930),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(930),
    [anon_sym_DOLLAR_CARET] = ACTIONS(930),
    [anon_sym_DOLLAR] = ACTIONS(932),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(930),
    [sym_string] = ACTIONS(930),
    [anon_sym_AT_DQUOTE] = ACTIONS(930),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(932),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(932),
  },
  [375] = {
    [sym_statement_block] = STATE(399),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_BSLASHw_STAR_SLASH] = ACTIONS(578),
    [sym_comment] = ACTIONS(58),
  },
  [377] = {
    [sym_statement_block] = STATE(400),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [378] = {
    [sym_catch] = STATE(261),
    [aux_sym_try_repeat1] = STATE(378),
    [anon_sym_RPAREN] = ACTIONS(665),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(855),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(665),
    [sym_comment] = ACTIONS(58),
  },
  [379] = {
    [anon_sym_COMMA] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(934),
    [sym_comment] = ACTIONS(58),
  },
  [380] = {
    [anon_sym_RBRACK] = ACTIONS(936),
    [sym_comment] = ACTIONS(58),
  },
  [381] = {
    [aux_sym_attribute_arguments_repeat1] = STATE(381),
    [anon_sym_COMMA] = ACTIONS(938),
    [anon_sym_RPAREN] = ACTIONS(934),
    [sym_comment] = ACTIONS(58),
  },
  [382] = {
    [anon_sym_COMMA] = ACTIONS(941),
    [anon_sym_RPAREN] = ACTIONS(941),
    [sym_comment] = ACTIONS(58),
  },
  [383] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(401),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(58),
  },
  [384] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(835),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(835),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(835),
    [anon_sym_DOLLAR_CARET] = ACTIONS(835),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(835),
    [sym_string] = ACTIONS(835),
    [anon_sym_AT_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(58),
  },
  [385] = {
    [sym_statement_block] = STATE(402),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [386] = {
    [sym_statement_block] = STATE(403),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [387] = {
    [anon_sym_RPAREN] = ACTIONS(839),
    [anon_sym_RBRACE] = ACTIONS(839),
    [sym_statement_terminator] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(839),
    [anon_sym_COLON] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(839),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(839),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(839),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(839),
    [anon_sym_DOLLAR_CARET] = ACTIONS(839),
    [anon_sym_DOLLAR] = ACTIONS(841),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(839),
    [sym_string] = ACTIONS(839),
    [anon_sym_AT_DQUOTE] = ACTIONS(839),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(841),
    [sym_comment] = ACTIONS(58),
  },
  [388] = {
    [anon_sym_RPAREN] = ACTIONS(843),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(843),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(843),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(843),
    [anon_sym_DOLLAR_CARET] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(843),
    [sym_string] = ACTIONS(843),
    [anon_sym_AT_DQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(845),
    [sym_comment] = ACTIONS(58),
  },
  [389] = {
    [sym_elseif] = STATE(387),
    [sym_else] = STATE(404),
    [aux_sym_if_repeat1] = STATE(405),
    [anon_sym_RBRACE] = ACTIONS(843),
    [sym_statement_terminator] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(843),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(843),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(843),
    [anon_sym_DOLLAR_CARET] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(843),
    [sym_string] = ACTIONS(843),
    [anon_sym_AT_DQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(845),
    [sym_comment] = ACTIONS(58),
  },
  [390] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(860),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(860),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(860),
    [anon_sym_DOLLAR_CARET] = ACTIONS(860),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(860),
    [sym_string] = ACTIONS(860),
    [anon_sym_AT_DQUOTE] = ACTIONS(860),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(862),
    [sym_comment] = ACTIONS(58),
  },
  [391] = {
    [anon_sym_RPAREN] = ACTIONS(864),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(864),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(864),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(864),
    [anon_sym_DOLLAR_CARET] = ACTIONS(864),
    [anon_sym_DOLLAR] = ACTIONS(866),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(864),
    [sym_string] = ACTIONS(864),
    [anon_sym_AT_DQUOTE] = ACTIONS(864),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(866),
    [sym_comment] = ACTIONS(58),
  },
  [392] = {
    [sym_statement_block] = STATE(406),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [393] = {
    [sym_pipeline] = STATE(408),
    [sym_boolean_value] = STATE(120),
    [sym_variable] = STATE(120),
    [anon_sym_RPAREN] = ACTIONS(943),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(166),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(150),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(150),
    [anon_sym_DOLLAR_CARET] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(58),
  },
  [394] = {
    [anon_sym_RPAREN] = ACTIONS(943),
    [sym_comment] = ACTIONS(58),
  },
  [395] = {
    [sym_statement_block] = STATE(409),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(945),
    [sym_comment] = ACTIONS(58),
  },
  [397] = {
    [ts_builtin_sym_end] = ACTIONS(947),
    [sym_statement_terminator] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(949),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(947),
    [anon_sym_COLON] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(947),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(947),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(947),
    [anon_sym_DOLLAR_CARET] = ACTIONS(947),
    [anon_sym_DOLLAR] = ACTIONS(949),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(947),
    [sym_string] = ACTIONS(947),
    [anon_sym_AT_DQUOTE] = ACTIONS(947),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(949),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(949),
  },
  [398] = {
    [sym_statement_block] = STATE(411),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(58),
  },
  [399] = {
    [ts_builtin_sym_end] = ACTIONS(951),
    [sym_statement_terminator] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(951),
    [anon_sym_COLON] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(951),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(951),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(951),
    [anon_sym_DOLLAR_CARET] = ACTIONS(951),
    [anon_sym_DOLLAR] = ACTIONS(953),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(951),
    [sym_string] = ACTIONS(951),
    [anon_sym_AT_DQUOTE] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(953),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(953),
  },
  [400] = {
    [sym_elseif] = STATE(387),
    [sym_else] = STATE(388),
    [aux_sym_if_repeat1] = STATE(412),
    [anon_sym_RPAREN] = ACTIONS(733),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
    [sym_comment] = ACTIONS(58),
  },
  [401] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(413),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(414),
    [sym_comment] = ACTIONS(58),
  },
  [402] = {
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(891),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(891),
    [anon_sym_DOLLAR_CARET] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(893),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [sym_string] = ACTIONS(891),
    [anon_sym_AT_DQUOTE] = ACTIONS(891),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(893),
    [sym_comment] = ACTIONS(58),
  },
  [403] = {
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_RBRACE] = ACTIONS(895),
    [sym_statement_terminator] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(895),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(895),
    [anon_sym_DOLLAR_CARET] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [sym_string] = ACTIONS(895),
    [anon_sym_AT_DQUOTE] = ACTIONS(895),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(897),
    [sym_comment] = ACTIONS(58),
  },
  [404] = {
    [anon_sym_RPAREN] = ACTIONS(899),
    [anon_sym_RBRACE] = ACTIONS(899),
    [sym_statement_terminator] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(901),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(899),
    [anon_sym_COLON] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(899),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(899),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(899),
    [anon_sym_DOLLAR_CARET] = ACTIONS(899),
    [anon_sym_DOLLAR] = ACTIONS(901),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(899),
    [sym_string] = ACTIONS(899),
    [anon_sym_AT_DQUOTE] = ACTIONS(899),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(901),
    [sym_comment] = ACTIONS(58),
  },
  [405] = {
    [sym_elseif] = STATE(387),
    [aux_sym_if_repeat1] = STATE(405),
    [anon_sym_RBRACE] = ACTIONS(903),
    [sym_statement_terminator] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(908),
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
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(903),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(903),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(903),
    [anon_sym_DOLLAR_CARET] = ACTIONS(903),
    [anon_sym_DOLLAR] = ACTIONS(908),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(903),
    [sym_string] = ACTIONS(903),
    [anon_sym_AT_DQUOTE] = ACTIONS(903),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(908),
    [sym_comment] = ACTIONS(58),
  },
  [406] = {
    [anon_sym_RPAREN] = ACTIONS(924),
    [anon_sym_RBRACE] = ACTIONS(924),
    [sym_statement_terminator] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(926),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(924),
    [anon_sym_COLON] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(924),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(924),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(924),
    [anon_sym_DOLLAR_CARET] = ACTIONS(924),
    [anon_sym_DOLLAR] = ACTIONS(926),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(924),
    [sym_string] = ACTIONS(924),
    [anon_sym_AT_DQUOTE] = ACTIONS(924),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(926),
    [sym_comment] = ACTIONS(58),
  },
  [407] = {
    [sym_statement_block] = STATE(414),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [408] = {
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(58),
  },
  [409] = {
    [anon_sym_RPAREN] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(930),
    [sym_statement_terminator] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(932),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(930),
    [anon_sym_COLON] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(930),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(930),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(930),
    [anon_sym_DOLLAR_CARET] = ACTIONS(930),
    [anon_sym_DOLLAR] = ACTIONS(932),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(930),
    [sym_string] = ACTIONS(930),
    [anon_sym_AT_DQUOTE] = ACTIONS(930),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(932),
    [sym_comment] = ACTIONS(58),
  },
  [410] = {
    [sym_statement_block] = STATE(416),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [411] = {
    [ts_builtin_sym_end] = ACTIONS(960),
    [sym_statement_terminator] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(962),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(960),
    [anon_sym_COLON] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(960),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(960),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(960),
    [anon_sym_DOLLAR_CARET] = ACTIONS(960),
    [anon_sym_DOLLAR] = ACTIONS(962),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(960),
    [sym_string] = ACTIONS(960),
    [anon_sym_AT_DQUOTE] = ACTIONS(960),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(962),
    [sym_comment] = ACTIONS(52),
    [sym_signature_block] = ACTIONS(962),
  },
  [412] = {
    [sym_elseif] = STATE(387),
    [sym_else] = STATE(404),
    [aux_sym_if_repeat1] = STATE(417),
    [anon_sym_RPAREN] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(914),
    [sym_comment] = ACTIONS(58),
  },
  [413] = {
    [sym_suffix] = STATE(192),
    [aux_sym_number_repeat1] = STATE(413),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKlL_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKdD_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKkK_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKmM_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKbB_RBRACK_SLASH] = ACTIONS(764),
    [sym_comment] = ACTIONS(58),
  },
  [414] = {
    [anon_sym_RPAREN] = ACTIONS(947),
    [anon_sym_RBRACE] = ACTIONS(947),
    [sym_statement_terminator] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(949),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(947),
    [anon_sym_COLON] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(947),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(947),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(947),
    [anon_sym_DOLLAR_CARET] = ACTIONS(947),
    [anon_sym_DOLLAR] = ACTIONS(949),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(947),
    [sym_string] = ACTIONS(947),
    [anon_sym_AT_DQUOTE] = ACTIONS(947),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(949),
    [sym_comment] = ACTIONS(58),
  },
  [415] = {
    [sym_statement_block] = STATE(418),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(58),
  },
  [416] = {
    [anon_sym_RPAREN] = ACTIONS(951),
    [anon_sym_RBRACE] = ACTIONS(951),
    [sym_statement_terminator] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(951),
    [anon_sym_COLON] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(951),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(951),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(951),
    [anon_sym_DOLLAR_CARET] = ACTIONS(951),
    [anon_sym_DOLLAR] = ACTIONS(953),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(951),
    [sym_string] = ACTIONS(951),
    [anon_sym_AT_DQUOTE] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(953),
    [sym_comment] = ACTIONS(58),
  },
  [417] = {
    [sym_elseif] = STATE(387),
    [aux_sym_if_repeat1] = STATE(417),
    [anon_sym_RPAREN] = ACTIONS(903),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(908),
    [sym_comment] = ACTIONS(58),
  },
  [418] = {
    [anon_sym_RPAREN] = ACTIONS(960),
    [anon_sym_RBRACE] = ACTIONS(960),
    [sym_statement_terminator] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKuU_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKkK_RBRACK_LBRACKfF_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKwW_RBRACK_LBRACKhH_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(962),
    [aux_sym_SLASH_LBRACKfF_RBRACK_LBRACKoO_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKyY_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_SLASH] = ACTIONS(960),
    [anon_sym_COLON] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKwW_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKkK_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKwW_RBRACK_LBRACKiI_RBRACK_LBRACKtT_RBRACK_LBRACKcC_RBRACK_LBRACKhH_RBRACK_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_DOLLAR_LPAREN_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_PIPE_LBRACKfF_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_RPAREN_SLASH] = ACTIONS(960),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(960),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(960),
    [anon_sym_DOLLAR_CARET] = ACTIONS(960),
    [anon_sym_DOLLAR] = ACTIONS(962),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(960),
    [sym_string] = ACTIONS(960),
    [anon_sym_AT_DQUOTE] = ACTIONS(960),
    [aux_sym_SLASH_LPAREN_LPAREN0x_PIPE0X_RPAREN_LBRACK_BSLASHda_DASHfA_DASHF_RBRACK_PLUS_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_DOT_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_DOT_BSLASHd_PLUS_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_PIPE_LPAREN0_PIPE_LBRACK1_DASH9_RBRACK_LPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_LPAREN_LPARENe_PIPEE_RPAREN_LPAREN_DASH_PIPE_PLUS_PIPE_RPAREN_BSLASHd_PLUS_PIPE_RPAREN_RPAREN_SLASH] = ACTIONS(962),
    [sym_comment] = ACTIONS(58),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 0),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_control_statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_control_statement, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_value, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_value, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_number, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_number, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_param_block, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_param_block, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_identifier, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_identifier, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 2),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flow_break_continue, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flow_break_continue, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_identifier, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_characters_repeat1, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_characters_repeat1, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_repeat1, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_repeat1, 1),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_repeat1, 1),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable, 2),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_characters, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expandable_here_string, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expandable_here_string, 2),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expandable_here_string_repeat1, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expandable_here_string_repeat1, 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_suffix, 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_suffix, 1),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 1),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 1),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_number, 2),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_number, 2),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_script_block, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_script_block, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_statement, 2),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_statement, 2),
  [316] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(3),
  [319] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(4),
  [322] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [325] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [328] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [331] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [334] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [337] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [340] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(11),
  [343] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(12),
  [346] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(13),
  [349] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [352] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [355] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(16),
  [358] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(17),
  [361] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(18),
  [364] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(19),
  [367] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(20),
  [370] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(21),
  [373] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(22),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 1),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pipeline, 1),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach_parameter, 2),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 1),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 1),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 3),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_trap, 3),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_trap, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_data, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_data, 3),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_parameter, 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 3),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2),
  [472] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(54),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_scope, 2),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable, 3),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_repeat1, 2),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_repeat1, 2),
  [485] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(142),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_characters_repeat1, 2),
  [490] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_characters_repeat1, 2), SHIFT_REPEAT(60),
  [493] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_characters_repeat1, 2), SHIFT_REPEAT(60),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [498] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(146),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expandable_here_string, 3),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expandable_here_string, 3),
  [515] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expandable_here_string_repeat1, 2), SHIFT_REPEAT(69),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expandable_here_string_repeat1, 2),
  [520] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expandable_here_string_repeat1, 2), SHIFT_REPEAT(71),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2),
  [527] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(73),
  [530] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(73),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_declaration, 2),
  [547] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(82),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [580] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(96),
  [583] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(97),
  [586] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(98),
  [589] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(99),
  [592] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(100),
  [595] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(101),
  [598] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(102),
  [601] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(103),
  [604] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(104),
  [607] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(105),
  [610] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(106),
  [613] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(107),
  [616] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(92),
  [619] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(83),
  [622] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(108),
  [625] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(85),
  [628] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(109),
  [631] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(110),
  [634] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(111),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 4),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 4),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(282),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 2),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 2),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally, 2),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally, 2),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try, 4),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_repeat1, 2),
  [669] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(127),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 3),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_condition, 3),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 2),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 2),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 1),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause_condition, 1),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch, 4),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch, 4),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable, 4),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable, 4),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 3),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 3),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [724] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(159),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 5),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 5),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while, 5),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while, 5),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [761] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(269),
  [764] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(191),
  [767] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(191),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 5),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 5),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [780] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(282),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catch, 3),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catch, 3),
  [789] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2), SHIFT_REPEAT(45),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_repeat1, 2),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 2),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_literal, 4),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_clause, 2),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_clause, 2),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_switch_body, 3),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_switch_body, 3),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [814] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(33),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expandable_string_part, 4),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expandable_string_part, 4),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 2),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 1),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 4),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_attribute, 4),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 6),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 6),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 1),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 1),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 6),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 6),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [855] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_repeat1, 2), SHIFT_REPEAT(259),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do, 6),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do, 6),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 6),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 6),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_declaration, 3),
  [874] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(289),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 3),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elseif, 2),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif, 2),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else, 2),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else, 2),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if, 7),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if, 7),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2),
  [905] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(309),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_repeat1, 2),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 7),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 7),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 7),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 7),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_arguments, 4),
  [938] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_arguments_repeat1, 2), SHIFT_REPEAT(349),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument, 3),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 8),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 8),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreach, 8),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreach, 8),
  [955] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(385),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for, 9),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for, 9),
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
