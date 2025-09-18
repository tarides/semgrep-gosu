#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 207
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 5,
  [91] = 6,
  [92] = 7,
  [93] = 8,
  [94] = 94,
  [95] = 51,
  [96] = 96,
  [97] = 52,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 9,
  [104] = 104,
  [105] = 12,
  [106] = 106,
  [107] = 106,
  [108] = 10,
  [109] = 11,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 113,
  [122] = 117,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 131,
  [133] = 100,
  [134] = 47,
  [135] = 45,
  [136] = 101,
  [137] = 96,
  [138] = 138,
  [139] = 139,
  [140] = 104,
  [141] = 94,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 129,
  [147] = 128,
  [148] = 130,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 138,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 149,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 166,
  [167] = 143,
  [168] = 142,
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
  [181] = 169,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 144,
  [193] = 185,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 171,
  [201] = 172,
  [202] = 202,
  [203] = 183,
  [204] = 188,
  [205] = 189,
  [206] = 206,
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
        'a', 28,
        'c', 62,
        'f', 50,
        'i', 64,
        'n', 38,
        'o', 95,
        'p', 16,
        'r', 43,
        's', 88,
        't', 76,
        'u', 82,
        'v', 19,
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
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(166);
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
        'n', 166,
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
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(247);
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(251);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '.', 7,
        '/', 4,
        'a', 156,
        'c', 190,
        'f', 180,
        'i', 192,
        'n', 166,
        'o', 225,
        'p', 144,
        's', 217,
        't', 204,
        'u', 210,
        'v', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '.', 7,
        '/', 4,
        'a', 156,
        'c', 190,
        'f', 180,
        'i', 192,
        'n', 166,
        'o', 225,
        'p', 201,
        's', 217,
        't', 204,
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
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'v') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(249);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 97:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 98:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '.', 103,
        '/', 4,
        ';', 104,
        'a', 156,
        'c', 190,
        'f', 180,
        'i', 192,
        'n', 166,
        'o', 225,
        'p', 201,
        's', 217,
        't', 204,
        'u', 210,
        'v', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
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
      if (lookahead == '.') ADVANCE(8);
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
      if (lookahead == 'a') ADVANCE(222);
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
      if (lookahead == 'd') ADVANCE(169);
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
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(121);
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
      if (lookahead == 'g') ADVANCE(167);
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
      if (lookahead == 'n') ADVANCE(223);
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
      if (lookahead == 't') ADVANCE(168);
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
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(172);
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
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 99},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 99},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 99},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 99},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 99},
  [40] = {.lex_state = 99},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 99},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 99},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
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
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 11},
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
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 3},
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
    [sym_start] = STATE(202),
    [sym_usesstatement] = STATE(2),
    [sym_modifiers] = STATE(69),
    [sym_gclass] = STATE(190),
    [sym_functiondefn] = STATE(190),
    [sym_statement_] = STATE(167),
    [sym_statement] = STATE(190),
    [sym_localvarstatement] = STATE(168),
    [sym_assignmentormethodcall] = STATE(168),
    [sym_newexpr] = STATE(140),
    [aux_sym_start_repeat1] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(51),
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
    [anon_sym_new] = ACTIONS(17),
    [sym_id] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_semgrep_ellipsis] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(21), 1,
      sym_semgrep_ellipsis,
    STATE(51), 1,
      aux_sym_modifiers_repeat1,
    STATE(74), 1,
      sym_modifiers,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(43), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(191), 3,
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
  [62] = 16,
    ACTIONS(7), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(21), 1,
      sym_semgrep_ellipsis,
    STATE(51), 1,
      aux_sym_modifiers_repeat1,
    STATE(67), 1,
      sym_modifiers,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(4), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(177), 3,
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
  [124] = 16,
    ACTIONS(7), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(21), 1,
      sym_semgrep_ellipsis,
    STATE(51), 1,
      aux_sym_modifiers_repeat1,
    STATE(63), 1,
      sym_modifiers,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(43), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(197), 3,
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
  [186] = 3,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(23), 22,
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
  [218] = 3,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(27), 22,
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
  [250] = 3,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(31), 22,
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
  [282] = 3,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(35), 22,
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
  [314] = 3,
    STATE(113), 1,
      sym_additiveop,
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
  [345] = 2,
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
  [373] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 21,
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
  [401] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(45), 21,
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
  [429] = 7,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      sym_semgrep_ellipsis,
    STATE(19), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(37), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(51), 15,
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
      anon_sym_new,
      sym_id,
  [466] = 7,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_semgrep_ellipsis,
    STATE(13), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(41), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 15,
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
      anon_sym_new,
      sym_id,
  [503] = 11,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_var,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      sym_semgrep_ellipsis,
    STATE(95), 1,
      aux_sym_modifiers_repeat1,
    STATE(179), 1,
      sym_modifiers,
    STATE(187), 1,
      sym_classmembers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(21), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(85), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(61), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [548] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym_semgrep_ellipsis,
    STATE(19), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(75), 15,
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
      anon_sym_new,
      sym_id,
  [585] = 7,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      sym_semgrep_ellipsis,
    STATE(16), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(34), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(83), 15,
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
      anon_sym_new,
      sym_id,
  [622] = 5,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
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
  [654] = 5,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_namespacestatement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(98), 15,
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
      anon_sym_new,
      sym_id,
  [686] = 5,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(102), 13,
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
  [718] = 10,
    ACTIONS(65), 1,
      anon_sym_var,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      sym_semgrep_ellipsis,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_modifiers_repeat1,
    STATE(179), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(26), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(85), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(61), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [760] = 5,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(108), 13,
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
    ACTIONS(110), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(112), 13,
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
  [824] = 5,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(116), 13,
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
  [856] = 5,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(120), 13,
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
  [888] = 10,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_var,
    ACTIONS(130), 1,
      anon_sym_function,
    ACTIONS(133), 1,
      sym_semgrep_ellipsis,
    STATE(95), 1,
      aux_sym_modifiers_repeat1,
    STATE(179), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(26), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(85), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(122), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [930] = 5,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(138), 13,
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
  [962] = 5,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(142), 13,
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
  [994] = 5,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(146), 13,
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
  [1026] = 5,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(150), 13,
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
  [1058] = 5,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(154), 13,
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
  [1090] = 5,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      sym_semgrep_ellipsis,
    STATE(42), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(158), 15,
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
      anon_sym_new,
      sym_id,
  [1121] = 4,
    ACTIONS(166), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(164), 15,
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
      anon_sym_new,
      sym_id,
  [1150] = 5,
    ACTIONS(77), 1,
      sym_semgrep_ellipsis,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(75), 15,
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
      anon_sym_new,
      sym_id,
  [1181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(98), 16,
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
      anon_sym_new,
      sym_id,
  [1208] = 5,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      sym_semgrep_ellipsis,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(170), 15,
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
      anon_sym_new,
      sym_id,
  [1239] = 5,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym_semgrep_ellipsis,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(174), 15,
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
      anon_sym_new,
      sym_id,
  [1270] = 5,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(183), 1,
      sym_semgrep_ellipsis,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(181), 15,
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
      anon_sym_new,
      sym_id,
  [1301] = 5,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      sym_semgrep_ellipsis,
    STATE(36), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(187), 15,
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
      anon_sym_new,
      sym_id,
  [1332] = 5,
    ACTIONS(160), 1,
      sym_semgrep_ellipsis,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(158), 15,
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
      anon_sym_new,
      sym_id,
  [1363] = 5,
    ACTIONS(53), 1,
      sym_semgrep_ellipsis,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(51), 15,
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
      anon_sym_new,
      sym_id,
  [1394] = 5,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      sym_semgrep_ellipsis,
    STATE(38), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(187), 15,
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
      anon_sym_new,
      sym_id,
  [1425] = 5,
    ACTIONS(191), 1,
      anon_sym_uses,
    ACTIONS(196), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(43), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    ACTIONS(194), 14,
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
      anon_sym_new,
      sym_id,
  [1456] = 6,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(205), 1,
      anon_sym_as,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(201), 13,
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
  [1488] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(209), 17,
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
  [1512] = 6,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      anon_sym_as,
    ACTIONS(219), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(213), 13,
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
  [1544] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(221), 17,
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
  [1568] = 3,
    ACTIONS(166), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(164), 15,
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
      anon_sym_new,
      sym_id,
  [1593] = 5,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      anon_sym_as,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(225), 13,
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
  [1622] = 5,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      anon_sym_as,
    ACTIONS(237), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(233), 13,
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
  [1651] = 5,
    ACTIONS(243), 1,
      sym_semgrep_ellipsis,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(241), 5,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      anon_sym_new,
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
  [1680] = 5,
    ACTIONS(250), 1,
      sym_semgrep_ellipsis,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(248), 5,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      anon_sym_new,
      sym_id,
    ACTIONS(245), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1709] = 4,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(254), 13,
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
  [1735] = 4,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(260), 13,
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
  [1761] = 4,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(266), 13,
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
  [1787] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(270), 14,
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
  [1811] = 4,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(276), 13,
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
  [1837] = 4,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(282), 13,
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
  [1863] = 4,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(288), 13,
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
  [1889] = 4,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(294), 13,
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
  [1915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(298), 14,
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
  [1936] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(300), 14,
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
  [1957] = 11,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(302), 1,
      sym_semgrep_ellipsis,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(180), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [1995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(201), 13,
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
  [2015] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(304), 13,
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
  [2035] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(306), 13,
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
  [2055] = 11,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(302), 1,
      sym_semgrep_ellipsis,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(197), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2093] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(308), 13,
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
  [2113] = 11,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(302), 1,
      sym_semgrep_ellipsis,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(191), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2151] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(310), 13,
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
  [2171] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(312), 13,
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
  [2191] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(314), 13,
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
  [2211] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(316), 13,
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
  [2231] = 11,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(19), 1,
      sym_id,
    ACTIONS(302), 1,
      sym_semgrep_ellipsis,
    STATE(140), 1,
      sym_newexpr,
    STATE(167), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(168), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(177), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(318), 13,
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
  [2289] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(320), 13,
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
  [2309] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(322), 13,
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
  [2329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(324), 13,
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
  [2349] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(326), 13,
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
  [2369] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(328), 13,
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
  [2389] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(330), 13,
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
  [2409] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(332), 13,
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
  [2429] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(334), 13,
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
  [2449] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(336), 13,
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
  [2469] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(338), 13,
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
  [2489] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(340), 13,
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
  [2509] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(342), 13,
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
  [2529] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(344), 13,
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
  [2549] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(346), 13,
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
  [2569] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(25), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(23), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2590] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(29), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2611] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(33), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(31), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2632] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(37), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(35), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2653] = 7,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(100), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(350), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(352), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [2681] = 4,
    ACTIONS(243), 1,
      anon_sym_var,
    STATE(97), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(356), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2703] = 5,
    STATE(121), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(358), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(360), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2727] = 4,
    ACTIONS(250), 1,
      anon_sym_var,
    STATE(97), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(362), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [2749] = 10,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      anon_sym_var,
    ACTIONS(370), 1,
      anon_sym_new,
    ACTIONS(373), 1,
      sym_id,
    ACTIONS(376), 1,
      sym_semgrep_ellipsis,
    STATE(104), 1,
      sym_newexpr,
    STATE(143), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(98), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(142), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2783] = 10,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_var,
    ACTIONS(383), 1,
      anon_sym_new,
    ACTIONS(385), 1,
      sym_id,
    ACTIONS(387), 1,
      sym_semgrep_ellipsis,
    STATE(104), 1,
      sym_newexpr,
    STATE(143), 1,
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
  [2817] = 7,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(100), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(392), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(394), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [2845] = 5,
    STATE(121), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(399), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(401), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [2869] = 10,
    ACTIONS(381), 1,
      anon_sym_var,
    ACTIONS(383), 1,
      anon_sym_new,
    ACTIONS(385), 1,
      sym_id,
    ACTIONS(387), 1,
      sym_semgrep_ellipsis,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_newexpr,
    STATE(143), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(98), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(142), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [2903] = 4,
    STATE(121), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(405), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(39), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2925] = 7,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(94), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(407), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(409), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [2953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(411), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(45), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2972] = 9,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(132), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3003] = 9,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3034] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(425), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(41), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3053] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(427), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(43), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3072] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(31), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3100] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(139), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3128] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(22), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3156] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(9), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3184] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(25), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3212] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(30), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3240] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(27), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3268] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(137), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3296] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3324] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(24), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3352] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(28), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3380] = 8,
    ACTIONS(383), 1,
      anon_sym_new,
    ACTIONS(429), 1,
      sym_id,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_semgrep_ellipsis,
    STATE(103), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(108), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3408] = 8,
    ACTIONS(383), 1,
      anon_sym_new,
    ACTIONS(429), 1,
      sym_id,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_semgrep_ellipsis,
    STATE(96), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(108), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3436] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(20), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3464] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(18), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3492] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(136), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3520] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_semgrep_ellipsis,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(10), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3548] = 8,
    ACTIONS(383), 1,
      anon_sym_new,
    ACTIONS(429), 1,
      sym_id,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_semgrep_ellipsis,
    STATE(101), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(108), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(437), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(439), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3593] = 5,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(443), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(449), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(451), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_semgrep_ellipsis,
  [3631] = 6,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      sym_additiveop,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3654] = 6,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_additiveop,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3677] = 6,
    ACTIONS(459), 1,
      anon_sym_DOT,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(133), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3699] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(465), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(221), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [3715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(467), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(209), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [3731] = 4,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3749] = 4,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3767] = 4,
    ACTIONS(473), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(469), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(471), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3785] = 4,
    STATE(113), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(475), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(91), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3803] = 6,
    ACTIONS(477), 1,
      anon_sym_DOT,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(141), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3825] = 6,
    ACTIONS(477), 1,
      anon_sym_DOT,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(133), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [3847] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(481), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3862] = 4,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(485), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(487), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3879] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(489), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(491), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3893] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(493), 2,
      anon_sym_new,
      sym_id,
    ACTIONS(495), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_semgrep_ellipsis,
  [3907] = 4,
    ACTIONS(497), 1,
      anon_sym_COLON,
    ACTIONS(499), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(439), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(451), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [3944] = 4,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3958] = 4,
    ACTIONS(503), 1,
      sym_id,
    STATE(45), 1,
      sym_type_identifier,
    STATE(49), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3972] = 4,
    ACTIONS(503), 1,
      sym_id,
    STATE(45), 1,
      sym_type_identifier,
    STATE(50), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [3986] = 3,
    ACTIONS(505), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3998] = 4,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4012] = 4,
    ACTIONS(503), 1,
      sym_id,
    STATE(45), 1,
      sym_type_identifier,
    STATE(152), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4026] = 4,
    ACTIONS(510), 1,
      sym_id,
    STATE(135), 1,
      sym_type_identifier,
    STATE(138), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4040] = 4,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4054] = 3,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4065] = 3,
    ACTIONS(518), 1,
      anon_sym_readonly,
    ACTIONS(520), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4076] = 3,
    ACTIONS(522), 1,
      anon_sym_readonly,
    ACTIONS(524), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4087] = 3,
    ACTIONS(516), 1,
      sym_id,
    ACTIONS(526), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4098] = 3,
    ACTIONS(528), 1,
      sym_id,
    STATE(3), 1,
      sym_namespacestatement,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4109] = 3,
    ACTIONS(530), 1,
      anon_sym_readonly,
    ACTIONS(532), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4120] = 3,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_classbody,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4131] = 3,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4142] = 3,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4153] = 3,
    ACTIONS(536), 1,
      anon_sym_readonly,
    ACTIONS(538), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4164] = 3,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4175] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [4184] = 2,
    ACTIONS(542), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4192] = 2,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4200] = 2,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4208] = 2,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4216] = 2,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4224] = 2,
    ACTIONS(552), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4232] = 2,
    ACTIONS(554), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4240] = 2,
    ACTIONS(556), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4248] = 2,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4256] = 2,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4264] = 2,
    ACTIONS(562), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4272] = 2,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4280] = 2,
    ACTIONS(566), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4288] = 2,
    ACTIONS(568), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4296] = 2,
    ACTIONS(570), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4304] = 2,
    ACTIONS(572), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4312] = 2,
    ACTIONS(574), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4320] = 2,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4328] = 2,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4336] = 2,
    ACTIONS(580), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(582), 2,
      sym_comment,
      sym_line_comment,
  [4344] = 2,
    ACTIONS(584), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(582), 2,
      sym_comment,
      sym_line_comment,
  [4352] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4360] = 2,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4368] = 2,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4376] = 2,
    ACTIONS(590), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4384] = 2,
    ACTIONS(592), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4392] = 2,
    ACTIONS(516), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4400] = 2,
    ACTIONS(594), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4408] = 2,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4416] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4424] = 2,
    ACTIONS(600), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4432] = 2,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4440] = 2,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4448] = 2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4456] = 2,
    ACTIONS(608), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4464] = 2,
    ACTIONS(610), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(582), 2,
      sym_comment,
      sym_line_comment,
  [4472] = 2,
    ACTIONS(612), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(582), 2,
      sym_comment,
      sym_line_comment,
  [4480] = 2,
    ACTIONS(614), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 373,
  [SMALL_STATE(12)] = 401,
  [SMALL_STATE(13)] = 429,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 548,
  [SMALL_STATE(17)] = 585,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 654,
  [SMALL_STATE(20)] = 686,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 760,
  [SMALL_STATE(23)] = 792,
  [SMALL_STATE(24)] = 824,
  [SMALL_STATE(25)] = 856,
  [SMALL_STATE(26)] = 888,
  [SMALL_STATE(27)] = 930,
  [SMALL_STATE(28)] = 962,
  [SMALL_STATE(29)] = 994,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1058,
  [SMALL_STATE(32)] = 1090,
  [SMALL_STATE(33)] = 1121,
  [SMALL_STATE(34)] = 1150,
  [SMALL_STATE(35)] = 1181,
  [SMALL_STATE(36)] = 1208,
  [SMALL_STATE(37)] = 1239,
  [SMALL_STATE(38)] = 1270,
  [SMALL_STATE(39)] = 1301,
  [SMALL_STATE(40)] = 1332,
  [SMALL_STATE(41)] = 1363,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1425,
  [SMALL_STATE(44)] = 1456,
  [SMALL_STATE(45)] = 1488,
  [SMALL_STATE(46)] = 1512,
  [SMALL_STATE(47)] = 1544,
  [SMALL_STATE(48)] = 1568,
  [SMALL_STATE(49)] = 1593,
  [SMALL_STATE(50)] = 1622,
  [SMALL_STATE(51)] = 1651,
  [SMALL_STATE(52)] = 1680,
  [SMALL_STATE(53)] = 1709,
  [SMALL_STATE(54)] = 1735,
  [SMALL_STATE(55)] = 1761,
  [SMALL_STATE(56)] = 1787,
  [SMALL_STATE(57)] = 1811,
  [SMALL_STATE(58)] = 1837,
  [SMALL_STATE(59)] = 1863,
  [SMALL_STATE(60)] = 1889,
  [SMALL_STATE(61)] = 1915,
  [SMALL_STATE(62)] = 1936,
  [SMALL_STATE(63)] = 1957,
  [SMALL_STATE(64)] = 1995,
  [SMALL_STATE(65)] = 2015,
  [SMALL_STATE(66)] = 2035,
  [SMALL_STATE(67)] = 2055,
  [SMALL_STATE(68)] = 2093,
  [SMALL_STATE(69)] = 2113,
  [SMALL_STATE(70)] = 2151,
  [SMALL_STATE(71)] = 2171,
  [SMALL_STATE(72)] = 2191,
  [SMALL_STATE(73)] = 2211,
  [SMALL_STATE(74)] = 2231,
  [SMALL_STATE(75)] = 2269,
  [SMALL_STATE(76)] = 2289,
  [SMALL_STATE(77)] = 2309,
  [SMALL_STATE(78)] = 2329,
  [SMALL_STATE(79)] = 2349,
  [SMALL_STATE(80)] = 2369,
  [SMALL_STATE(81)] = 2389,
  [SMALL_STATE(82)] = 2409,
  [SMALL_STATE(83)] = 2429,
  [SMALL_STATE(84)] = 2449,
  [SMALL_STATE(85)] = 2469,
  [SMALL_STATE(86)] = 2489,
  [SMALL_STATE(87)] = 2509,
  [SMALL_STATE(88)] = 2529,
  [SMALL_STATE(89)] = 2549,
  [SMALL_STATE(90)] = 2569,
  [SMALL_STATE(91)] = 2590,
  [SMALL_STATE(92)] = 2611,
  [SMALL_STATE(93)] = 2632,
  [SMALL_STATE(94)] = 2653,
  [SMALL_STATE(95)] = 2681,
  [SMALL_STATE(96)] = 2703,
  [SMALL_STATE(97)] = 2727,
  [SMALL_STATE(98)] = 2749,
  [SMALL_STATE(99)] = 2783,
  [SMALL_STATE(100)] = 2817,
  [SMALL_STATE(101)] = 2845,
  [SMALL_STATE(102)] = 2869,
  [SMALL_STATE(103)] = 2903,
  [SMALL_STATE(104)] = 2925,
  [SMALL_STATE(105)] = 2953,
  [SMALL_STATE(106)] = 2972,
  [SMALL_STATE(107)] = 3003,
  [SMALL_STATE(108)] = 3034,
  [SMALL_STATE(109)] = 3053,
  [SMALL_STATE(110)] = 3072,
  [SMALL_STATE(111)] = 3100,
  [SMALL_STATE(112)] = 3128,
  [SMALL_STATE(113)] = 3156,
  [SMALL_STATE(114)] = 3184,
  [SMALL_STATE(115)] = 3212,
  [SMALL_STATE(116)] = 3240,
  [SMALL_STATE(117)] = 3268,
  [SMALL_STATE(118)] = 3296,
  [SMALL_STATE(119)] = 3324,
  [SMALL_STATE(120)] = 3352,
  [SMALL_STATE(121)] = 3380,
  [SMALL_STATE(122)] = 3408,
  [SMALL_STATE(123)] = 3436,
  [SMALL_STATE(124)] = 3464,
  [SMALL_STATE(125)] = 3492,
  [SMALL_STATE(126)] = 3520,
  [SMALL_STATE(127)] = 3548,
  [SMALL_STATE(128)] = 3576,
  [SMALL_STATE(129)] = 3593,
  [SMALL_STATE(130)] = 3614,
  [SMALL_STATE(131)] = 3631,
  [SMALL_STATE(132)] = 3654,
  [SMALL_STATE(133)] = 3677,
  [SMALL_STATE(134)] = 3699,
  [SMALL_STATE(135)] = 3715,
  [SMALL_STATE(136)] = 3731,
  [SMALL_STATE(137)] = 3749,
  [SMALL_STATE(138)] = 3767,
  [SMALL_STATE(139)] = 3785,
  [SMALL_STATE(140)] = 3803,
  [SMALL_STATE(141)] = 3825,
  [SMALL_STATE(142)] = 3847,
  [SMALL_STATE(143)] = 3862,
  [SMALL_STATE(144)] = 3879,
  [SMALL_STATE(145)] = 3893,
  [SMALL_STATE(146)] = 3907,
  [SMALL_STATE(147)] = 3922,
  [SMALL_STATE(148)] = 3933,
  [SMALL_STATE(149)] = 3944,
  [SMALL_STATE(150)] = 3958,
  [SMALL_STATE(151)] = 3972,
  [SMALL_STATE(152)] = 3986,
  [SMALL_STATE(153)] = 3998,
  [SMALL_STATE(154)] = 4012,
  [SMALL_STATE(155)] = 4026,
  [SMALL_STATE(156)] = 4040,
  [SMALL_STATE(157)] = 4054,
  [SMALL_STATE(158)] = 4065,
  [SMALL_STATE(159)] = 4076,
  [SMALL_STATE(160)] = 4087,
  [SMALL_STATE(161)] = 4098,
  [SMALL_STATE(162)] = 4109,
  [SMALL_STATE(163)] = 4120,
  [SMALL_STATE(164)] = 4131,
  [SMALL_STATE(165)] = 4142,
  [SMALL_STATE(166)] = 4153,
  [SMALL_STATE(167)] = 4164,
  [SMALL_STATE(168)] = 4175,
  [SMALL_STATE(169)] = 4184,
  [SMALL_STATE(170)] = 4192,
  [SMALL_STATE(171)] = 4200,
  [SMALL_STATE(172)] = 4208,
  [SMALL_STATE(173)] = 4216,
  [SMALL_STATE(174)] = 4224,
  [SMALL_STATE(175)] = 4232,
  [SMALL_STATE(176)] = 4240,
  [SMALL_STATE(177)] = 4248,
  [SMALL_STATE(178)] = 4256,
  [SMALL_STATE(179)] = 4264,
  [SMALL_STATE(180)] = 4272,
  [SMALL_STATE(181)] = 4280,
  [SMALL_STATE(182)] = 4288,
  [SMALL_STATE(183)] = 4296,
  [SMALL_STATE(184)] = 4304,
  [SMALL_STATE(185)] = 4312,
  [SMALL_STATE(186)] = 4320,
  [SMALL_STATE(187)] = 4328,
  [SMALL_STATE(188)] = 4336,
  [SMALL_STATE(189)] = 4344,
  [SMALL_STATE(190)] = 4352,
  [SMALL_STATE(191)] = 4360,
  [SMALL_STATE(192)] = 4368,
  [SMALL_STATE(193)] = 4376,
  [SMALL_STATE(194)] = 4384,
  [SMALL_STATE(195)] = 4392,
  [SMALL_STATE(196)] = 4400,
  [SMALL_STATE(197)] = 4408,
  [SMALL_STATE(198)] = 4416,
  [SMALL_STATE(199)] = 4424,
  [SMALL_STATE(200)] = 4432,
  [SMALL_STATE(201)] = 4440,
  [SMALL_STATE(202)] = 4448,
  [SMALL_STATE(203)] = 4456,
  [SMALL_STATE(204)] = 4464,
  [SMALL_STATE(205)] = 4472,
  [SMALL_STATE(206)] = 4480,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newexpr, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newexpr, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 22),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 23),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classmembers, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 12),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 17),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 20),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 21),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 19),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 14),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 4, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 16),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 8),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 11),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 6, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 7, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 8),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 10),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 11),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 12),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 13),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 14),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 15),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 16),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 17),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 18),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 19),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 20),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 21),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 22),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 11, 0, 23),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveop, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveop, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gclass, 3, 0, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 3, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 5, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [606] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
