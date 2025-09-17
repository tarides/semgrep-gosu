#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 2
#define TOKEN_COUNT 40
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
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_QMARK_PLUS = 35,
  anon_sym_QMARK_DASH = 36,
  sym_comment = 37,
  sym_line_comment = 38,
  sym_semgrep_ellipsis = 39,
  sym_start = 40,
  sym_namespacestatement = 41,
  sym_usesstatement = 42,
  sym_modifiers = 43,
  sym_gclass = 44,
  sym_classbody = 45,
  sym_classmembers = 46,
  sym_declaration = 47,
  sym_fielddefn = 48,
  sym_functiondefn = 49,
  sym_statement_ = 50,
  sym_statement = 51,
  sym_localvarstatement = 52,
  sym_indirectmemberaccess1 = 53,
  sym_assignmentormethodcall = 54,
  sym_type = 55,
  sym_type_identifier = 56,
  sym_expression = 57,
  sym_additiveexpr = 58,
  sym_stringliteral = 59,
  sym_additiveop = 60,
  aux_sym_start_repeat1 = 61,
  aux_sym_namespacestatement_repeat1 = 62,
  aux_sym_namespacestatement_repeat2 = 63,
  aux_sym_modifiers_repeat1 = 64,
  aux_sym_classmembers_repeat1 = 65,
  aux_sym_functiondefn_repeat1 = 66,
  aux_sym_indirectmemberaccess1_repeat1 = 67,
  aux_sym_assignmentormethodcall_repeat1 = 68,
  alias_sym_pat_3a2a380 = 69,
  alias_sym_pat_dc28280 = 70,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK_PLUS] = "\?+",
  [anon_sym_QMARK_DASH] = "\?-",
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
  [sym_additiveexpr] = "additiveexpr",
  [sym_stringliteral] = "stringliteral",
  [sym_additiveop] = "additiveop",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK_PLUS] = anon_sym_QMARK_PLUS,
  [anon_sym_QMARK_DASH] = anon_sym_QMARK_DASH,
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
  [sym_additiveexpr] = sym_additiveexpr,
  [sym_stringliteral] = sym_stringliteral,
  [sym_additiveop] = sym_additiveop,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DASH] = {
    .visible = true,
    .named = false,
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
  [sym_additiveexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_stringliteral] = {
    .visible = true,
    .named = true,
  },
  [sym_additiveop] = {
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
  [83] = 83,
  [84] = 49,
  [85] = 46,
  [86] = 86,
  [87] = 5,
  [88] = 88,
  [89] = 7,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 6,
  [95] = 95,
  [96] = 96,
  [97] = 8,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 100,
  [102] = 102,
  [103] = 88,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 108,
  [120] = 110,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 116,
  [126] = 86,
  [127] = 95,
  [128] = 39,
  [129] = 129,
  [130] = 40,
  [131] = 96,
  [132] = 90,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 113,
  [137] = 123,
  [138] = 115,
  [139] = 139,
  [140] = 118,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 129,
  [147] = 143,
  [148] = 144,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 133,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 134,
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
  [168] = 139,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 159,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 173,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 163,
  [190] = 165,
  [191] = 191,
  [192] = 160,
  [193] = 176,
  [194] = 194,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '"', 230,
        '\'', 223,
        '(', 136,
        ')', 137,
        '*', 104,
        '+', 238,
        ',', 138,
        '-', 239,
        '.', 100,
        '/', 3,
        ':', 129,
        ';', 101,
        '=', 133,
        '?', 5,
        'a', 28,
        'c', 61,
        'f', 49,
        'i', 63,
        'o', 94,
        'p', 16,
        'r', 42,
        's', 88,
        't', 75,
        'u', 80,
        'v', 19,
        '{', 125,
        '}', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 136,
        '+', 238,
        '-', 239,
        '.', 100,
        '/', 3,
        ':', 129,
        ';', 101,
        '=', 133,
        '?', 5,
        'v', 141,
        '}', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(243);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == '-') ADVANCE(241);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '.', 100,
        '/', 3,
        ';', 101,
        'a', 151,
        'c', 184,
        'f', 174,
        'i', 186,
        'o', 219,
        'p', 195,
        's', 211,
        't', 198,
        'u', 204,
        'v', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(244);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '.', 7,
        '/', 3,
        'a', 151,
        'c', 184,
        'f', 174,
        'i', 186,
        'o', 219,
        'p', 139,
        's', 211,
        't', 198,
        'u', 204,
        'v', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '.', 7,
        '/', 3,
        'a', 151,
        'c', 184,
        'f', 174,
        'i', 186,
        'o', 219,
        'p', 195,
        's', 211,
        't', 198,
        'v', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(242);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(243);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(236);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(243);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
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
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 0},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK_PLUS] = ACTIONS(1),
    [anon_sym_QMARK_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_semgrep_ellipsis] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(178),
    [sym_usesstatement] = STATE(3),
    [sym_modifiers] = STATE(82),
    [sym_gclass] = STATE(183),
    [sym_functiondefn] = STATE(183),
    [sym_statement_] = STATE(152),
    [sym_statement] = STATE(183),
    [sym_localvarstatement] = STATE(156),
    [sym_assignmentormethodcall] = STATE(156),
    [aux_sym_start_repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(49),
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
    STATE(49), 1,
      aux_sym_modifiers_repeat1,
    STATE(81), 1,
      sym_modifiers,
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(4), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(182), 3,
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
    STATE(49), 1,
      aux_sym_modifiers_repeat1,
    STATE(80), 1,
      sym_modifiers,
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(29), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(164), 3,
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
    STATE(49), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(29), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(162), 3,
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
  [168] = 3,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(21), 21,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [199] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(23), 21,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [227] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(25), 21,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(27), 21,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [283] = 11,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      sym_semgrep_ellipsis,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(177), 1,
      sym_classmembers,
    STATE(194), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(13), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(59), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(29), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [328] = 5,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(41), 13,
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
  [360] = 7,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_semgrep_ellipsis,
    STATE(15), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(49), 14,
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
  [396] = 7,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_semgrep_ellipsis,
    STATE(26), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(31), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 14,
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
  [432] = 10,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      sym_semgrep_ellipsis,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(14), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(59), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(29), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [474] = 10,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_function,
    ACTIONS(74), 1,
      sym_semgrep_ellipsis,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(14), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(59), 2,
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
  [516] = 7,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      sym_semgrep_ellipsis,
    STATE(27), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(33), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(79), 14,
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
  [552] = 5,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(85), 13,
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
  [584] = 5,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(89), 13,
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
  [616] = 5,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(93), 13,
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
  [648] = 5,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(97), 13,
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
  [680] = 5,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(101), 13,
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
  [712] = 5,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(105), 13,
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
  [744] = 5,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(109), 13,
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
  [776] = 5,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(113), 13,
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
  [808] = 5,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(117), 13,
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
  [840] = 5,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(121), 13,
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
  [872] = 7,
    ACTIONS(123), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      sym_semgrep_ellipsis,
    STATE(27), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(37), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(127), 14,
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
  [908] = 5,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_namespacestatement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(134), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(136), 14,
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
  [939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(134), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(136), 15,
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
  [965] = 5,
    ACTIONS(138), 1,
      anon_sym_uses,
    ACTIONS(143), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(29), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    ACTIONS(141), 13,
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
  [995] = 6,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(147), 13,
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
  [1027] = 5,
    ACTIONS(129), 1,
      sym_semgrep_ellipsis,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(127), 14,
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
  [1057] = 5,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(157), 14,
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
  [1087] = 5,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(161), 14,
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
  [1117] = 5,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(168), 14,
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
  [1147] = 5,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(172), 14,
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
  [1177] = 5,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym_semgrep_ellipsis,
    STATE(35), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(178), 14,
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
  [1207] = 5,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(178), 14,
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
  [1237] = 5,
    ACTIONS(81), 1,
      sym_semgrep_ellipsis,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(79), 14,
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
  [1267] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(182), 17,
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
  [1291] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(184), 17,
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
  [1315] = 5,
    ACTIONS(174), 1,
      sym_semgrep_ellipsis,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(172), 14,
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
  [1345] = 6,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_as,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(190), 13,
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
  [1377] = 5,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(202), 1,
      anon_sym_as,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(200), 13,
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
  [1406] = 5,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(208), 13,
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
  [1435] = 4,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(216), 13,
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
  [1461] = 5,
    ACTIONS(225), 1,
      sym_semgrep_ellipsis,
    STATE(46), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(223), 4,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
    ACTIONS(220), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1489] = 4,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_EQ,
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
  [1515] = 4,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_EQ,
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
  [1541] = 5,
    ACTIONS(243), 1,
      sym_semgrep_ellipsis,
    STATE(46), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(241), 4,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
    ACTIONS(239), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1569] = 4,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      anon_sym_EQ,
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
  [1595] = 4,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(253), 13,
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
  [1621] = 4,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      anon_sym_EQ,
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
  [1647] = 3,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(263), 14,
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
  [1671] = 4,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(269), 13,
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
    ACTIONS(273), 14,
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
  [1718] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(275), 14,
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
  [1739] = 2,
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
  [1759] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(147), 13,
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
  [1779] = 2,
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
  [1799] = 2,
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
  [1819] = 2,
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
  [1839] = 2,
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
  [1859] = 2,
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
  [1879] = 2,
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
  [1899] = 2,
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
  [1919] = 2,
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
  [1939] = 2,
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
  [1959] = 2,
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
  [1979] = 2,
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
  [1999] = 2,
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
  [2019] = 2,
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
  [2039] = 2,
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
  [2059] = 2,
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
  [2079] = 2,
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
  [2099] = 2,
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
  [2119] = 2,
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
  [2139] = 2,
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
  [2159] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(317), 13,
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
  [2179] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(319), 13,
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
  [2199] = 9,
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
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(182), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2231] = 9,
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
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(162), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2263] = 9,
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
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(164), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2295] = 9,
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
    STATE(152), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(169), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2327] = 4,
    ACTIONS(243), 1,
      anon_sym_var,
    STATE(85), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(321), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2349] = 4,
    ACTIONS(225), 1,
      anon_sym_var,
    STATE(85), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(323), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2371] = 5,
    STATE(119), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(328), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(326), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2394] = 4,
    STATE(119), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(330), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(21), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2415] = 5,
    STATE(119), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(332), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2438] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(336), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(25), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2456] = 6,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(342), 2,
      anon_sym_var,
      sym_id,
    STATE(96), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(340), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2480] = 8,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      anon_sym_var,
    ACTIONS(350), 1,
      sym_id,
    ACTIONS(352), 1,
      sym_semgrep_ellipsis,
    STATE(133), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(92), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(134), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2508] = 8,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      anon_sym_var,
    ACTIONS(359), 1,
      sym_id,
    ACTIONS(362), 1,
      sym_semgrep_ellipsis,
    STATE(133), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(92), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(134), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2536] = 8,
    ACTIONS(348), 1,
      anon_sym_var,
    ACTIONS(350), 1,
      sym_id,
    ACTIONS(352), 1,
      sym_semgrep_ellipsis,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(91), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(134), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(23), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2582] = 6,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(371), 2,
      anon_sym_var,
      sym_id,
    STATE(90), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(369), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2606] = 6,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 2,
      anon_sym_var,
      sym_id,
    STATE(96), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(376), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(383), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(27), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2648] = 6,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_additiveop,
    STATE(144), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2671] = 6,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_additiveop,
    STATE(148), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2694] = 7,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2719] = 7,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2744] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2766] = 4,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2784] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2806] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2828] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2850] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2872] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2894] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2916] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2938] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2960] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [2982] = 5,
    ACTIONS(405), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(403), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(401), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3002] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3024] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(409), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(411), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3040] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3062] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(413), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(415), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3100] = 6,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(417), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(94), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3122] = 6,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(417), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(94), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3144] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3166] = 4,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(423), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3184] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(425), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(427), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3200] = 6,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(6), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3222] = 6,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(417), 2,
      sym_id,
      sym_semgrep_ellipsis,
    STATE(94), 2,
      sym_additiveexpr,
      sym_stringliteral,
  [3244] = 4,
    STATE(108), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(43), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3262] = 5,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(132), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(433), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(182), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [3296] = 4,
    ACTIONS(439), 1,
      anon_sym_EQ,
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
  [3313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(184), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [3328] = 5,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(131), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3347] = 5,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(131), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3366] = 4,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(451), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(453), 2,
      anon_sym_var,
      sym_id,
  [3382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(457), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(455), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3396] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(459), 4,
      sym_id,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_semgrep_ellipsis,
  [3407] = 4,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3422] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(427), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3433] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3444] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(467), 2,
      anon_sym_var,
      sym_id,
  [3457] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(415), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3468] = 4,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3482] = 4,
    ACTIONS(472), 1,
      sym_id,
    STATE(40), 1,
      sym_type_identifier,
    STATE(44), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3496] = 4,
    ACTIONS(472), 1,
      sym_id,
    STATE(40), 1,
      sym_type_identifier,
    STATE(146), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3510] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3524] = 4,
    ACTIONS(472), 1,
      sym_id,
    STATE(40), 1,
      sym_type_identifier,
    STATE(43), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3538] = 3,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3550] = 4,
    ACTIONS(478), 1,
      sym_id,
    STATE(129), 1,
      sym_type,
    STATE(130), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3564] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_indirectmemberaccess1_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3578] = 3,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_classbody,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3589] = 3,
    ACTIONS(484), 1,
      anon_sym_readonly,
    ACTIONS(486), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3600] = 3,
    ACTIONS(488), 1,
      anon_sym_readonly,
    ACTIONS(490), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3611] = 3,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3622] = 3,
    ACTIONS(494), 1,
      anon_sym_STAR,
    ACTIONS(496), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3633] = 3,
    ACTIONS(498), 1,
      anon_sym_readonly,
    ACTIONS(500), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3644] = 3,
    ACTIONS(496), 1,
      sym_id,
    ACTIONS(502), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3655] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3664] = 3,
    ACTIONS(504), 1,
      sym_id,
    STATE(2), 1,
      sym_namespacestatement,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3675] = 3,
    ACTIONS(506), 1,
      anon_sym_readonly,
    ACTIONS(508), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3686] = 2,
    ACTIONS(510), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3694] = 2,
    ACTIONS(512), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(514), 2,
      sym_comment,
      sym_line_comment,
  [3702] = 2,
    ACTIONS(516), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3710] = 2,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3718] = 2,
    ACTIONS(520), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3726] = 2,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3734] = 2,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3742] = 2,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3750] = 2,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3758] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3766] = 2,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3774] = 2,
    ACTIONS(532), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3782] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3790] = 2,
    ACTIONS(536), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3798] = 2,
    ACTIONS(391), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3806] = 2,
    ACTIONS(538), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3814] = 2,
    ACTIONS(540), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3822] = 2,
    ACTIONS(542), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(514), 2,
      sym_comment,
      sym_line_comment,
  [3830] = 2,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3838] = 2,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3846] = 2,
    ACTIONS(548), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3854] = 2,
    ACTIONS(550), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3862] = 2,
    ACTIONS(552), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3870] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3878] = 2,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3886] = 2,
    ACTIONS(399), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3894] = 2,
    ACTIONS(496), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3902] = 2,
    ACTIONS(558), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3910] = 2,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3918] = 2,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3926] = 2,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3934] = 2,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3942] = 2,
    ACTIONS(568), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3950] = 2,
    ACTIONS(570), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(514), 2,
      sym_comment,
      sym_line_comment,
  [3958] = 2,
    ACTIONS(572), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(514), 2,
      sym_comment,
      sym_line_comment,
  [3966] = 2,
    ACTIONS(574), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 255,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 432,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 552,
  [SMALL_STATE(17)] = 584,
  [SMALL_STATE(18)] = 616,
  [SMALL_STATE(19)] = 648,
  [SMALL_STATE(20)] = 680,
  [SMALL_STATE(21)] = 712,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 872,
  [SMALL_STATE(27)] = 908,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 965,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1027,
  [SMALL_STATE(32)] = 1057,
  [SMALL_STATE(33)] = 1087,
  [SMALL_STATE(34)] = 1117,
  [SMALL_STATE(35)] = 1147,
  [SMALL_STATE(36)] = 1177,
  [SMALL_STATE(37)] = 1207,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1267,
  [SMALL_STATE(40)] = 1291,
  [SMALL_STATE(41)] = 1315,
  [SMALL_STATE(42)] = 1345,
  [SMALL_STATE(43)] = 1377,
  [SMALL_STATE(44)] = 1406,
  [SMALL_STATE(45)] = 1435,
  [SMALL_STATE(46)] = 1461,
  [SMALL_STATE(47)] = 1489,
  [SMALL_STATE(48)] = 1515,
  [SMALL_STATE(49)] = 1541,
  [SMALL_STATE(50)] = 1569,
  [SMALL_STATE(51)] = 1595,
  [SMALL_STATE(52)] = 1621,
  [SMALL_STATE(53)] = 1647,
  [SMALL_STATE(54)] = 1671,
  [SMALL_STATE(55)] = 1697,
  [SMALL_STATE(56)] = 1718,
  [SMALL_STATE(57)] = 1739,
  [SMALL_STATE(58)] = 1759,
  [SMALL_STATE(59)] = 1779,
  [SMALL_STATE(60)] = 1799,
  [SMALL_STATE(61)] = 1819,
  [SMALL_STATE(62)] = 1839,
  [SMALL_STATE(63)] = 1859,
  [SMALL_STATE(64)] = 1879,
  [SMALL_STATE(65)] = 1899,
  [SMALL_STATE(66)] = 1919,
  [SMALL_STATE(67)] = 1939,
  [SMALL_STATE(68)] = 1959,
  [SMALL_STATE(69)] = 1979,
  [SMALL_STATE(70)] = 1999,
  [SMALL_STATE(71)] = 2019,
  [SMALL_STATE(72)] = 2039,
  [SMALL_STATE(73)] = 2059,
  [SMALL_STATE(74)] = 2079,
  [SMALL_STATE(75)] = 2099,
  [SMALL_STATE(76)] = 2119,
  [SMALL_STATE(77)] = 2139,
  [SMALL_STATE(78)] = 2159,
  [SMALL_STATE(79)] = 2179,
  [SMALL_STATE(80)] = 2199,
  [SMALL_STATE(81)] = 2231,
  [SMALL_STATE(82)] = 2263,
  [SMALL_STATE(83)] = 2295,
  [SMALL_STATE(84)] = 2327,
  [SMALL_STATE(85)] = 2349,
  [SMALL_STATE(86)] = 2371,
  [SMALL_STATE(87)] = 2394,
  [SMALL_STATE(88)] = 2415,
  [SMALL_STATE(89)] = 2438,
  [SMALL_STATE(90)] = 2456,
  [SMALL_STATE(91)] = 2480,
  [SMALL_STATE(92)] = 2508,
  [SMALL_STATE(93)] = 2536,
  [SMALL_STATE(94)] = 2564,
  [SMALL_STATE(95)] = 2582,
  [SMALL_STATE(96)] = 2606,
  [SMALL_STATE(97)] = 2630,
  [SMALL_STATE(98)] = 2648,
  [SMALL_STATE(99)] = 2671,
  [SMALL_STATE(100)] = 2694,
  [SMALL_STATE(101)] = 2719,
  [SMALL_STATE(102)] = 2744,
  [SMALL_STATE(103)] = 2766,
  [SMALL_STATE(104)] = 2784,
  [SMALL_STATE(105)] = 2806,
  [SMALL_STATE(106)] = 2828,
  [SMALL_STATE(107)] = 2850,
  [SMALL_STATE(108)] = 2872,
  [SMALL_STATE(109)] = 2894,
  [SMALL_STATE(110)] = 2916,
  [SMALL_STATE(111)] = 2938,
  [SMALL_STATE(112)] = 2960,
  [SMALL_STATE(113)] = 2982,
  [SMALL_STATE(114)] = 3002,
  [SMALL_STATE(115)] = 3024,
  [SMALL_STATE(116)] = 3040,
  [SMALL_STATE(117)] = 3062,
  [SMALL_STATE(118)] = 3084,
  [SMALL_STATE(119)] = 3100,
  [SMALL_STATE(120)] = 3122,
  [SMALL_STATE(121)] = 3144,
  [SMALL_STATE(122)] = 3166,
  [SMALL_STATE(123)] = 3184,
  [SMALL_STATE(124)] = 3200,
  [SMALL_STATE(125)] = 3222,
  [SMALL_STATE(126)] = 3244,
  [SMALL_STATE(127)] = 3262,
  [SMALL_STATE(128)] = 3281,
  [SMALL_STATE(129)] = 3296,
  [SMALL_STATE(130)] = 3313,
  [SMALL_STATE(131)] = 3328,
  [SMALL_STATE(132)] = 3347,
  [SMALL_STATE(133)] = 3366,
  [SMALL_STATE(134)] = 3382,
  [SMALL_STATE(135)] = 3396,
  [SMALL_STATE(136)] = 3407,
  [SMALL_STATE(137)] = 3422,
  [SMALL_STATE(138)] = 3433,
  [SMALL_STATE(139)] = 3444,
  [SMALL_STATE(140)] = 3457,
  [SMALL_STATE(141)] = 3468,
  [SMALL_STATE(142)] = 3482,
  [SMALL_STATE(143)] = 3496,
  [SMALL_STATE(144)] = 3510,
  [SMALL_STATE(145)] = 3524,
  [SMALL_STATE(146)] = 3538,
  [SMALL_STATE(147)] = 3550,
  [SMALL_STATE(148)] = 3564,
  [SMALL_STATE(149)] = 3578,
  [SMALL_STATE(150)] = 3589,
  [SMALL_STATE(151)] = 3600,
  [SMALL_STATE(152)] = 3611,
  [SMALL_STATE(153)] = 3622,
  [SMALL_STATE(154)] = 3633,
  [SMALL_STATE(155)] = 3644,
  [SMALL_STATE(156)] = 3655,
  [SMALL_STATE(157)] = 3664,
  [SMALL_STATE(158)] = 3675,
  [SMALL_STATE(159)] = 3686,
  [SMALL_STATE(160)] = 3694,
  [SMALL_STATE(161)] = 3702,
  [SMALL_STATE(162)] = 3710,
  [SMALL_STATE(163)] = 3718,
  [SMALL_STATE(164)] = 3726,
  [SMALL_STATE(165)] = 3734,
  [SMALL_STATE(166)] = 3742,
  [SMALL_STATE(167)] = 3750,
  [SMALL_STATE(168)] = 3758,
  [SMALL_STATE(169)] = 3766,
  [SMALL_STATE(170)] = 3774,
  [SMALL_STATE(171)] = 3782,
  [SMALL_STATE(172)] = 3790,
  [SMALL_STATE(173)] = 3798,
  [SMALL_STATE(174)] = 3806,
  [SMALL_STATE(175)] = 3814,
  [SMALL_STATE(176)] = 3822,
  [SMALL_STATE(177)] = 3830,
  [SMALL_STATE(178)] = 3838,
  [SMALL_STATE(179)] = 3846,
  [SMALL_STATE(180)] = 3854,
  [SMALL_STATE(181)] = 3862,
  [SMALL_STATE(182)] = 3870,
  [SMALL_STATE(183)] = 3878,
  [SMALL_STATE(184)] = 3886,
  [SMALL_STATE(185)] = 3894,
  [SMALL_STATE(186)] = 3902,
  [SMALL_STATE(187)] = 3910,
  [SMALL_STATE(188)] = 3918,
  [SMALL_STATE(189)] = 3926,
  [SMALL_STATE(190)] = 3934,
  [SMALL_STATE(191)] = 3942,
  [SMALL_STATE(192)] = 3950,
  [SMALL_STATE(193)] = 3958,
  [SMALL_STATE(194)] = 3966,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classmembers, 1, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 12),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 20),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 22),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 23),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 9),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 7),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 8),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 14),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 19),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 11),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 6, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 7, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 22),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 11),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 7),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 14),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 15),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 16),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 17),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 18),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 19),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 21),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 20),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 11, 0, 23),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 10),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indirectmemberaccess1_repeat1, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveop, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indirectmemberaccess1_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 5, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [546] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 3, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gclass, 3, 0, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
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
