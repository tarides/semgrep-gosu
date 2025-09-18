#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 27

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
  sym_parameterdeclarationlist = 51,
  sym_parameterdeclaration = 52,
  sym_statement_ = 53,
  sym_statement = 54,
  sym_localvarstatement = 55,
  sym_arguments = 56,
  sym_indirectmemberaccess1 = 57,
  sym_assignmentormethodcall = 58,
  sym_type = 59,
  sym_type_identifier = 60,
  sym_expression = 61,
  sym_additiveexpr = 62,
  sym_newexpr = 63,
  sym_stringliteral = 64,
  sym_additiveop = 65,
  aux_sym_start_repeat1 = 66,
  aux_sym_namespacestatement_repeat1 = 67,
  aux_sym_namespacestatement_repeat2 = 68,
  aux_sym_modifiers_repeat1 = 69,
  aux_sym_classmembers_repeat1 = 70,
  aux_sym_functiondefn_repeat1 = 71,
  aux_sym_parameterdeclarationlist_repeat1 = 72,
  aux_sym_arguments_repeat1 = 73,
  aux_sym_assignmentormethodcall_repeat1 = 74,
  alias_sym_pat_3a2a380 = 75,
  alias_sym_pat_dc28280 = 76,
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
  [sym_parameterdeclarationlist] = "parameterdeclarationlist",
  [sym_parameterdeclaration] = "parameterdeclaration",
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
  [aux_sym_parameterdeclarationlist_repeat1] = "parameterdeclarationlist_repeat1",
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
  [sym_parameterdeclarationlist] = sym_parameterdeclarationlist,
  [sym_parameterdeclaration] = sym_parameterdeclaration,
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
  [aux_sym_parameterdeclarationlist_repeat1] = aux_sym_parameterdeclarationlist_repeat1,
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
  [sym_parameterdeclarationlist] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterdeclaration] = {
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
  [aux_sym_parameterdeclarationlist_repeat1] = {
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
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 2},
  [14] = {.index = 14, .length = 2},
  [15] = {.index = 16, .length = 2},
  [16] = {.index = 18, .length = 1},
  [17] = {.index = 19, .length = 2},
  [18] = {.index = 21, .length = 2},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 3},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 2},
  [24] = {.index = 34, .length = 3},
  [25] = {.index = 37, .length = 3},
  [26] = {.index = 40, .length = 3},
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
    {field_type, 2},
  [7] =
    {field_value, 2},
  [8] =
    {field_as, 3},
  [9] =
    {field_as, 4},
  [10] =
    {field_type, 4},
  [11] =
    {field_value, 4},
  [12] =
    {field_type, 2},
    {field_value, 4},
  [14] =
    {field_as, 5},
    {field_type, 3},
  [16] =
    {field_as, 3},
    {field_value, 5},
  [18] =
    {field_as, 5},
  [19] =
    {field_as, 6},
    {field_type, 3},
  [21] =
    {field_as, 4},
    {field_value, 6},
  [23] =
    {field_as, 6},
    {field_type, 4},
  [25] =
    {field_type, 4},
    {field_value, 6},
  [27] =
    {field_as, 5},
    {field_type, 3},
    {field_value, 7},
  [30] =
    {field_as, 7},
    {field_type, 4},
  [32] =
    {field_as, 5},
    {field_value, 7},
  [34] =
    {field_as, 6},
    {field_type, 3},
    {field_value, 8},
  [37] =
    {field_as, 6},
    {field_type, 4},
    {field_value, 8},
  [40] =
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
  [65] = 6,
  [66] = 66,
  [67] = 67,
  [68] = 5,
  [69] = 7,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 8,
  [100] = 100,
  [101] = 9,
  [102] = 11,
  [103] = 12,
  [104] = 10,
  [105] = 16,
  [106] = 13,
  [107] = 17,
  [108] = 14,
  [109] = 15,
  [110] = 110,
  [111] = 53,
  [112] = 55,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 137,
  [142] = 136,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 116,
  [147] = 113,
  [148] = 148,
  [149] = 149,
  [150] = 28,
  [151] = 151,
  [152] = 38,
  [153] = 120,
  [154] = 114,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 144,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 163,
  [169] = 169,
  [170] = 151,
  [171] = 166,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 157,
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
  [187] = 156,
  [188] = 188,
  [189] = 186,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 158,
  [214] = 204,
  [215] = 215,
  [216] = 191,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 207,
  [223] = 223,
  [224] = 203,
  [225] = 192,
  [226] = 195,
  [227] = 190,
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
      if (lookahead == ')') ADVANCE(140);
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 99},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 99},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 99},
  [40] = {.lex_state = 99},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 99},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 99},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 99},
  [49] = {.lex_state = 99},
  [50] = {.lex_state = 99},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 0},
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
    [sym_start] = STATE(205),
    [sym_usesstatement] = STATE(4),
    [sym_modifiers] = STATE(94),
    [sym_gclass] = STATE(206),
    [sym_functiondefn] = STATE(206),
    [sym_statement_] = STATE(176),
    [sym_statement] = STATE(206),
    [sym_localvarstatement] = STATE(187),
    [sym_assignmentormethodcall] = STATE(187),
    [sym_newexpr] = STATE(147),
    [aux_sym_start_repeat1] = STATE(4),
    [aux_sym_modifiers_repeat1] = STATE(53),
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
    STATE(53), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(49), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(202), 3,
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
    STATE(53), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(2), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(211), 3,
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
    STATE(53), 1,
      aux_sym_modifiers_repeat1,
    STATE(93), 1,
      sym_modifiers,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(49), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(210), 3,
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
  [186] = 6,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(6), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
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
  [227] = 6,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(7), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(29), 21,
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
  [268] = 6,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(7), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(31), 21,
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
  [309] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(39), 22,
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
  [344] = 3,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 22,
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
  [376] = 3,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(47), 22,
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
  [408] = 3,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(51), 22,
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
  [440] = 3,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(55), 22,
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
  [472] = 3,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(59), 22,
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
  [504] = 3,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(63), 22,
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
  [536] = 3,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(67), 22,
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
  [568] = 3,
    ACTIONS(71), 1,
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
  [600] = 3,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(73), 22,
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
  [632] = 7,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      sym_semgrep_ellipsis,
    STATE(22), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(43), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(81), 15,
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
  [669] = 7,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      sym_semgrep_ellipsis,
    STATE(20), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(45), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(89), 15,
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
  [706] = 7,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      sym_semgrep_ellipsis,
    STATE(24), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(44), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(97), 15,
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
  [743] = 11,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_var,
    ACTIONS(107), 1,
      anon_sym_function,
    ACTIONS(109), 1,
      sym_semgrep_ellipsis,
    STATE(111), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
      sym_modifiers,
    STATE(198), 1,
      sym_classmembers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(25), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(97), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(101), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [788] = 7,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      sym_semgrep_ellipsis,
    STATE(24), 1,
      aux_sym_namespacestatement_repeat1,
    STATE(46), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(113), 15,
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
  [825] = 5,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
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
  [857] = 5,
    ACTIONS(123), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_namespacestatement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(126), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(128), 15,
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
  [889] = 10,
    ACTIONS(105), 1,
      anon_sym_var,
    ACTIONS(107), 1,
      anon_sym_function,
    ACTIONS(109), 1,
      sym_semgrep_ellipsis,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(27), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(97), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(101), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [931] = 5,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(134), 13,
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
  [963] = 10,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      anon_sym_var,
    ACTIONS(144), 1,
      anon_sym_function,
    ACTIONS(147), 1,
      sym_semgrep_ellipsis,
    STATE(111), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(27), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    STATE(97), 2,
      sym_fielddefn,
      sym_functiondefn,
    ACTIONS(136), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1005] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(150), 19,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_semgrep_ellipsis,
  [1031] = 5,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
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
  [1063] = 5,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(158), 13,
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
  [1095] = 5,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(162), 13,
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
  [1127] = 5,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(166), 13,
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
  [1159] = 5,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(170), 13,
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
  [1191] = 5,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(174), 13,
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
  [1223] = 5,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(178), 13,
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
  [1255] = 5,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(182), 13,
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
  [1287] = 5,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
    ACTIONS(186), 13,
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
  [1319] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(188), 19,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_semgrep_ellipsis,
  [1345] = 5,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      sym_semgrep_ellipsis,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(192), 15,
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
  [1376] = 5,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      sym_semgrep_ellipsis,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(199), 15,
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
  [1407] = 5,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym_semgrep_ellipsis,
    STATE(48), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(205), 15,
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
  [1438] = 4,
    ACTIONS(213), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(211), 15,
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
  [1467] = 5,
    ACTIONS(115), 1,
      sym_semgrep_ellipsis,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(113), 15,
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
  [1498] = 5,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym_semgrep_ellipsis,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(205), 15,
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
  [1529] = 5,
    ACTIONS(99), 1,
      sym_semgrep_ellipsis,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(97), 15,
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
  [1560] = 5,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      sym_semgrep_ellipsis,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(215), 15,
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
  [1591] = 5,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      sym_semgrep_ellipsis,
    STATE(39), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(221), 15,
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
  [1622] = 5,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      sym_semgrep_ellipsis,
    STATE(40), 1,
      aux_sym_namespacestatement_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(221), 15,
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
  [1653] = 5,
    ACTIONS(225), 1,
      anon_sym_uses,
    ACTIONS(230), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(49), 2,
      sym_usesstatement,
      aux_sym_start_repeat1,
    ACTIONS(228), 14,
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
  [1684] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(126), 2,
      anon_sym_SEMI,
      sym_semgrep_ellipsis,
    ACTIONS(128), 16,
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
  [1711] = 6,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_as,
    ACTIONS(241), 1,
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
  [1743] = 6,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_as,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(245), 13,
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
  [1775] = 5,
    ACTIONS(257), 1,
      sym_semgrep_ellipsis,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(255), 5,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      anon_sym_new,
      sym_id,
    ACTIONS(253), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1804] = 3,
    ACTIONS(213), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(211), 15,
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
  [1829] = 5,
    ACTIONS(264), 1,
      sym_semgrep_ellipsis,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(262), 5,
      anon_sym_class,
      anon_sym_var,
      anon_sym_function,
      anon_sym_new,
      sym_id,
    ACTIONS(259), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [1858] = 5,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_as,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(268), 13,
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
  [1887] = 5,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_as,
    ACTIONS(280), 1,
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
  [1916] = 4,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(284), 13,
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
  [1942] = 3,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(288), 14,
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
  [1966] = 4,
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
  [1992] = 4,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(300), 13,
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
  [2018] = 4,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_EQ,
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
  [2044] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_EQ,
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
  [2070] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      anon_sym_EQ,
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
  [2096] = 7,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(69), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(324), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(29), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2128] = 4,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(332), 1,
      anon_sym_EQ,
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
  [2154] = 3,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(334), 14,
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
  [2178] = 7,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(65), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(71), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(23), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2210] = 7,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(69), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(341), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(31), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2242] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(346), 14,
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
  [2263] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(348), 14,
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
  [2284] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(350), 14,
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
  [2305] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(352), 13,
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
  [2325] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(354), 13,
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
  [2345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(356), 13,
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
  [2365] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(358), 13,
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
  [2385] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(360), 13,
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
  [2405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(362), 13,
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
  [2425] = 11,
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
    ACTIONS(364), 1,
      sym_semgrep_ellipsis,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(193), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2463] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(366), 13,
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
  [2483] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(368), 13,
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
  [2503] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(370), 13,
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
  [2523] = 11,
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
    ACTIONS(364), 1,
      sym_semgrep_ellipsis,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(202), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2561] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(372), 13,
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
  [2581] = 2,
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
  [2601] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(374), 13,
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
  [2621] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(376), 13,
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
  [2641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(378), 13,
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
  [2661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(380), 13,
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
  [2681] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(382), 13,
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
  [2701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(384), 13,
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
  [2721] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(386), 13,
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
  [2741] = 11,
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
    ACTIONS(364), 1,
      sym_semgrep_ellipsis,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(211), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2779] = 11,
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
    ACTIONS(364), 1,
      sym_semgrep_ellipsis,
    STATE(147), 1,
      sym_newexpr,
    STATE(176), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
    STATE(210), 3,
      sym_gclass,
      sym_functiondefn,
      sym_statement,
  [2817] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(388), 13,
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
  [2837] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(390), 13,
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
  [2857] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(392), 13,
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
  [2877] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(394), 13,
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
  [2897] = 4,
    STATE(123), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(41), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(39), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2921] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(396), 13,
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
  [2941] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(45), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(43), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2962] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(53), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(51), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [2983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(57), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(55), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3004] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(49), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(47), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3025] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(71), 4,
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
  [3046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(61), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(59), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3067] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(75), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(73), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3088] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(65), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(63), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(69), 4,
      anon_sym_DOT,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(67), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      sym_semgrep_ellipsis,
  [3130] = 10,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(400), 1,
      anon_sym_var,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(404), 1,
      sym_id,
    ACTIONS(406), 1,
      sym_semgrep_ellipsis,
    STATE(113), 1,
      sym_newexpr,
    STATE(157), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(118), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [3164] = 4,
    ACTIONS(257), 1,
      anon_sym_var,
    STATE(112), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(408), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [3186] = 4,
    ACTIONS(264), 1,
      anon_sym_var,
    STATE(112), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(410), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [3208] = 7,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(114), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(413), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(415), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3236] = 7,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(69), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
    ACTIONS(417), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(419), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [3264] = 10,
    ACTIONS(400), 1,
      anon_sym_var,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(404), 1,
      sym_id,
    ACTIONS(406), 1,
      sym_semgrep_ellipsis,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_newexpr,
    STATE(157), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(118), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [3298] = 5,
    STATE(123), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(423), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(425), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3322] = 10,
    ACTIONS(400), 1,
      anon_sym_var,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(404), 1,
      sym_id,
    ACTIONS(406), 1,
      sym_semgrep_ellipsis,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_newexpr,
    STATE(157), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(110), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [3356] = 10,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(429), 1,
      anon_sym_var,
    ACTIONS(432), 1,
      anon_sym_new,
    ACTIONS(435), 1,
      sym_id,
    ACTIONS(438), 1,
      sym_semgrep_ellipsis,
    STATE(113), 1,
      sym_newexpr,
    STATE(157), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(118), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [3390] = 10,
    ACTIONS(400), 1,
      anon_sym_var,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(404), 1,
      sym_id,
    ACTIONS(406), 1,
      sym_semgrep_ellipsis,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_newexpr,
    STATE(157), 1,
      sym_statement_,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(115), 2,
      sym_statement,
      aux_sym_functiondefn_repeat1,
    STATE(156), 2,
      sym_localvarstatement,
      sym_assignmentormethodcall,
  [3424] = 5,
    STATE(123), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(443), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(445), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [3448] = 9,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(145), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3479] = 9,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3510] = 8,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(459), 1,
      sym_id,
    ACTIONS(461), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      sym_semgrep_ellipsis,
    STATE(99), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(68), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3538] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3566] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(149), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3594] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3622] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(30), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3650] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(31), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3678] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(32), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3706] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(33), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3734] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(148), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3762] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(8), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3790] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3818] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(35), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3846] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(36), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3874] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(146), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3902] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(153), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3930] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(37), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3958] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(155), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [3986] = 8,
    ACTIONS(17), 1,
      anon_sym_new,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_semgrep_ellipsis,
    STATE(26), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(5), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [4014] = 8,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(459), 1,
      sym_id,
    ACTIONS(461), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      sym_semgrep_ellipsis,
    STATE(120), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(68), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [4042] = 8,
    ACTIONS(402), 1,
      anon_sym_new,
    ACTIONS(459), 1,
      sym_id,
    ACTIONS(461), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      sym_semgrep_ellipsis,
    STATE(116), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(68), 3,
      sym_additiveexpr,
      sym_newexpr,
      sym_stringliteral,
  [4070] = 6,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_additiveop,
    STATE(171), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4093] = 5,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(471), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(473), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [4114] = 6,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_additiveop,
    STATE(166), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4137] = 4,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4155] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(154), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [4177] = 4,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(483), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4195] = 4,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(485), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4213] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(487), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(150), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [4229] = 4,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(489), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(491), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [4247] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(495), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
    ACTIONS(188), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_semgrep_ellipsis,
  [4263] = 4,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4281] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(7), 2,
      sym_indirectmemberaccess1,
      aux_sym_assignmentormethodcall_repeat1,
  [4303] = 4,
    STATE(132), 1,
      sym_additiveop,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(497), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
  [4321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(499), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [4336] = 4,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(503), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(505), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [4353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(507), 2,
      anon_sym_RBRACE,
      sym_semgrep_ellipsis,
    ACTIONS(509), 3,
      anon_sym_var,
      anon_sym_new,
      sym_id,
  [4367] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(511), 2,
      anon_sym_new,
      sym_id,
    ACTIONS(513), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_semgrep_ellipsis,
  [4381] = 5,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      sym_id,
    STATE(167), 1,
      sym_parameterdeclaration,
    STATE(201), 1,
      sym_parameterdeclarationlist,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4398] = 4,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(521), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [4413] = 4,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(525), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4428] = 4,
    ACTIONS(529), 1,
      sym_id,
    STATE(151), 1,
      sym_type,
    STATE(152), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4442] = 4,
    ACTIONS(531), 1,
      sym_id,
    STATE(38), 1,
      sym_type_identifier,
    STATE(56), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4456] = 4,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4470] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4484] = 4,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_parameterdeclarationlist_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4498] = 4,
    ACTIONS(531), 1,
      sym_id,
    STATE(38), 1,
      sym_type_identifier,
    STATE(170), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4512] = 4,
    ACTIONS(531), 1,
      sym_id,
    STATE(38), 1,
      sym_type_identifier,
    STATE(57), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4526] = 3,
    ACTIONS(542), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [4538] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4552] = 4,
    ACTIONS(531), 1,
      sym_id,
    STATE(38), 1,
      sym_type_identifier,
    STATE(174), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4566] = 4,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_parameterdeclarationlist_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4580] = 3,
    ACTIONS(551), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(553), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4592] = 4,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_parameterdeclarationlist_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4606] = 3,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4617] = 3,
    ACTIONS(559), 1,
      anon_sym_readonly,
    ACTIONS(561), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4628] = 3,
    ACTIONS(563), 1,
      sym_id,
    STATE(3), 1,
      sym_namespacestatement,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4639] = 3,
    ACTIONS(565), 1,
      anon_sym_readonly,
    ACTIONS(567), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4650] = 3,
    ACTIONS(569), 1,
      anon_sym_readonly,
    ACTIONS(571), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4661] = 3,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_classbody,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4672] = 3,
    ACTIONS(575), 1,
      anon_sym_STAR,
    ACTIONS(577), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4683] = 3,
    ACTIONS(579), 1,
      anon_sym_readonly,
    ACTIONS(581), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4694] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(546), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4703] = 3,
    ACTIONS(517), 1,
      sym_id,
    STATE(184), 1,
      sym_parameterdeclaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4714] = 3,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [4734] = 3,
    ACTIONS(577), 1,
      sym_id,
    ACTIONS(583), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4745] = 3,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4756] = 2,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4764] = 2,
    ACTIONS(587), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4772] = 2,
    ACTIONS(589), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(591), 2,
      sym_comment,
      sym_line_comment,
  [4780] = 2,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4788] = 2,
    ACTIONS(595), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4796] = 2,
    ACTIONS(597), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(591), 2,
      sym_comment,
      sym_line_comment,
  [4804] = 2,
    ACTIONS(599), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4812] = 2,
    ACTIONS(601), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4820] = 2,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4828] = 2,
    ACTIONS(605), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4836] = 2,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4844] = 2,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4852] = 2,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4860] = 2,
    ACTIONS(613), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4868] = 2,
    ACTIONS(615), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4876] = 2,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4884] = 2,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4892] = 2,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4900] = 2,
    ACTIONS(623), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4908] = 2,
    ACTIONS(625), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4916] = 2,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4924] = 2,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4932] = 2,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4940] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4948] = 2,
    ACTIONS(633), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4956] = 2,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4964] = 2,
    ACTIONS(637), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4972] = 2,
    ACTIONS(639), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4980] = 2,
    ACTIONS(641), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4988] = 2,
    ACTIONS(643), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [4996] = 2,
    ACTIONS(577), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [5004] = 2,
    ACTIONS(645), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [5012] = 2,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [5020] = 2,
    ACTIONS(649), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [5028] = 2,
    ACTIONS(651), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [5036] = 2,
    ACTIONS(653), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(591), 2,
      sym_comment,
      sym_line_comment,
  [5044] = 2,
    ACTIONS(655), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(591), 2,
      sym_comment,
      sym_line_comment,
  [5052] = 2,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 227,
  [SMALL_STATE(7)] = 268,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 344,
  [SMALL_STATE(10)] = 376,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 600,
  [SMALL_STATE(18)] = 632,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 706,
  [SMALL_STATE(21)] = 743,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 825,
  [SMALL_STATE(24)] = 857,
  [SMALL_STATE(25)] = 889,
  [SMALL_STATE(26)] = 931,
  [SMALL_STATE(27)] = 963,
  [SMALL_STATE(28)] = 1005,
  [SMALL_STATE(29)] = 1031,
  [SMALL_STATE(30)] = 1063,
  [SMALL_STATE(31)] = 1095,
  [SMALL_STATE(32)] = 1127,
  [SMALL_STATE(33)] = 1159,
  [SMALL_STATE(34)] = 1191,
  [SMALL_STATE(35)] = 1223,
  [SMALL_STATE(36)] = 1255,
  [SMALL_STATE(37)] = 1287,
  [SMALL_STATE(38)] = 1319,
  [SMALL_STATE(39)] = 1345,
  [SMALL_STATE(40)] = 1376,
  [SMALL_STATE(41)] = 1407,
  [SMALL_STATE(42)] = 1438,
  [SMALL_STATE(43)] = 1467,
  [SMALL_STATE(44)] = 1498,
  [SMALL_STATE(45)] = 1529,
  [SMALL_STATE(46)] = 1560,
  [SMALL_STATE(47)] = 1591,
  [SMALL_STATE(48)] = 1622,
  [SMALL_STATE(49)] = 1653,
  [SMALL_STATE(50)] = 1684,
  [SMALL_STATE(51)] = 1711,
  [SMALL_STATE(52)] = 1743,
  [SMALL_STATE(53)] = 1775,
  [SMALL_STATE(54)] = 1804,
  [SMALL_STATE(55)] = 1829,
  [SMALL_STATE(56)] = 1858,
  [SMALL_STATE(57)] = 1887,
  [SMALL_STATE(58)] = 1916,
  [SMALL_STATE(59)] = 1942,
  [SMALL_STATE(60)] = 1966,
  [SMALL_STATE(61)] = 1992,
  [SMALL_STATE(62)] = 2018,
  [SMALL_STATE(63)] = 2044,
  [SMALL_STATE(64)] = 2070,
  [SMALL_STATE(65)] = 2096,
  [SMALL_STATE(66)] = 2128,
  [SMALL_STATE(67)] = 2154,
  [SMALL_STATE(68)] = 2178,
  [SMALL_STATE(69)] = 2210,
  [SMALL_STATE(70)] = 2242,
  [SMALL_STATE(71)] = 2263,
  [SMALL_STATE(72)] = 2284,
  [SMALL_STATE(73)] = 2305,
  [SMALL_STATE(74)] = 2325,
  [SMALL_STATE(75)] = 2345,
  [SMALL_STATE(76)] = 2365,
  [SMALL_STATE(77)] = 2385,
  [SMALL_STATE(78)] = 2405,
  [SMALL_STATE(79)] = 2425,
  [SMALL_STATE(80)] = 2463,
  [SMALL_STATE(81)] = 2483,
  [SMALL_STATE(82)] = 2503,
  [SMALL_STATE(83)] = 2523,
  [SMALL_STATE(84)] = 2561,
  [SMALL_STATE(85)] = 2581,
  [SMALL_STATE(86)] = 2601,
  [SMALL_STATE(87)] = 2621,
  [SMALL_STATE(88)] = 2641,
  [SMALL_STATE(89)] = 2661,
  [SMALL_STATE(90)] = 2681,
  [SMALL_STATE(91)] = 2701,
  [SMALL_STATE(92)] = 2721,
  [SMALL_STATE(93)] = 2741,
  [SMALL_STATE(94)] = 2779,
  [SMALL_STATE(95)] = 2817,
  [SMALL_STATE(96)] = 2837,
  [SMALL_STATE(97)] = 2857,
  [SMALL_STATE(98)] = 2877,
  [SMALL_STATE(99)] = 2897,
  [SMALL_STATE(100)] = 2921,
  [SMALL_STATE(101)] = 2941,
  [SMALL_STATE(102)] = 2962,
  [SMALL_STATE(103)] = 2983,
  [SMALL_STATE(104)] = 3004,
  [SMALL_STATE(105)] = 3025,
  [SMALL_STATE(106)] = 3046,
  [SMALL_STATE(107)] = 3067,
  [SMALL_STATE(108)] = 3088,
  [SMALL_STATE(109)] = 3109,
  [SMALL_STATE(110)] = 3130,
  [SMALL_STATE(111)] = 3164,
  [SMALL_STATE(112)] = 3186,
  [SMALL_STATE(113)] = 3208,
  [SMALL_STATE(114)] = 3236,
  [SMALL_STATE(115)] = 3264,
  [SMALL_STATE(116)] = 3298,
  [SMALL_STATE(117)] = 3322,
  [SMALL_STATE(118)] = 3356,
  [SMALL_STATE(119)] = 3390,
  [SMALL_STATE(120)] = 3424,
  [SMALL_STATE(121)] = 3448,
  [SMALL_STATE(122)] = 3479,
  [SMALL_STATE(123)] = 3510,
  [SMALL_STATE(124)] = 3538,
  [SMALL_STATE(125)] = 3566,
  [SMALL_STATE(126)] = 3594,
  [SMALL_STATE(127)] = 3622,
  [SMALL_STATE(128)] = 3650,
  [SMALL_STATE(129)] = 3678,
  [SMALL_STATE(130)] = 3706,
  [SMALL_STATE(131)] = 3734,
  [SMALL_STATE(132)] = 3762,
  [SMALL_STATE(133)] = 3790,
  [SMALL_STATE(134)] = 3818,
  [SMALL_STATE(135)] = 3846,
  [SMALL_STATE(136)] = 3874,
  [SMALL_STATE(137)] = 3902,
  [SMALL_STATE(138)] = 3930,
  [SMALL_STATE(139)] = 3958,
  [SMALL_STATE(140)] = 3986,
  [SMALL_STATE(141)] = 4014,
  [SMALL_STATE(142)] = 4042,
  [SMALL_STATE(143)] = 4070,
  [SMALL_STATE(144)] = 4093,
  [SMALL_STATE(145)] = 4114,
  [SMALL_STATE(146)] = 4137,
  [SMALL_STATE(147)] = 4155,
  [SMALL_STATE(148)] = 4177,
  [SMALL_STATE(149)] = 4195,
  [SMALL_STATE(150)] = 4213,
  [SMALL_STATE(151)] = 4229,
  [SMALL_STATE(152)] = 4247,
  [SMALL_STATE(153)] = 4263,
  [SMALL_STATE(154)] = 4281,
  [SMALL_STATE(155)] = 4303,
  [SMALL_STATE(156)] = 4321,
  [SMALL_STATE(157)] = 4336,
  [SMALL_STATE(158)] = 4353,
  [SMALL_STATE(159)] = 4367,
  [SMALL_STATE(160)] = 4381,
  [SMALL_STATE(161)] = 4398,
  [SMALL_STATE(162)] = 4413,
  [SMALL_STATE(163)] = 4428,
  [SMALL_STATE(164)] = 4442,
  [SMALL_STATE(165)] = 4456,
  [SMALL_STATE(166)] = 4470,
  [SMALL_STATE(167)] = 4484,
  [SMALL_STATE(168)] = 4498,
  [SMALL_STATE(169)] = 4512,
  [SMALL_STATE(170)] = 4526,
  [SMALL_STATE(171)] = 4538,
  [SMALL_STATE(172)] = 4552,
  [SMALL_STATE(173)] = 4566,
  [SMALL_STATE(174)] = 4580,
  [SMALL_STATE(175)] = 4592,
  [SMALL_STATE(176)] = 4606,
  [SMALL_STATE(177)] = 4617,
  [SMALL_STATE(178)] = 4628,
  [SMALL_STATE(179)] = 4639,
  [SMALL_STATE(180)] = 4650,
  [SMALL_STATE(181)] = 4661,
  [SMALL_STATE(182)] = 4672,
  [SMALL_STATE(183)] = 4683,
  [SMALL_STATE(184)] = 4694,
  [SMALL_STATE(185)] = 4703,
  [SMALL_STATE(186)] = 4714,
  [SMALL_STATE(187)] = 4725,
  [SMALL_STATE(188)] = 4734,
  [SMALL_STATE(189)] = 4745,
  [SMALL_STATE(190)] = 4756,
  [SMALL_STATE(191)] = 4764,
  [SMALL_STATE(192)] = 4772,
  [SMALL_STATE(193)] = 4780,
  [SMALL_STATE(194)] = 4788,
  [SMALL_STATE(195)] = 4796,
  [SMALL_STATE(196)] = 4804,
  [SMALL_STATE(197)] = 4812,
  [SMALL_STATE(198)] = 4820,
  [SMALL_STATE(199)] = 4828,
  [SMALL_STATE(200)] = 4836,
  [SMALL_STATE(201)] = 4844,
  [SMALL_STATE(202)] = 4852,
  [SMALL_STATE(203)] = 4860,
  [SMALL_STATE(204)] = 4868,
  [SMALL_STATE(205)] = 4876,
  [SMALL_STATE(206)] = 4884,
  [SMALL_STATE(207)] = 4892,
  [SMALL_STATE(208)] = 4900,
  [SMALL_STATE(209)] = 4908,
  [SMALL_STATE(210)] = 4916,
  [SMALL_STATE(211)] = 4924,
  [SMALL_STATE(212)] = 4932,
  [SMALL_STATE(213)] = 4940,
  [SMALL_STATE(214)] = 4948,
  [SMALL_STATE(215)] = 4956,
  [SMALL_STATE(216)] = 4964,
  [SMALL_STATE(217)] = 4972,
  [SMALL_STATE(218)] = 4980,
  [SMALL_STATE(219)] = 4988,
  [SMALL_STATE(220)] = 4996,
  [SMALL_STATE(221)] = 5004,
  [SMALL_STATE(222)] = 5012,
  [SMALL_STATE(223)] = 5020,
  [SMALL_STATE(224)] = 5028,
  [SMALL_STATE(225)] = 5036,
  [SMALL_STATE(226)] = 5044,
  [SMALL_STATE(227)] = 5052,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveexpr, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newexpr, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newexpr, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectmemberaccess1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringliteral, 3, 0, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classmembers, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 3),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 15),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 20),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 23),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 24),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 25),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 26),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 6, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0), SHIFT_REPEAT(40),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespacestatement_repeat2, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespacestatement, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usesstatement, 5, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 11),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 14),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 16),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 9),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 17),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 19),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 22),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 5, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignmentormethodcall_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 6, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 8, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functiondefn, 7, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 11),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 12),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 14),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 15),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 16),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 17),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 18),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 19),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 20),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 9),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 21),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 22),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 23),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 25),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 11, 0, 26),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 10),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 24),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentormethodcall, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functiondefn_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 6, 0, 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterdeclaration, 5, 0, 13),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localvarstatement, 4, 0, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterdeclaration, 3, 0, 8),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additiveop, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additiveop, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterdeclaration, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterdeclarationlist, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterdeclarationlist_repeat1, 2, 0, 0),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterdeclarationlist_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterdeclaration, 3, 0, 7),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterdeclarationlist, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 5, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gclass, 3, 0, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 3, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [617] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
