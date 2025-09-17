#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 2
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_DOT = 2,
  anon_sym_SEMI = 3,
  anon_sym_uses = 4,
  anon_sym_STAR = 5,
  anon_sym_private = 6,
  anon_sym_internal = 7,
  anon_sym_protected = 8,
  anon_sym_public = 9,
  anon_sym_static = 10,
  anon_sym_abstract = 11,
  anon_sym_override = 12,
  anon_sym_final = 13,
  anon_sym_transient = 14,
  anon_sym_class = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_var = 18,
  anon_sym_COLON = 19,
  anon_sym_as = 20,
  anon_sym_readonly = 21,
  anon_sym_EQ = 22,
  anon_sym_function = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_COMMA = 26,
  sym_id = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_stringliteral_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_stringliteral_token2 = 31,
  sym_digit = 32,
  sym_comment = 33,
  sym_line_comment = 34,
  sym_semgrep_ellipsis = 35,
  sym_start = 36,
  sym_namespacestatement = 37,
  sym_usesstatement = 38,
  sym_modifiers = 39,
  sym_gclass = 40,
  sym_classbody = 41,
  sym_classmembers = 42,
  sym_declaration = 43,
  sym_fielddefn = 44,
  sym_functiondefn = 45,
  sym_statement_ = 46,
  sym_statement = 47,
  sym_localvarstatement = 48,
  sym_indirectmemberaccess1 = 49,
  sym_assignmentormethodcall = 50,
  sym_type = 51,
  sym_type_identifier = 52,
  sym_expression = 53,
  sym_stringliteral = 54,
  aux_sym_start_repeat1 = 55,
  aux_sym_namespacestatement_repeat1 = 56,
  aux_sym_namespacestatement_repeat2 = 57,
  aux_sym_modifiers_repeat1 = 58,
  aux_sym_classmembers_repeat1 = 59,
  aux_sym_functiondefn_repeat1 = 60,
  aux_sym_indirectmemberaccess1_repeat1 = 61,
  aux_sym_assignmentormethodcall_repeat1 = 62,
  alias_sym_pat_3a2a380 = 63,
  alias_sym_pat_dc28280 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_uses] = "uses",
  [anon_sym_STAR] = "*",
  [anon_sym_private] = "private",
  [anon_sym_internal] = "internal",
  [anon_sym_protected] = "protected",
  [anon_sym_public] = "public",
  [anon_sym_static] = "static",
  [anon_sym_abstract] = "abstract",
  [anon_sym_override] = "override",
  [anon_sym_final] = "final",
  [anon_sym_transient] = "transient",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_as] = "as",
  [anon_sym_readonly] = "readonly",
  [anon_sym_EQ] = "=",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_id] = "id",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_stringliteral_token1] = "stringliteral_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_stringliteral_token2] = "stringliteral_token2",
  [sym_digit] = "digit",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_start] = "start",
  [sym_namespacestatement] = "namespacestatement",
  [sym_usesstatement] = "usesstatement",
  [sym_modifiers] = "modifiers",
  [sym_gclass] = "gclass",
  [sym_classbody] = "classbody",
  [sym_classmembers] = "classmembers",
  [sym_declaration] = "declaration",
  [sym_fielddefn] = "fielddefn",
  [sym_functiondefn] = "functiondefn",
  [sym_statement_] = "statement_",
  [sym_statement] = "statement",
  [sym_localvarstatement] = "localvarstatement",
  [sym_indirectmemberaccess1] = "indirectmemberaccess1",
  [sym_assignmentormethodcall] = "assignmentormethodcall",
  [sym_type] = "type",
  [sym_type_identifier] = "type_identifier",
  [sym_expression] = "expression",
  [sym_stringliteral] = "stringliteral",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_namespacestatement_repeat1] = "namespacestatement_repeat1",
  [aux_sym_namespacestatement_repeat2] = "namespacestatement_repeat2",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_classmembers_repeat1] = "classmembers_repeat1",
  [aux_sym_functiondefn_repeat1] = "functiondefn_repeat1",
  [aux_sym_indirectmemberaccess1_repeat1] = "indirectmemberaccess1_repeat1",
  [aux_sym_assignmentormethodcall_repeat1] = "assignmentormethodcall_repeat1",
  [alias_sym_pat_3a2a380] = "pat_3a2a380",
  [alias_sym_pat_dc28280] = "pat_dc28280",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_transient] = anon_sym_transient,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_id] = sym_id,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_stringliteral_token1] = aux_sym_stringliteral_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_stringliteral_token2] = aux_sym_stringliteral_token2,
  [sym_digit] = sym_digit,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_start] = sym_start,
  [sym_namespacestatement] = sym_namespacestatement,
  [sym_usesstatement] = sym_usesstatement,
  [sym_modifiers] = sym_modifiers,
  [sym_gclass] = sym_gclass,
  [sym_classbody] = sym_classbody,
  [sym_classmembers] = sym_classmembers,
  [sym_declaration] = sym_declaration,
  [sym_fielddefn] = sym_fielddefn,
  [sym_functiondefn] = sym_functiondefn,
  [sym_statement_] = sym_statement_,
  [sym_statement] = sym_statement,
  [sym_localvarstatement] = sym_localvarstatement,
  [sym_indirectmemberaccess1] = sym_indirectmemberaccess1,
  [sym_assignmentormethodcall] = sym_assignmentormethodcall,
  [sym_type] = sym_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_expression] = sym_expression,
  [sym_stringliteral] = sym_stringliteral,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_namespacestatement_repeat1] = aux_sym_namespacestatement_repeat1,
  [aux_sym_namespacestatement_repeat2] = aux_sym_namespacestatement_repeat2,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_classmembers_repeat1] = aux_sym_classmembers_repeat1,
  [aux_sym_functiondefn_repeat1] = aux_sym_functiondefn_repeat1,
  [aux_sym_indirectmemberaccess1_repeat1] = aux_sym_indirectmemberaccess1_repeat1,
  [aux_sym_assignmentormethodcall_repeat1] = aux_sym_assignmentormethodcall_repeat1,
  [alias_sym_pat_3a2a380] = alias_sym_pat_3a2a380,
  [alias_sym_pat_dc28280] = alias_sym_pat_dc28280,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stringliteral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stringliteral_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_namespacestatement] = {
    .visible = true,
    .named = true,
  },
  [sym_usesstatement] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_gclass] = {
    .visible = true,
    .named = true,
  },
  [sym_classbody] = {
    .visible = true,
    .named = true,
  },
  [sym_classmembers] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_fielddefn] = {
    .visible = true,
    .named = true,
  },
  [sym_functiondefn] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_localvarstatement] = {
    .visible = true,
    .named = true,
  },
  [sym_indirectmemberaccess1] = {
    .visible = true,
    .named = true,
  },
  [sym_assignmentormethodcall] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_stringliteral] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespacestatement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespacestatement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_classmembers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functiondefn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indirectmemberaccess1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignmentormethodcall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pat_3a2a380] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_dc28280] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_as = 1,
  field_body = 2,
  field_name = 3,
  field_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_body] = "body",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 2},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 1},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 3},
  [22] = {.index = 33, .length = 3},
  [23] = {.index = 36, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_type, 3},
  [3] =
    {field_value, 3},
  [4] =
    {field_type, 3},
    {field_value, 5},
  [6] =
    {field_as, 3},
  [7] =
    {field_as, 4},
  [8] =
    {field_type, 4},
  [9] =
    {field_value, 4},
  [10] =
    {field_as, 5},
    {field_type, 3},
  [12] =
    {field_as, 3},
    {field_value, 5},
  [14] =
    {field_as, 5},
  [15] =
    {field_as, 6},
    {field_type, 3},
  [17] =
    {field_as, 4},
    {field_value, 6},
  [19] =
    {field_as, 6},
    {field_type, 4},
  [21] =
    {field_type, 4},
    {field_value, 6},
  [23] =
    {field_as, 5},
    {field_type, 3},
    {field_value, 7},
  [26] =
    {field_as, 7},
    {field_type, 4},
  [28] =
    {field_as, 5},
    {field_value, 7},
  [30] =
    {field_as, 6},
    {field_type, 3},
    {field_value, 8},
  [33] =
    {field_as, 6},
    {field_type, 4},
    {field_value, 8},
  [36] =
    {field_as, 7},
    {field_type, 4},
    {field_value, 9},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = alias_sym_pat_dc28280,
  },
  [5] = {
    [1] = alias_sym_pat_3a2a380,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 34,
  [84] = 37,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 89,
  [102] = 102,
  [103] = 88,
  [104] = 90,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 98,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 19,
  [115] = 115,
  [116] = 21,
  [117] = 112,
  [118] = 118,
  [119] = 29,
  [120] = 120,
  [121] = 25,
  [122] = 122,
  [123] = 123,
  [124] = 26,
  [125] = 125,
  [126] = 93,
  [127] = 95,
  [128] = 128,
  [129] = 96,
  [130] = 92,
  [131] = 131,
  [132] = 132,
  [133] = 115,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 135,
  [140] = 132,
  [141] = 141,
  [142] = 142,
  [143] = 122,
  [144] = 120,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 125,
  [150] = 150,
  [151] = 123,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 128,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 160,
  [179] = 164,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 157,
  [185] = 159,
  [186] = 186,
  [187] = 156,
  [188] = 176,
  [189] = 189,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '"', 229,
        '\'', 222,
        '(', 135,
        ')', 136,
        '*', 103,
        ',', 137,
        '.', 99,
        '/', 3,
        ':', 128,
        ';', 100,
        '=', 132,
        'a', 27,
        'c', 60,
        'f', 48,
        'i', 62,
        'o', 93,
        'p', 15,
        'r', 41,
        's', 87,
        't', 74,
        'u', 79,
        'v', 18,
        '{', 124,
        '}', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 135,
        '.', 99,
        '/', 3,
        ':', 128,
        ';', 100,
        '=', 132,
        'v', 140,
        '}', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(238);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '.', 99,
        '/', 3,
        ';', 100,
        'a', 150,
        'c', 183,
        'f', 173,
        'i', 185,
        'o', 218,
        'p', 194,
        's', 210,
        't', 197,
        'u', 203,
        'v', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(239);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '.', 6,
        '/', 3,
        'a', 150,
        'c', 183,
        'f', 173,
        'i', 185,
        'o', 218,
        'p', 138,
        's', 210,
        't', 197,
        'u', 203,
        'v', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '.', 6,
        '/', 3,
        'a', 150,
        'c', 183,
        'f', 173,
        'i', 185,
        'o', 218,
        'p', 194,
        's', 210,
        't', 197,
        'v', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(237);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 93:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'k') ADVANCE(139);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(238);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(231);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(235);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(238);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_semgrep_ellipsis] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(182),
    [sym_usesstatement] = STATE(3),
    [sym_modifiers] = STATE(80),
    [sym_gclass] = STATE(155),
    [sym_functiondefn] = STATE(155),
    [sym_statement_] = STATE(144),
    [sym_statement] = STATE(155),
    [sym_localvarstatement] = STATE(151),
    [sym_assignmentormethodcall] = STATE(151),
    [aux_sym_start_repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(34),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_uses] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_internal] = ACTIONS(9),
    [anon_sym_protected] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(9),
    [anon_sym_override] = ACTIONS(9),
    [anon_sym_final] = ACTIONS(9),
    [anon_sym_transient] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(15),
    [sym_id] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_semgrep_ellipsis] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(4), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(174), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
    ACTIONS(9), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [56] = 14,
    ACTIONS(7), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(24), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(161), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
    ACTIONS(9), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [112] = 14,
    ACTIONS(7), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_modifiers_repeat1,
    STATE(81), 1,
      sym_modifiers,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(24), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(158), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
    ACTIONS(9), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [168] = 11,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      sym_semgrep_ellipsis,
    STATE(83), 1,
      aux_sym_modifiers_repeat1,
    STATE(175), 1,
      sym_modifiers,
    STATE(177), 1,
      sym_classmembers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(9), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(67), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(21), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [213] = 7,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym_semgrep_ellipsis,
    STATE(12), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(18), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(35), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [249] = 7,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      sym_semgrep_ellipsis,
    STATE(10), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(14), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [285] = 7,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      sym_semgrep_ellipsis,
    STATE(6), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(16), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(51), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [321] = 10,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      sym_semgrep_ellipsis,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_modifiers_repeat1,
    STATE(175), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(67), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(21), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [363] = 7,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      sym_semgrep_ellipsis,
    STATE(12), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(15), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(59), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [399] = 10,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_function,
    ACTIONS(74), 1,
      sym_semgrep_ellipsis,
    STATE(83), 1,
      aux_sym_modifiers_repeat1,
    STATE(175), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(67), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(63), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [441] = 5,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_namespacestatement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(80), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(82), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [472] = 5,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      sym_semgrep_ellipsis,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(87), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [502] = 5,
    ACTIONS(61), 1,
      sym_semgrep_ellipsis,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(59), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [532] = 5,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      sym_semgrep_ellipsis,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(93), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [562] = 5,
    ACTIONS(37), 1,
      sym_semgrep_ellipsis,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(35), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [592] = 5,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      sym_semgrep_ellipsis,
    STATE(20), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(99), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [622] = 5,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      sym_semgrep_ellipsis,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(99), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [652] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(103), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [676] = 5,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym_semgrep_ellipsis,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(105), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [706] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(109), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [730] = 5,
    ACTIONS(107), 1,
      sym_semgrep_ellipsis,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(105), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [760] = 6,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(119), 1,
      anon_sym_as,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(115), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [792] = 5,
    ACTIONS(123), 1,
      anon_sym_uses,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(24), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    ACTIONS(126), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [822] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(130), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_semgrep_ellipsis,
  [846] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(132), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_semgrep_ellipsis,
  [870] = 5,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      sym_semgrep_ellipsis,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(134), 14,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [900] = 6,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      anon_sym_as,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(140), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [932] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(148), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_semgrep_ellipsis,
  [956] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(80), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(82), 15,
      anon_sym_DOT,
      anon_sym_uses,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
  [982] = 5,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_as,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(152), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1011] = 5,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(162), 1,
      anon_sym_as,
    ACTIONS(164), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(160), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1040] = 4,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(168), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1066] = 5,
    ACTIONS(176), 1,
      sym_semgrep_ellipsis,
    STATE(37), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(174), 4,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
    ACTIONS(172), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1094] = 3,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(178), 14,
      ts_builtin_sym_end,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1118] = 4,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(184), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1144] = 5,
    ACTIONS(193), 1,
      sym_semgrep_ellipsis,
    STATE(37), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(191), 4,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
    ACTIONS(188), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1172] = 4,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(197), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1198] = 4,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(203), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1224] = 4,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(209), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1250] = 4,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(215), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1276] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(221), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(225), 14,
      ts_builtin_sym_end,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1323] = 3,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(229), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1346] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(231), 14,
      ts_builtin_sym_end,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1367] = 3,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(235), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1390] = 3,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(239), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1413] = 3,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(243), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1436] = 3,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(247), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1459] = 3,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(251), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1482] = 3,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(255), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1505] = 3,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(259), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1528] = 3,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(263), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1551] = 3,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(267), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1574] = 3,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(271), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1597] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(273), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1617] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(275), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(277), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1657] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(279), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1677] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(281), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(283), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1717] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(285), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(287), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1757] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(289), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1777] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(291), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(140), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1817] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(293), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1837] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(295), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1857] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(297), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1877] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(299), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1897] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(301), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1917] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(303), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1937] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(305), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1957] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(307), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1977] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(309), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [1997] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(311), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [2017] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(313), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [2037] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(315), 13,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_function,
      sym_semgrep_ellipsis,
  [2057] = 9,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(174), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2089] = 9,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(161), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2121] = 9,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(167), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2153] = 9,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      sym_id,
    ACTIONS(19), 1,
      sym_semgrep_ellipsis,
    STATE(144), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(151), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(158), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2185] = 4,
    ACTIONS(176), 1,
      anon_sym_var,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(317), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2207] = 4,
    ACTIONS(193), 1,
      anon_sym_var,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(319), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2229] = 8,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_var,
    ACTIONS(327), 1,
      sym_id,
    ACTIONS(330), 1,
      sym_semgrep_ellipsis,
    STATE(120), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(85), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(123), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2257] = 8,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_var,
    ACTIONS(337), 1,
      sym_id,
    ACTIONS(339), 1,
      sym_semgrep_ellipsis,
    STATE(120), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(87), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(123), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2285] = 8,
    ACTIONS(335), 1,
      anon_sym_var,
    ACTIONS(337), 1,
      sym_id,
    ACTIONS(339), 1,
      sym_semgrep_ellipsis,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(85), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(123), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2313] = 6,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(347), 2,
      anon_sym_var,
      sym_id,
    STATE(90), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(345), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2337] = 6,
    ACTIONS(351), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(356), 2,
      anon_sym_var,
      sym_id,
    STATE(89), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(354), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2361] = 6,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(363), 2,
      anon_sym_var,
      sym_id,
    STATE(89), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(361), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2385] = 7,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(135), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2409] = 5,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(379), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(375), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(373), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2429] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(381), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(383), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [2445] = 7,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_stringliteral,
    STATE(139), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2469] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(387), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(389), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [2485] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(391), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(393), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [2501] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(53), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2522] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(143), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2543] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(47), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2564] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(48), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2585] = 5,
    ACTIONS(395), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(101), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [2604] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(52), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2625] = 5,
    ACTIONS(401), 1,
      anon_sym_DOT,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(104), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [2644] = 5,
    ACTIONS(401), 1,
      anon_sym_DOT,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(101), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [2663] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(49), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2684] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(50), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2705] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(51), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2726] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(54), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2747] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(148), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2768] = 6,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_stringliteral,
    STATE(122), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(405), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2789] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(44), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2810] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(149), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2831] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(46), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(411), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(103), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [2867] = 4,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(415), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(413), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2884] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(419), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(109), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [2899] = 6,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_stringliteral,
    STATE(125), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(405), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2920] = 6,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_stringliteral,
    STATE(55), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      sym_id,
      sym_semgrep_ellipsis,
  [2941] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(421), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(148), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2955] = 4,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(425), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(427), 2,
      anon_sym_var,
      sym_id,
  [2971] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(429), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(130), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2985] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(433), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(431), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2999] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(437), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(435), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3013] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(439), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3027] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(443), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(441), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3041] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3063] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(445), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(447), 2,
      anon_sym_var,
      sym_id,
  [3076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3087] = 4,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3102] = 4,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3116] = 4,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3130] = 3,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3142] = 4,
    ACTIONS(464), 1,
      sym_id,
    STATE(21), 1,
      sym_type_identifier,
    STATE(32), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3156] = 4,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3170] = 4,
    ACTIONS(464), 1,
      sym_id,
    STATE(21), 1,
      sym_type_identifier,
    STATE(133), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3184] = 4,
    ACTIONS(468), 1,
      sym_id,
    STATE(115), 1,
      sym_type,
    STATE(116), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3198] = 4,
    ACTIONS(464), 1,
      sym_id,
    STATE(21), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3212] = 4,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3226] = 4,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3240] = 3,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_classbody,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3251] = 3,
    ACTIONS(476), 1,
      sym_id,
    STATE(2), 1,
      sym_namespacestatement,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3271] = 3,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3282] = 3,
    ACTIONS(480), 1,
      anon_sym_STAR,
    ACTIONS(482), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3293] = 3,
    ACTIONS(484), 1,
      anon_sym_readonly,
    ACTIONS(486), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3304] = 3,
    ACTIONS(488), 1,
      anon_sym_readonly,
    ACTIONS(490), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3315] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(453), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3324] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3333] = 3,
    ACTIONS(482), 1,
      sym_id,
    ACTIONS(492), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3344] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3353] = 3,
    ACTIONS(494), 1,
      anon_sym_readonly,
    ACTIONS(496), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3364] = 3,
    ACTIONS(498), 1,
      anon_sym_readonly,
    ACTIONS(500), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3375] = 2,
    ACTIONS(502), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3383] = 2,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3391] = 2,
    ACTIONS(506), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(508), 2,
      sym_comment,
      sym_line_comment,
  [3399] = 2,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3407] = 2,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3415] = 2,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3423] = 2,
    ACTIONS(516), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3431] = 2,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3439] = 2,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3447] = 2,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3455] = 2,
    ACTIONS(365), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3463] = 2,
    ACTIONS(524), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3471] = 2,
    ACTIONS(526), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3479] = 2,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3487] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3495] = 2,
    ACTIONS(482), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3503] = 2,
    ACTIONS(530), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3511] = 2,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3519] = 2,
    ACTIONS(534), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3527] = 2,
    ACTIONS(536), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3535] = 2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3543] = 2,
    ACTIONS(540), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3551] = 2,
    ACTIONS(542), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(508), 2,
      sym_comment,
      sym_line_comment,
  [3559] = 2,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3567] = 2,
    ACTIONS(546), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3575] = 2,
    ACTIONS(385), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3583] = 2,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3591] = 2,
    ACTIONS(550), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3599] = 2,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3607] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3615] = 2,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3623] = 2,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3631] = 2,
    ACTIONS(560), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3639] = 2,
    ACTIONS(562), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(508), 2,
      sym_comment,
      sym_line_comment,
  [3647] = 2,
    ACTIONS(564), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(508), 2,
      sym_comment,
      sym_line_comment,
  [3655] = 2,
    ACTIONS(566), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 249,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 321,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 441,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 502,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 592,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 652,
  [SMALL_STATE(20)] = 676,
  [SMALL_STATE(21)] = 706,
  [SMALL_STATE(22)] = 730,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 822,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 870,
  [SMALL_STATE(28)] = 900,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 982,
  [SMALL_STATE(32)] = 1011,
  [SMALL_STATE(33)] = 1040,
  [SMALL_STATE(34)] = 1066,
  [SMALL_STATE(35)] = 1094,
  [SMALL_STATE(36)] = 1118,
  [SMALL_STATE(37)] = 1144,
  [SMALL_STATE(38)] = 1172,
  [SMALL_STATE(39)] = 1198,
  [SMALL_STATE(40)] = 1224,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1276,
  [SMALL_STATE(43)] = 1302,
  [SMALL_STATE(44)] = 1323,
  [SMALL_STATE(45)] = 1346,
  [SMALL_STATE(46)] = 1367,
  [SMALL_STATE(47)] = 1390,
  [SMALL_STATE(48)] = 1413,
  [SMALL_STATE(49)] = 1436,
  [SMALL_STATE(50)] = 1459,
  [SMALL_STATE(51)] = 1482,
  [SMALL_STATE(52)] = 1505,
  [SMALL_STATE(53)] = 1528,
  [SMALL_STATE(54)] = 1551,
  [SMALL_STATE(55)] = 1574,
  [SMALL_STATE(56)] = 1597,
  [SMALL_STATE(57)] = 1617,
  [SMALL_STATE(58)] = 1637,
  [SMALL_STATE(59)] = 1657,
  [SMALL_STATE(60)] = 1677,
  [SMALL_STATE(61)] = 1697,
  [SMALL_STATE(62)] = 1717,
  [SMALL_STATE(63)] = 1737,
  [SMALL_STATE(64)] = 1757,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1797,
  [SMALL_STATE(67)] = 1817,
  [SMALL_STATE(68)] = 1837,
  [SMALL_STATE(69)] = 1857,
  [SMALL_STATE(70)] = 1877,
  [SMALL_STATE(71)] = 1897,
  [SMALL_STATE(72)] = 1917,
  [SMALL_STATE(73)] = 1937,
  [SMALL_STATE(74)] = 1957,
  [SMALL_STATE(75)] = 1977,
  [SMALL_STATE(76)] = 1997,
  [SMALL_STATE(77)] = 2017,
  [SMALL_STATE(78)] = 2037,
  [SMALL_STATE(79)] = 2057,
  [SMALL_STATE(80)] = 2089,
  [SMALL_STATE(81)] = 2121,
  [SMALL_STATE(82)] = 2153,
  [SMALL_STATE(83)] = 2185,
  [SMALL_STATE(84)] = 2207,
  [SMALL_STATE(85)] = 2229,
  [SMALL_STATE(86)] = 2257,
  [SMALL_STATE(87)] = 2285,
  [SMALL_STATE(88)] = 2313,
  [SMALL_STATE(89)] = 2337,
  [SMALL_STATE(90)] = 2361,
  [SMALL_STATE(91)] = 2385,
  [SMALL_STATE(92)] = 2409,
  [SMALL_STATE(93)] = 2429,
  [SMALL_STATE(94)] = 2445,
  [SMALL_STATE(95)] = 2469,
  [SMALL_STATE(96)] = 2485,
  [SMALL_STATE(97)] = 2501,
  [SMALL_STATE(98)] = 2522,
  [SMALL_STATE(99)] = 2543,
  [SMALL_STATE(100)] = 2564,
  [SMALL_STATE(101)] = 2585,
  [SMALL_STATE(102)] = 2604,
  [SMALL_STATE(103)] = 2625,
  [SMALL_STATE(104)] = 2644,
  [SMALL_STATE(105)] = 2663,
  [SMALL_STATE(106)] = 2684,
  [SMALL_STATE(107)] = 2705,
  [SMALL_STATE(108)] = 2726,
  [SMALL_STATE(109)] = 2747,
  [SMALL_STATE(110)] = 2768,
  [SMALL_STATE(111)] = 2789,
  [SMALL_STATE(112)] = 2810,
  [SMALL_STATE(113)] = 2831,
  [SMALL_STATE(114)] = 2852,
  [SMALL_STATE(115)] = 2867,
  [SMALL_STATE(116)] = 2884,
  [SMALL_STATE(117)] = 2899,
  [SMALL_STATE(118)] = 2920,
  [SMALL_STATE(119)] = 2941,
  [SMALL_STATE(120)] = 2955,
  [SMALL_STATE(121)] = 2971,
  [SMALL_STATE(122)] = 2985,
  [SMALL_STATE(123)] = 2999,
  [SMALL_STATE(124)] = 3013,
  [SMALL_STATE(125)] = 3027,
  [SMALL_STATE(126)] = 3041,
  [SMALL_STATE(127)] = 3052,
  [SMALL_STATE(128)] = 3063,
  [SMALL_STATE(129)] = 3076,
  [SMALL_STATE(130)] = 3087,
  [SMALL_STATE(131)] = 3102,
  [SMALL_STATE(132)] = 3116,
  [SMALL_STATE(133)] = 3130,
  [SMALL_STATE(134)] = 3142,
  [SMALL_STATE(135)] = 3156,
  [SMALL_STATE(136)] = 3170,
  [SMALL_STATE(137)] = 3184,
  [SMALL_STATE(138)] = 3198,
  [SMALL_STATE(139)] = 3212,
  [SMALL_STATE(140)] = 3226,
  [SMALL_STATE(141)] = 3240,
  [SMALL_STATE(142)] = 3251,
  [SMALL_STATE(143)] = 3262,
  [SMALL_STATE(144)] = 3271,
  [SMALL_STATE(145)] = 3282,
  [SMALL_STATE(146)] = 3293,
  [SMALL_STATE(147)] = 3304,
  [SMALL_STATE(148)] = 3315,
  [SMALL_STATE(149)] = 3324,
  [SMALL_STATE(150)] = 3333,
  [SMALL_STATE(151)] = 3344,
  [SMALL_STATE(152)] = 3353,
  [SMALL_STATE(153)] = 3364,
  [SMALL_STATE(154)] = 3375,
  [SMALL_STATE(155)] = 3383,
  [SMALL_STATE(156)] = 3391,
  [SMALL_STATE(157)] = 3399,
  [SMALL_STATE(158)] = 3407,
  [SMALL_STATE(159)] = 3415,
  [SMALL_STATE(160)] = 3423,
  [SMALL_STATE(161)] = 3431,
  [SMALL_STATE(162)] = 3439,
  [SMALL_STATE(163)] = 3447,
  [SMALL_STATE(164)] = 3455,
  [SMALL_STATE(165)] = 3463,
  [SMALL_STATE(166)] = 3471,
  [SMALL_STATE(167)] = 3479,
  [SMALL_STATE(168)] = 3487,
  [SMALL_STATE(169)] = 3495,
  [SMALL_STATE(170)] = 3503,
  [SMALL_STATE(171)] = 3511,
  [SMALL_STATE(172)] = 3519,
  [SMALL_STATE(173)] = 3527,
  [SMALL_STATE(174)] = 3535,
  [SMALL_STATE(175)] = 3543,
  [SMALL_STATE(176)] = 3551,
  [SMALL_STATE(177)] = 3559,
  [SMALL_STATE(178)] = 3567,
  [SMALL_STATE(179)] = 3575,
  [SMALL_STATE(180)] = 3583,
  [SMALL_STATE(181)] = 3591,
  [SMALL_STATE(182)] = 3599,
  [SMALL_STATE(183)] = 3607,
  [SMALL_STATE(184)] = 3615,
  [SMALL_STATE(185)] = 3623,
  [SMALL_STATE(186)] = 3631,
  [SMALL_STATE(187)] = 3639,
  [SMALL_STATE(188)] = 3647,
  [SMALL_STATE(189)] = 3655,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classmembers, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 9),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 19),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 13),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 6, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 23),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 7, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 10),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 15),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 17),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 18),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 20),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 21),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 22),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 15),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 14),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 11),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 13),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 16),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 17),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 18),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 19),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 20),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 21),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 22),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 11, 0, 23),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 4, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indirectmemberaccess1_repeat1, 2, 0, 0),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indirectmemberaccess1_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gclass, 3, 0, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 5, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gosu(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
