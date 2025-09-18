#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
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
  anon_sym_new = 27,
  sym_id = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_stringliteral_token1 = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_stringliteral_token2 = 32,
  sym_digit = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_QMARK_PLUS = 36,
  anon_sym_QMARK_DASH = 37,
  sym_comment = 38,
  sym_line_comment = 39,
  sym_semgrep_ellipsis = 40,
  sym_start = 41,
  sym_namespacestatement = 42,
  sym_usesstatement = 43,
  sym_modifiers = 44,
  sym_gclass = 45,
  sym_classbody = 46,
  sym_classmembers = 47,
  sym_declaration = 48,
  sym_fielddefn = 49,
  sym_functiondefn = 50,
  sym_statement_ = 51,
  sym_statement = 52,
  sym_localvarstatement = 53,
  sym_arguments = 54,
  sym_indirectmemberaccess1 = 55,
  sym_assignmentormethodcall = 56,
  sym_type = 57,
  sym_type_identifier = 58,
  sym_expression = 59,
  sym_additiveexpr = 60,
  sym_newexpr = 61,
  sym_stringliteral = 62,
  sym_additiveop = 63,
  aux_sym_start_repeat1 = 64,
  aux_sym_namespacestatement_repeat1 = 65,
  aux_sym_namespacestatement_repeat2 = 66,
  aux_sym_modifiers_repeat1 = 67,
  aux_sym_classmembers_repeat1 = 68,
  aux_sym_functiondefn_repeat1 = 69,
  aux_sym_arguments_repeat1 = 70,
  aux_sym_assignmentormethodcall_repeat1 = 71,
  alias_sym_pat_3a2a380 = 72,
  alias_sym_pat_dc28280 = 73,
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
  [anon_sym_new] = "new",
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
  [sym_arguments] = "arguments",
  [sym_indirectmemberaccess1] = "indirectmemberaccess1",
  [sym_assignmentormethodcall] = "assignmentormethodcall",
  [sym_type] = "type",
  [sym_type_identifier] = "type_identifier",
  [sym_expression] = "expression",
  [sym_additiveexpr] = "additiveexpr",
  [sym_newexpr] = "newexpr",
  [sym_stringliteral] = "stringliteral",
  [sym_additiveop] = "additiveop",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_namespacestatement_repeat1] = "namespacestatement_repeat1",
  [aux_sym_namespacestatement_repeat2] = "namespacestatement_repeat2",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_classmembers_repeat1] = "classmembers_repeat1",
  [aux_sym_functiondefn_repeat1] = "functiondefn_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_new] = anon_sym_new,
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
  [sym_arguments] = sym_arguments,
  [sym_indirectmemberaccess1] = sym_indirectmemberaccess1,
  [sym_assignmentormethodcall] = sym_assignmentormethodcall,
  [sym_type] = sym_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_expression] = sym_expression,
  [sym_additiveexpr] = sym_additiveexpr,
  [sym_newexpr] = sym_newexpr,
  [sym_stringliteral] = sym_stringliteral,
  [sym_additiveop] = sym_additiveop,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_namespacestatement_repeat1] = aux_sym_namespacestatement_repeat1,
  [aux_sym_namespacestatement_repeat2] = aux_sym_namespacestatement_repeat2,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_classmembers_repeat1] = aux_sym_classmembers_repeat1,
  [aux_sym_functiondefn_repeat1] = aux_sym_functiondefn_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [anon_sym_new] = {
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
  [sym_arguments] = {
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
  [sym_newexpr] = {
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
  [aux_sym_arguments_repeat1] = {
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
  [84] = 50,
  [85] = 7,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 5,
  [90] = 90,
  [91] = 52,
  [92] = 6,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 8,
  [99] = 99,
  [100] = 93,
  [101] = 101,
  [102] = 102,
  [103] = 103,
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
  [118] = 11,
  [119] = 112,
  [120] = 115,
  [121] = 9,
  [122] = 10,
  [123] = 12,
  [124] = 124,
  [125] = 117,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 94,
  [132] = 132,
  [133] = 97,
  [134] = 99,
  [135] = 95,
  [136] = 96,
  [137] = 38,
  [138] = 138,
  [139] = 39,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 130,
  [145] = 132,
  [146] = 129,
  [147] = 147,
  [148] = 147,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 138,
  [153] = 153,
  [154] = 150,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 142,
  [162] = 140,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 143,
  [189] = 189,
  [190] = 190,
  [191] = 173,
  [192] = 174,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 190,
  [199] = 195,
  [200] = 200,
  [201] = 175,
  [202] = 180,
  [203] = 196,
  [204] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '"', 237,
        '\'', 230,
        '(', 139,
        ')', 140,
        '*', 107,
        '+', 245,
        ',', 141,
        '-', 246,
        '.', 103,
        '/', 4,
        ':', 132,
        ';', 104,
        '=', 136,
        '?', 6,
        'a', 29,
        'c', 63,
        'f', 51,
        'i', 65,
        'n', 39,
        'o', 96,
        'p', 17,
        'r', 44,
        's', 89,
        't', 77,
        'u', 83,
        'v', 20,
        '{', 128,
        '}', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 139,
        '+', 245,
        '-', 246,
        '.', 103,
        '/', 4,
        ':', 132,
        ';', 104,
        '=', 136,
        '?', 6,
        'v', 146,
        '}', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(250);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(247);
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '.', 103,
        '/', 4,
        ';', 104,
        'a', 156,
        'c', 190,
        'f', 180,
        'i', 192,
        'o', 225,
        'p', 201,
        's', 217,
        't', 204,
        'u', 210,
        'v', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(251);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '.', 8,
        '/', 4,
        'a', 156,
        'c', 190,
        'f', 180,
        'i', 192,
        'o', 225,
        'p', 144,
        's', 217,
        't', 204,
        'u', 210,
        'v', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '.', 8,
        '/', 4,
        'a', 156,
        'c', 190,
        'f', 180,
        'i', 192,
        'o', 225,
        'p', 201,
        's', 217,
        't', 204,
        'v', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(249);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 99:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'w') ADVANCE(143);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(250);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(243);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(250);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
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
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 3},
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
    [anon_sym_new] = ACTIONS(1),
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
    [sym_start] = STATE(197),
    [sym_usesstatement] = STATE(4),
    [sym_modifiers] = STATE(90),
    [sym_gclass] = STATE(178),
    [sym_functiondefn] = STATE(178),
    [sym_statement_] = STATE(162),
    [sym_statement] = STATE(178),
    [sym_localvarstatement] = STATE(161),
    [sym_assignmentormethodcall] = STATE(161),
    [aux_sym_start_repeat1] = STATE(4),
    [aux_sym_modifiers_repeat1] = STATE(50),
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
    STATE(50), 1,
      aux_sym_modifiers_repeat1,
    STATE(88), 1,
      sym_modifiers,
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(3), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(172), 3,
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
    STATE(50), 1,
      aux_sym_modifiers_repeat1,
    STATE(87), 1,
      sym_modifiers,
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(193), 3,
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
    STATE(50), 1,
      aux_sym_modifiers_repeat1,
    STATE(86), 1,
      sym_modifiers,
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(194), 3,
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
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(21), 22,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [200] = 3,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(25), 22,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [232] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(29), 22,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [264] = 3,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(33), 21,
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
  [295] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(35), 21,
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
  [323] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(37), 21,
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
  [351] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(39), 21,
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
  [379] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(41), 21,
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
  [407] = 11,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_var,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(51), 1,
      sym_semgrep_ellipsis,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(167), 1,
      sym_modifiers,
    STATE(176), 1,
      sym_classmembers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(17), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(75), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(43), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [452] = 5,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(55), 13,
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
  [484] = 7,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_semgrep_ellipsis,
    STATE(21), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(35), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(63), 14,
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
  [520] = 5,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(69), 13,
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
  [552] = 10,
    ACTIONS(47), 1,
      anon_sym_var,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(51), 1,
      sym_semgrep_ellipsis,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(167), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(75), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(43), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [594] = 10,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_var,
    ACTIONS(81), 1,
      anon_sym_function,
    ACTIONS(84), 1,
      sym_semgrep_ellipsis,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(167), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(75), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(73), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [636] = 7,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      sym_semgrep_ellipsis,
    STATE(31), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 14,
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
  [672] = 7,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      sym_semgrep_ellipsis,
    STATE(19), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(97), 14,
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
  [708] = 7,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym_semgrep_ellipsis,
    STATE(31), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(46), 1,
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
  [744] = 5,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(111), 13,
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
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
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
  [808] = 5,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(119), 13,
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
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(123), 13,
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
  [872] = 5,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(127), 13,
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
  [904] = 5,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(131), 13,
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
  [936] = 5,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(135), 13,
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
  [968] = 5,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(139), 13,
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
  [1000] = 5,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(143), 13,
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
  [1032] = 5,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_namespacestatement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(150), 14,
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
  [1063] = 5,
    ACTIONS(152), 1,
      anon_sym_uses,
    ACTIONS(157), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    ACTIONS(155), 13,
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
  [1093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(150), 15,
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
  [1119] = 5,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      sym_semgrep_ellipsis,
    STATE(41), 1,
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
  [1149] = 5,
    ACTIONS(107), 1,
      sym_semgrep_ellipsis,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    STATE(41), 1,
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
  [1179] = 5,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      sym_semgrep_ellipsis,
    STATE(41), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(165), 14,
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
  [1209] = 6,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_as,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(171), 13,
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
  [1241] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(179), 17,
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
  [1265] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(181), 17,
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
  [1289] = 5,
    ACTIONS(93), 1,
      sym_semgrep_ellipsis,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 14,
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
  [1319] = 5,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      sym_semgrep_ellipsis,
    STATE(41), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(186), 14,
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
  [1349] = 5,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      sym_semgrep_ellipsis,
    STATE(36), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(192), 14,
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
  [1379] = 6,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      anon_sym_as,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(198), 13,
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
  [1411] = 5,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      sym_semgrep_ellipsis,
    STATE(45), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(208), 14,
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
  [1441] = 5,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      sym_semgrep_ellipsis,
    STATE(41), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(192), 14,
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
  [1471] = 5,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      sym_semgrep_ellipsis,
    STATE(41), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(208), 14,
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
  [1501] = 5,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(214), 13,
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
  [1530] = 5,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      anon_sym_as,
    ACTIONS(226), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(222), 13,
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
  [1559] = 4,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(230), 13,
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
  [1585] = 5,
    ACTIONS(238), 1,
      sym_semgrep_ellipsis,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(236), 4,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
    ACTIONS(234), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1613] = 4,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(242), 13,
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
  [1639] = 5,
    ACTIONS(251), 1,
      sym_semgrep_ellipsis,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(249), 4,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      sym_id,
    ACTIONS(246), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1667] = 4,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_EQ,
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
  [1693] = 4,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(261), 13,
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
  [1719] = 4,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_EQ,
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
  [1745] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(271), 14,
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
  [1769] = 4,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      anon_sym_EQ,
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
  [1795] = 4,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_EQ,
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
  [1821] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(287), 14,
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
  [1842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(289), 14,
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
  [1863] = 2,
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
  [1883] = 2,
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
  [1903] = 2,
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
  [1923] = 2,
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
  [1943] = 2,
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
  [1963] = 2,
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
  [1983] = 2,
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
  [2003] = 2,
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
  [2023] = 2,
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
  [2043] = 2,
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
  [2063] = 2,
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
  [2083] = 2,
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
  [2103] = 2,
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
  [2123] = 2,
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
  [2143] = 2,
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
  [2163] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(321), 13,
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
  [2183] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(323), 13,
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
  [2203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(325), 13,
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
  [2223] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(327), 13,
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
  [2243] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(171), 13,
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
  [2263] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(329), 13,
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
  [2283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(331), 13,
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
  [2303] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(333), 13,
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
  [2323] = 4,
    ACTIONS(238), 1,
      anon_sym_var,
    STATE(91), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(335), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2345] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(31), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(29), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2365] = 9,
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
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(172), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2397] = 9,
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
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(171), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2429] = 9,
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
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(193), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(23), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(21), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2481] = 9,
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
    STATE(162), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(161), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(194), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2513] = 4,
    ACTIONS(251), 1,
      anon_sym_var,
    STATE(91), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(337), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(27), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(25), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2555] = 9,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(127), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2586] = 7,
    ACTIONS(352), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(356), 2,
      anon_sym_var,
      sym_id,
    STATE(95), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(354), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2613] = 7,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(365), 2,
      anon_sym_var,
      sym_id,
    STATE(95), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(363), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2640] = 5,
    STATE(119), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(370), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2663] = 7,
    ACTIONS(352), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(376), 2,
      anon_sym_var,
      sym_id,
    STATE(94), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(374), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [2690] = 4,
    STATE(119), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(33), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2711] = 5,
    STATE(119), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(380), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2734] = 9,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2765] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2793] = 8,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      anon_sym_var,
    ACTIONS(390), 1,
      sym_id,
    ACTIONS(392), 1,
      sym_semgrep_ellipsis,
    STATE(140), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(103), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(142), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2821] = 8,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      anon_sym_var,
    ACTIONS(399), 1,
      sym_id,
    ACTIONS(402), 1,
      sym_semgrep_ellipsis,
    STATE(140), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(103), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(142), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2849] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(24), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2877] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(16), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2905] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(26), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2933] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(25), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2961] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(27), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [2989] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(28), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3017] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3045] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(128), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3073] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(8), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3101] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(30), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3129] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(14), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3157] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(134), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3185] = 8,
    ACTIONS(388), 1,
      anon_sym_var,
    ACTIONS(390), 1,
      sym_id,
    ACTIONS(392), 1,
      sym_semgrep_ellipsis,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(102), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(142), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [3213] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(136), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3241] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(407), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(39), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3259] = 8,
    ACTIONS(409), 1,
      anon_sym_new,
    ACTIONS(411), 1,
      sym_id,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_semgrep_ellipsis,
    STATE(98), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(118), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3287] = 8,
    ACTIONS(409), 1,
      anon_sym_new,
    ACTIONS(411), 1,
      sym_id,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_semgrep_ellipsis,
    STATE(99), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(118), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3315] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(419), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(35), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3333] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(421), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(37), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(423), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(41), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3369] = 8,
    ACTIONS(342), 1,
      anon_sym_new,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_semgrep_ellipsis,
    STATE(22), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(11), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3397] = 8,
    ACTIONS(409), 1,
      anon_sym_new,
    ACTIONS(411), 1,
      sym_id,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_semgrep_ellipsis,
    STATE(96), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(118), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3425] = 6,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_additiveop,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3448] = 6,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_additiveop,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3471] = 4,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3489] = 5,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(435), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(433), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3509] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(443), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3525] = 6,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(135), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(449), 3,
      anon_sym_DOT,
      anon_sym_var,
      sym_id,
    ACTIONS(451), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3563] = 6,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(131), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3585] = 4,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3603] = 6,
    ACTIONS(453), 1,
      anon_sym_DOT,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(135), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3625] = 4,
    STATE(112), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3643] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(459), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(179), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [3658] = 4,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(463), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(461), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3675] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(467), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(181), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [3690] = 4,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(471), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(473), 2,
      anon_sym_var,
      sym_id,
  [3706] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(475), 2,
      anon_sym_new,
      sym_id,
    ACTIONS(477), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_semgrep_ellipsis,
  [3720] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(481), 2,
      anon_sym_var,
      sym_id,
    ACTIONS(479), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
  [3734] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(483), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(485), 2,
      anon_sym_var,
      sym_id,
  [3747] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(443), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3758] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(451), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3769] = 4,
    ACTIONS(487), 1,
      anon_sym_COLON,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3784] = 4,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3798] = 4,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3812] = 4,
    ACTIONS(495), 1,
      sym_id,
    STATE(39), 1,
      sym_type_identifier,
    STATE(47), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3826] = 4,
    ACTIONS(495), 1,
      sym_id,
    STATE(39), 1,
      sym_type_identifier,
    STATE(152), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3840] = 4,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3854] = 3,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3866] = 4,
    ACTIONS(495), 1,
      sym_id,
    STATE(39), 1,
      sym_type_identifier,
    STATE(48), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3880] = 4,
    ACTIONS(502), 1,
      sym_id,
    STATE(138), 1,
      sym_type,
    STATE(139), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3894] = 3,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3905] = 3,
    ACTIONS(508), 1,
      anon_sym_readonly,
    ACTIONS(510), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3916] = 3,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_classbody,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3927] = 3,
    ACTIONS(514), 1,
      sym_id,
    STATE(2), 1,
      sym_namespacestatement,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3938] = 3,
    ACTIONS(516), 1,
      anon_sym_readonly,
    ACTIONS(518), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3949] = 3,
    ACTIONS(506), 1,
      sym_id,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3960] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3969] = 3,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3980] = 3,
    ACTIONS(524), 1,
      anon_sym_readonly,
    ACTIONS(526), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3991] = 3,
    ACTIONS(528), 1,
      anon_sym_readonly,
    ACTIONS(530), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4002] = 3,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4013] = 3,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4024] = 2,
    ACTIONS(532), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4032] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4040] = 2,
    ACTIONS(536), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4048] = 2,
    ACTIONS(538), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4056] = 2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4064] = 2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4072] = 2,
    ACTIONS(544), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4080] = 2,
    ACTIONS(546), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4088] = 2,
    ACTIONS(548), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4096] = 2,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4104] = 2,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4112] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4120] = 2,
    ACTIONS(506), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4128] = 2,
    ACTIONS(556), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(558), 2,
      sym_comment,
      sym_line_comment,
  [4136] = 2,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4144] = 2,
    ACTIONS(562), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4152] = 2,
    ACTIONS(564), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4160] = 2,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4168] = 2,
    ACTIONS(568), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4176] = 2,
    ACTIONS(570), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4184] = 2,
    ACTIONS(572), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4192] = 2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4200] = 2,
    ACTIONS(574), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4208] = 2,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4216] = 2,
    ACTIONS(578), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4224] = 2,
    ACTIONS(580), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4232] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4240] = 2,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4248] = 2,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4256] = 2,
    ACTIONS(588), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(558), 2,
      sym_comment,
      sym_line_comment,
  [4264] = 2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4272] = 2,
    ACTIONS(592), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4280] = 2,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4288] = 2,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4296] = 2,
    ACTIONS(598), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4304] = 2,
    ACTIONS(600), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(558), 2,
      sym_comment,
      sym_line_comment,
  [4312] = 2,
    ACTIONS(602), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(558), 2,
      sym_comment,
      sym_line_comment,
  [4320] = 2,
    ACTIONS(604), 1,
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
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 323,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 552,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 636,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 708,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 872,
  [SMALL_STATE(27)] = 904,
  [SMALL_STATE(28)] = 936,
  [SMALL_STATE(29)] = 968,
  [SMALL_STATE(30)] = 1000,
  [SMALL_STATE(31)] = 1032,
  [SMALL_STATE(32)] = 1063,
  [SMALL_STATE(33)] = 1093,
  [SMALL_STATE(34)] = 1119,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1179,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1241,
  [SMALL_STATE(39)] = 1265,
  [SMALL_STATE(40)] = 1289,
  [SMALL_STATE(41)] = 1319,
  [SMALL_STATE(42)] = 1349,
  [SMALL_STATE(43)] = 1379,
  [SMALL_STATE(44)] = 1411,
  [SMALL_STATE(45)] = 1441,
  [SMALL_STATE(46)] = 1471,
  [SMALL_STATE(47)] = 1501,
  [SMALL_STATE(48)] = 1530,
  [SMALL_STATE(49)] = 1559,
  [SMALL_STATE(50)] = 1585,
  [SMALL_STATE(51)] = 1613,
  [SMALL_STATE(52)] = 1639,
  [SMALL_STATE(53)] = 1667,
  [SMALL_STATE(54)] = 1693,
  [SMALL_STATE(55)] = 1719,
  [SMALL_STATE(56)] = 1745,
  [SMALL_STATE(57)] = 1769,
  [SMALL_STATE(58)] = 1795,
  [SMALL_STATE(59)] = 1821,
  [SMALL_STATE(60)] = 1842,
  [SMALL_STATE(61)] = 1863,
  [SMALL_STATE(62)] = 1883,
  [SMALL_STATE(63)] = 1903,
  [SMALL_STATE(64)] = 1923,
  [SMALL_STATE(65)] = 1943,
  [SMALL_STATE(66)] = 1963,
  [SMALL_STATE(67)] = 1983,
  [SMALL_STATE(68)] = 2003,
  [SMALL_STATE(69)] = 2023,
  [SMALL_STATE(70)] = 2043,
  [SMALL_STATE(71)] = 2063,
  [SMALL_STATE(72)] = 2083,
  [SMALL_STATE(73)] = 2103,
  [SMALL_STATE(74)] = 2123,
  [SMALL_STATE(75)] = 2143,
  [SMALL_STATE(76)] = 2163,
  [SMALL_STATE(77)] = 2183,
  [SMALL_STATE(78)] = 2203,
  [SMALL_STATE(79)] = 2223,
  [SMALL_STATE(80)] = 2243,
  [SMALL_STATE(81)] = 2263,
  [SMALL_STATE(82)] = 2283,
  [SMALL_STATE(83)] = 2303,
  [SMALL_STATE(84)] = 2323,
  [SMALL_STATE(85)] = 2345,
  [SMALL_STATE(86)] = 2365,
  [SMALL_STATE(87)] = 2397,
  [SMALL_STATE(88)] = 2429,
  [SMALL_STATE(89)] = 2461,
  [SMALL_STATE(90)] = 2481,
  [SMALL_STATE(91)] = 2513,
  [SMALL_STATE(92)] = 2535,
  [SMALL_STATE(93)] = 2555,
  [SMALL_STATE(94)] = 2586,
  [SMALL_STATE(95)] = 2613,
  [SMALL_STATE(96)] = 2640,
  [SMALL_STATE(97)] = 2663,
  [SMALL_STATE(98)] = 2690,
  [SMALL_STATE(99)] = 2711,
  [SMALL_STATE(100)] = 2734,
  [SMALL_STATE(101)] = 2765,
  [SMALL_STATE(102)] = 2793,
  [SMALL_STATE(103)] = 2821,
  [SMALL_STATE(104)] = 2849,
  [SMALL_STATE(105)] = 2877,
  [SMALL_STATE(106)] = 2905,
  [SMALL_STATE(107)] = 2933,
  [SMALL_STATE(108)] = 2961,
  [SMALL_STATE(109)] = 2989,
  [SMALL_STATE(110)] = 3017,
  [SMALL_STATE(111)] = 3045,
  [SMALL_STATE(112)] = 3073,
  [SMALL_STATE(113)] = 3101,
  [SMALL_STATE(114)] = 3129,
  [SMALL_STATE(115)] = 3157,
  [SMALL_STATE(116)] = 3185,
  [SMALL_STATE(117)] = 3213,
  [SMALL_STATE(118)] = 3241,
  [SMALL_STATE(119)] = 3259,
  [SMALL_STATE(120)] = 3287,
  [SMALL_STATE(121)] = 3315,
  [SMALL_STATE(122)] = 3333,
  [SMALL_STATE(123)] = 3351,
  [SMALL_STATE(124)] = 3369,
  [SMALL_STATE(125)] = 3397,
  [SMALL_STATE(126)] = 3425,
  [SMALL_STATE(127)] = 3448,
  [SMALL_STATE(128)] = 3471,
  [SMALL_STATE(129)] = 3489,
  [SMALL_STATE(130)] = 3509,
  [SMALL_STATE(131)] = 3525,
  [SMALL_STATE(132)] = 3547,
  [SMALL_STATE(133)] = 3563,
  [SMALL_STATE(134)] = 3585,
  [SMALL_STATE(135)] = 3603,
  [SMALL_STATE(136)] = 3625,
  [SMALL_STATE(137)] = 3643,
  [SMALL_STATE(138)] = 3658,
  [SMALL_STATE(139)] = 3675,
  [SMALL_STATE(140)] = 3690,
  [SMALL_STATE(141)] = 3706,
  [SMALL_STATE(142)] = 3720,
  [SMALL_STATE(143)] = 3734,
  [SMALL_STATE(144)] = 3747,
  [SMALL_STATE(145)] = 3758,
  [SMALL_STATE(146)] = 3769,
  [SMALL_STATE(147)] = 3784,
  [SMALL_STATE(148)] = 3798,
  [SMALL_STATE(149)] = 3812,
  [SMALL_STATE(150)] = 3826,
  [SMALL_STATE(151)] = 3840,
  [SMALL_STATE(152)] = 3854,
  [SMALL_STATE(153)] = 3866,
  [SMALL_STATE(154)] = 3880,
  [SMALL_STATE(155)] = 3894,
  [SMALL_STATE(156)] = 3905,
  [SMALL_STATE(157)] = 3916,
  [SMALL_STATE(158)] = 3927,
  [SMALL_STATE(159)] = 3938,
  [SMALL_STATE(160)] = 3949,
  [SMALL_STATE(161)] = 3960,
  [SMALL_STATE(162)] = 3969,
  [SMALL_STATE(163)] = 3980,
  [SMALL_STATE(164)] = 3991,
  [SMALL_STATE(165)] = 4002,
  [SMALL_STATE(166)] = 4013,
  [SMALL_STATE(167)] = 4024,
  [SMALL_STATE(168)] = 4032,
  [SMALL_STATE(169)] = 4040,
  [SMALL_STATE(170)] = 4048,
  [SMALL_STATE(171)] = 4056,
  [SMALL_STATE(172)] = 4064,
  [SMALL_STATE(173)] = 4072,
  [SMALL_STATE(174)] = 4080,
  [SMALL_STATE(175)] = 4088,
  [SMALL_STATE(176)] = 4096,
  [SMALL_STATE(177)] = 4104,
  [SMALL_STATE(178)] = 4112,
  [SMALL_STATE(179)] = 4120,
  [SMALL_STATE(180)] = 4128,
  [SMALL_STATE(181)] = 4136,
  [SMALL_STATE(182)] = 4144,
  [SMALL_STATE(183)] = 4152,
  [SMALL_STATE(184)] = 4160,
  [SMALL_STATE(185)] = 4168,
  [SMALL_STATE(186)] = 4176,
  [SMALL_STATE(187)] = 4184,
  [SMALL_STATE(188)] = 4192,
  [SMALL_STATE(189)] = 4200,
  [SMALL_STATE(190)] = 4208,
  [SMALL_STATE(191)] = 4216,
  [SMALL_STATE(192)] = 4224,
  [SMALL_STATE(193)] = 4232,
  [SMALL_STATE(194)] = 4240,
  [SMALL_STATE(195)] = 4248,
  [SMALL_STATE(196)] = 4256,
  [SMALL_STATE(197)] = 4264,
  [SMALL_STATE(198)] = 4272,
  [SMALL_STATE(199)] = 4280,
  [SMALL_STATE(200)] = 4288,
  [SMALL_STATE(201)] = 4296,
  [SMALL_STATE(202)] = 4304,
  [SMALL_STATE(203)] = 4312,
  [SMALL_STATE(204)] = 4320,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newexpr, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classmembers, 1, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 15),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 22),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0), SHIFT_REPEAT(41),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 9),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 8),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 7),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 16),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 19),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 14),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 11),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 7, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 6, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 20),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 11, 0, 23),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 10),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 11),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 6),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 12),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 7),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 13),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 14),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 15),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 16),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 17),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 18),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 19),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 8),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 21),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 9),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 22),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newexpr, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveop, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveop, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gclass, 3, 0, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 5, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 3, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
