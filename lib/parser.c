#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 2
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  anon_sym_private = 1,
  anon_sym_internal = 2,
  anon_sym_protected = 3,
  anon_sym_public = 4,
  anon_sym_static = 5,
  anon_sym_abstract = 6,
  anon_sym_override = 7,
  anon_sym_final = 8,
  anon_sym_transient = 9,
  anon_sym_class = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_var = 13,
  anon_sym_COLON = 14,
  anon_sym_as = 15,
  anon_sym_readonly = 16,
  anon_sym_EQ = 17,
  anon_sym_SEMI = 18,
  sym_id = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_stringliteral_token1 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_stringliteral_token2 = 23,
  sym_digit = 24,
  sym_comment = 25,
  sym_line_comment = 26,
  sym_start = 27,
  sym_modifiers = 28,
  sym_gclass = 29,
  sym_classbody = 30,
  sym_classmembers = 31,
  sym_declaration = 32,
  sym_fielddefn = 33,
  sym_type = 34,
  sym_type_identifier = 35,
  sym_expression = 36,
  sym_stringliteral = 37,
  aux_sym_modifiers_repeat1 = 38,
  aux_sym_classmembers_repeat1 = 39,
  alias_sym_pat_3a2a380 = 40,
  alias_sym_pat_dc28280 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_SEMI] = ";",
  [sym_id] = "id",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_stringliteral_token1] = "stringliteral_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_stringliteral_token2] = "stringliteral_token2",
  [sym_digit] = "digit",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_start] = "start",
  [sym_modifiers] = "modifiers",
  [sym_gclass] = "gclass",
  [sym_classbody] = "classbody",
  [sym_classmembers] = "classmembers",
  [sym_declaration] = "declaration",
  [sym_fielddefn] = "fielddefn",
  [sym_type] = "type",
  [sym_type_identifier] = "type_identifier",
  [sym_expression] = "expression",
  [sym_stringliteral] = "stringliteral",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_classmembers_repeat1] = "classmembers_repeat1",
  [alias_sym_pat_3a2a380] = "pat_3a2a380",
  [alias_sym_pat_dc28280] = "pat_dc28280",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_id] = sym_id,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_stringliteral_token1] = aux_sym_stringliteral_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_stringliteral_token2] = aux_sym_stringliteral_token2,
  [sym_digit] = sym_digit,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_start] = sym_start,
  [sym_modifiers] = sym_modifiers,
  [sym_gclass] = sym_gclass,
  [sym_classbody] = sym_classbody,
  [sym_classmembers] = sym_classmembers,
  [sym_declaration] = sym_declaration,
  [sym_fielddefn] = sym_fielddefn,
  [sym_type] = sym_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_expression] = sym_expression,
  [sym_stringliteral] = sym_stringliteral,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_classmembers_repeat1] = aux_sym_classmembers_repeat1,
  [alias_sym_pat_3a2a380] = alias_sym_pat_3a2a380,
  [alias_sym_pat_dc28280] = alias_sym_pat_dc28280,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_SEMI] = {
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
  [sym_start] = {
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
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_classmembers_repeat1] = {
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
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
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
    {field_as, 3},
  [4] =
    {field_value, 3},
  [5] =
    {field_as, 4},
  [6] =
    {field_type, 4},
  [7] =
    {field_value, 4},
  [8] =
    {field_as, 5},
    {field_type, 3},
  [10] =
    {field_type, 3},
    {field_value, 5},
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
  [11] = {
    [1] = alias_sym_pat_dc28280,
  },
  [12] = {
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        '"', 110,
        '\'', 103,
        '/', 1,
        ':', 89,
        ';', 94,
        '=', 93,
        'a', 17,
        'c', 44,
        'f', 34,
        'i', 45,
        'o', 72,
        'p', 52,
        'r', 30,
        's', 67,
        't', 56,
        'v', 9,
        '{', 86,
        '}', 87,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(119);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_stringliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(119);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_stringliteral_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
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
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_start] = STATE(88),
    [sym_modifiers] = STATE(71),
    [sym_gclass] = STATE(81),
    [aux_sym_modifiers_repeat1] = STATE(19),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_transient] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_var,
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    STATE(39), 1,
      sym_fielddefn,
    STATE(79), 1,
      sym_classmembers,
    STATE(84), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(3), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    ACTIONS(5), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [38] = 8,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    STATE(39), 1,
      sym_fielddefn,
    STATE(84), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(4), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    ACTIONS(5), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [73] = 8,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      anon_sym_var,
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    STATE(39), 1,
      sym_fielddefn,
    STATE(84), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(4), 2,
      sym_declaration,
      aux_sym_classmembers_repeat1,
    ACTIONS(15), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [108] = 6,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_as,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(23), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [138] = 6,
    ACTIONS(35), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(33), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [168] = 5,
    ACTIONS(45), 1,
      anon_sym_as,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(43), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [195] = 5,
    ACTIONS(53), 1,
      anon_sym_as,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(51), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [222] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(59), 14,
      anon_sym_private,
      anon_sym_internal,
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
      anon_sym_SEMI,
  [243] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(61), 14,
      anon_sym_private,
      anon_sym_internal,
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
      anon_sym_SEMI,
  [264] = 4,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(63), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [288] = 4,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(69), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [312] = 4,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(75), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [336] = 4,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(81), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [360] = 4,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(87), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [384] = 4,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(93), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [408] = 4,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(99), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [432] = 3,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(105), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [453] = 4,
    STATE(20), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      anon_sym_class,
      anon_sym_var,
    ACTIONS(109), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [476] = 4,
    STATE(20), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(116), 2,
      anon_sym_class,
      anon_sym_var,
    ACTIONS(113), 9,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
  [499] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(118), 12,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_SEMI,
  [518] = 3,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(120), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [539] = 3,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(124), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [560] = 3,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(128), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [581] = 3,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(132), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [602] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(136), 12,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_SEMI,
  [621] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(138), 12,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_SEMI,
  [640] = 3,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(140), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [661] = 3,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(144), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [682] = 3,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(148), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [703] = 3,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(152), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [724] = 3,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(156), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [745] = 3,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(160), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(164), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [784] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(166), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(168), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(170), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [838] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(172), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [856] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(174), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [874] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(176), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [892] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(178), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [910] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(180), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [928] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(33), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [946] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(182), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [964] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(184), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [982] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(186), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(188), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1018] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(190), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1036] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(192), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1054] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(194), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1072] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(196), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(198), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(200), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1126] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(202), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1144] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(204), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(206), 11,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_final,
      anon_sym_transient,
      anon_sym_RBRACE,
      anon_sym_var,
  [1180] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(33), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1197] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(30), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1214] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(32), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1231] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(31), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1248] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1265] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(24), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1282] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_expression,
    STATE(21), 1,
      sym_stringliteral,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1299] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(28), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1316] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(22), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1333] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1350] = 5,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_stringliteral,
    STATE(25), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1367] = 4,
    ACTIONS(212), 1,
      sym_id,
    STATE(8), 1,
      sym_type,
    STATE(10), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1381] = 4,
    ACTIONS(212), 1,
      sym_id,
    STATE(7), 1,
      sym_type,
    STATE(10), 1,
      sym_type_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1395] = 3,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_classbody,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1406] = 3,
    ACTIONS(7), 1,
      anon_sym_class,
    STATE(83), 1,
      sym_gclass,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1417] = 3,
    ACTIONS(216), 1,
      anon_sym_readonly,
    ACTIONS(218), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1428] = 3,
    ACTIONS(220), 1,
      anon_sym_readonly,
    ACTIONS(222), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1439] = 3,
    ACTIONS(224), 1,
      anon_sym_readonly,
    ACTIONS(226), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1450] = 3,
    ACTIONS(228), 1,
      anon_sym_readonly,
    ACTIONS(230), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1461] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1469] = 2,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1477] = 2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1485] = 2,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1493] = 2,
    ACTIONS(240), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1501] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1509] = 2,
    ACTIONS(244), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1517] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1525] = 2,
    ACTIONS(248), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1533] = 2,
    ACTIONS(250), 1,
      aux_sym_stringliteral_token1,
    ACTIONS(252), 2,
      sym_comment,
      sym_line_comment,
  [1541] = 2,
    ACTIONS(254), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1549] = 2,
    ACTIONS(256), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1557] = 2,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1565] = 2,
    ACTIONS(260), 1,
      aux_sym_stringliteral_token2,
    ACTIONS(252), 2,
      sym_comment,
      sym_line_comment,
  [1573] = 2,
    ACTIONS(262), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1581] = 2,
    ACTIONS(264), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1589] = 2,
    ACTIONS(266), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1597] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [1605] = 2,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 312,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 360,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 408,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 453,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 518,
  [SMALL_STATE(23)] = 539,
  [SMALL_STATE(24)] = 560,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 602,
  [SMALL_STATE(27)] = 621,
  [SMALL_STATE(28)] = 640,
  [SMALL_STATE(29)] = 661,
  [SMALL_STATE(30)] = 682,
  [SMALL_STATE(31)] = 703,
  [SMALL_STATE(32)] = 724,
  [SMALL_STATE(33)] = 745,
  [SMALL_STATE(34)] = 766,
  [SMALL_STATE(35)] = 784,
  [SMALL_STATE(36)] = 802,
  [SMALL_STATE(37)] = 820,
  [SMALL_STATE(38)] = 838,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 874,
  [SMALL_STATE(41)] = 892,
  [SMALL_STATE(42)] = 910,
  [SMALL_STATE(43)] = 928,
  [SMALL_STATE(44)] = 946,
  [SMALL_STATE(45)] = 964,
  [SMALL_STATE(46)] = 982,
  [SMALL_STATE(47)] = 1000,
  [SMALL_STATE(48)] = 1018,
  [SMALL_STATE(49)] = 1036,
  [SMALL_STATE(50)] = 1054,
  [SMALL_STATE(51)] = 1072,
  [SMALL_STATE(52)] = 1090,
  [SMALL_STATE(53)] = 1108,
  [SMALL_STATE(54)] = 1126,
  [SMALL_STATE(55)] = 1144,
  [SMALL_STATE(56)] = 1162,
  [SMALL_STATE(57)] = 1180,
  [SMALL_STATE(58)] = 1197,
  [SMALL_STATE(59)] = 1214,
  [SMALL_STATE(60)] = 1231,
  [SMALL_STATE(61)] = 1248,
  [SMALL_STATE(62)] = 1265,
  [SMALL_STATE(63)] = 1282,
  [SMALL_STATE(64)] = 1299,
  [SMALL_STATE(65)] = 1316,
  [SMALL_STATE(66)] = 1333,
  [SMALL_STATE(67)] = 1350,
  [SMALL_STATE(68)] = 1367,
  [SMALL_STATE(69)] = 1381,
  [SMALL_STATE(70)] = 1395,
  [SMALL_STATE(71)] = 1406,
  [SMALL_STATE(72)] = 1417,
  [SMALL_STATE(73)] = 1428,
  [SMALL_STATE(74)] = 1439,
  [SMALL_STATE(75)] = 1450,
  [SMALL_STATE(76)] = 1461,
  [SMALL_STATE(77)] = 1469,
  [SMALL_STATE(78)] = 1477,
  [SMALL_STATE(79)] = 1485,
  [SMALL_STATE(80)] = 1493,
  [SMALL_STATE(81)] = 1501,
  [SMALL_STATE(82)] = 1509,
  [SMALL_STATE(83)] = 1517,
  [SMALL_STATE(84)] = 1525,
  [SMALL_STATE(85)] = 1533,
  [SMALL_STATE(86)] = 1541,
  [SMALL_STATE(87)] = 1549,
  [SMALL_STATE(88)] = 1557,
  [SMALL_STATE(89)] = 1565,
  [SMALL_STATE(90)] = 1573,
  [SMALL_STATE(91)] = 1581,
  [SMALL_STATE(92)] = 1589,
  [SMALL_STATE(93)] = 1597,
  [SMALL_STATE(94)] = 1605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classmembers, 1, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classmembers_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 9),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 10),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 11),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringliteral, 3, 0, 12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 21),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 23),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 11, 0, 23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 5, 0, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 6, 0, 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 7, 0, 13),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 14),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 15),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 16),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 8, 0, 17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 18),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 19),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 9, 0, 20),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 21),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fielddefn, 10, 0, 22),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gclass, 3, 0, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classbody, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
