#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 25

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_dynamic_marker = 3,
  sym_embed_open = 4,
  sym_embed_close = 5,
  anon_sym_LBRACK_LBRACK = 6,
  anon_sym_RBRACK_RBRACK = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_call_name = 10,
  sym_call_flag = 11,
  sym_virtual_target = 12,
  sym_format_string = 13,
  sym_call_separator = 14,
  sym_call_asterisk = 15,
  sym_frame_target_marker = 16,
  sym__call_text = 17,
  sym__frame_text = 18,
  anon_sym_BQUOTE = 19,
  sym_raw_content = 20,
  anon_sym_PIPE = 21,
  anon_sym_GT_GT = 22,
  sym_project_ref = 23,
  anon_sym_SLASH = 24,
  anon_sym_QMARK = 25,
  anon_sym_GT = 26,
  anon_sym_BANG = 27,
  anon_sym_COLON = 28,
  sym_link_position = 29,
  sym_other_project_link = 30,
  sym_timestamp = 31,
  anon_sym_PLUS = 32,
  anon_sym_COLON_COLON = 33,
  sym_meta_stars = 34,
  sym_meta_value = 35,
  sym_hash_meta = 36,
  anon_sym__ = 37,
  anon_sym_STAR_STAR = 38,
  sym_bold_content = 39,
  anon_sym___ = 40,
  sym_italic_content = 41,
  sym_http_link = 42,
  sym_whitespace_anchor = 43,
  sym_dynamic_indicator = 44,
  sym__text = 45,
  sym_title_content = 46,
  sym_link_id = 47,
  sym_pointer_id = 48,
  sym_file_path = 49,
  sym_meta_key = 50,
  sym_embed_content = 51,
  sym_document = 52,
  sym__element = 53,
  sym_inline_node = 54,
  sym_embedded_syntax = 55,
  sym_frame = 56,
  sym__frame_element = 57,
  sym_call = 58,
  sym__call_element = 59,
  sym_raw = 60,
  sym_node_pointer = 61,
  sym_cross_project_link = 62,
  sym_file_link = 63,
  sym_node_link = 64,
  sym_link_modifier = 65,
  sym_metadata_entry = 66,
  sym_node_title = 67,
  sym_bold_text = 68,
  sym_italic_text = 69,
  aux_sym_document_repeat1 = 70,
  aux_sym_frame_repeat1 = 71,
  aux_sym_call_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_dynamic_marker] = "dynamic_marker",
  [sym_embed_open] = "embed_open",
  [sym_embed_close] = "embed_close",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_call_name] = "call_name",
  [sym_call_flag] = "call_flag",
  [sym_virtual_target] = "virtual_target",
  [sym_format_string] = "format_string",
  [sym_call_separator] = "call_separator",
  [sym_call_asterisk] = "call_asterisk",
  [sym_frame_target_marker] = "frame_target_marker",
  [sym__call_text] = "_call_text",
  [sym__frame_text] = "_frame_text",
  [anon_sym_BQUOTE] = "`",
  [sym_raw_content] = "raw_content",
  [anon_sym_PIPE] = "|",
  [anon_sym_GT_GT] = " >>",
  [sym_project_ref] = "project_ref",
  [anon_sym_SLASH] = "/",
  [anon_sym_QMARK] = "\?",
  [anon_sym_GT] = " >",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [sym_link_position] = "link_position",
  [sym_other_project_link] = "other_project_link",
  [sym_timestamp] = "timestamp",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON_COLON] = "::",
  [sym_meta_stars] = "meta_stars",
  [sym_meta_value] = "meta_value",
  [sym_hash_meta] = "hash_meta",
  [anon_sym__] = " _",
  [anon_sym_STAR_STAR] = "**",
  [sym_bold_content] = "bold_content",
  [anon_sym___] = "__",
  [sym_italic_content] = "italic_content",
  [sym_http_link] = "http_link",
  [sym_whitespace_anchor] = "whitespace_anchor",
  [sym_dynamic_indicator] = "dynamic_indicator",
  [sym__text] = "_text",
  [sym_title_content] = "title_content",
  [sym_link_id] = "link_id",
  [sym_pointer_id] = "pointer_id",
  [sym_file_path] = "file_path",
  [sym_meta_key] = "meta_key",
  [sym_embed_content] = "embed_content",
  [sym_document] = "document",
  [sym__element] = "_element",
  [sym_inline_node] = "inline_node",
  [sym_embedded_syntax] = "embedded_syntax",
  [sym_frame] = "frame",
  [sym__frame_element] = "_frame_element",
  [sym_call] = "call",
  [sym__call_element] = "_call_element",
  [sym_raw] = "raw",
  [sym_node_pointer] = "node_pointer",
  [sym_cross_project_link] = "cross_project_link",
  [sym_file_link] = "file_link",
  [sym_node_link] = "node_link",
  [sym_link_modifier] = "link_modifier",
  [sym_metadata_entry] = "metadata_entry",
  [sym_node_title] = "node_title",
  [sym_bold_text] = "bold_text",
  [sym_italic_text] = "italic_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_frame_repeat1] = "frame_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_dynamic_marker] = sym_dynamic_marker,
  [sym_embed_open] = sym_embed_open,
  [sym_embed_close] = sym_embed_close,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_call_name] = sym_call_name,
  [sym_call_flag] = sym_call_flag,
  [sym_virtual_target] = sym_virtual_target,
  [sym_format_string] = sym_format_string,
  [sym_call_separator] = sym_call_separator,
  [sym_call_asterisk] = sym_call_asterisk,
  [sym_frame_target_marker] = sym_frame_target_marker,
  [sym__call_text] = sym__call_text,
  [sym__frame_text] = sym__frame_text,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_raw_content] = sym_raw_content,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_project_ref] = sym_project_ref,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_link_position] = sym_link_position,
  [sym_other_project_link] = sym_other_project_link,
  [sym_timestamp] = sym_timestamp,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_meta_stars] = sym_meta_stars,
  [sym_meta_value] = sym_meta_value,
  [sym_hash_meta] = sym_hash_meta,
  [anon_sym__] = anon_sym__,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_bold_content] = sym_bold_content,
  [anon_sym___] = anon_sym___,
  [sym_italic_content] = sym_italic_content,
  [sym_http_link] = sym_http_link,
  [sym_whitespace_anchor] = sym_whitespace_anchor,
  [sym_dynamic_indicator] = sym_dynamic_indicator,
  [sym__text] = sym__text,
  [sym_title_content] = sym_title_content,
  [sym_link_id] = sym_link_id,
  [sym_pointer_id] = sym_pointer_id,
  [sym_file_path] = sym_file_path,
  [sym_meta_key] = sym_meta_key,
  [sym_embed_content] = sym_embed_content,
  [sym_document] = sym_document,
  [sym__element] = sym__element,
  [sym_inline_node] = sym_inline_node,
  [sym_embedded_syntax] = sym_embedded_syntax,
  [sym_frame] = sym_frame,
  [sym__frame_element] = sym__frame_element,
  [sym_call] = sym_call,
  [sym__call_element] = sym__call_element,
  [sym_raw] = sym_raw,
  [sym_node_pointer] = sym_node_pointer,
  [sym_cross_project_link] = sym_cross_project_link,
  [sym_file_link] = sym_file_link,
  [sym_node_link] = sym_node_link,
  [sym_link_modifier] = sym_link_modifier,
  [sym_metadata_entry] = sym_metadata_entry,
  [sym_node_title] = sym_node_title,
  [sym_bold_text] = sym_bold_text,
  [sym_italic_text] = sym_italic_text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_frame_repeat1] = aux_sym_frame_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_dynamic_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_embed_open] = {
    .visible = true,
    .named = true,
  },
  [sym_embed_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
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
  [sym_call_name] = {
    .visible = true,
    .named = true,
  },
  [sym_call_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_virtual_target] = {
    .visible = true,
    .named = true,
  },
  [sym_format_string] = {
    .visible = true,
    .named = true,
  },
  [sym_call_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_call_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_target_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__call_text] = {
    .visible = false,
    .named = true,
  },
  [sym__frame_text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_project_ref] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_link_position] = {
    .visible = true,
    .named = true,
  },
  [sym_other_project_link] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_meta_stars] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_value] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_bold_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym___] = {
    .visible = true,
    .named = false,
  },
  [sym_italic_content] = {
    .visible = true,
    .named = true,
  },
  [sym_http_link] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_indicator] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_title_content] = {
    .visible = true,
    .named = true,
  },
  [sym_link_id] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_id] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_key] = {
    .visible = true,
    .named = true,
  },
  [sym_embed_content] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_node] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_frame] = {
    .visible = true,
    .named = true,
  },
  [sym__frame_element] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__call_element] = {
    .visible = false,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_node_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_project_link] = {
    .visible = true,
    .named = true,
  },
  [sym_file_link] = {
    .visible = true,
    .named = true,
  },
  [sym_node_link] = {
    .visible = true,
    .named = true,
  },
  [sym_link_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_node_title] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_text] = {
    .visible = true,
    .named = true,
  },
  [sym_italic_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_assigner = 1,
  field_close = 2,
  field_content = 3,
  field_dynamic = 4,
  field_id = 5,
  field_key = 6,
  field_marker = 7,
  field_missing = 8,
  field_modifier = 9,
  field_name = 10,
  field_open = 11,
  field_path = 12,
  field_position = 13,
  field_project = 14,
  field_tag_descendants = 15,
  field_tag_self = 16,
  field_title = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assigner] = "assigner",
  [field_close] = "close",
  [field_content] = "content",
  [field_dynamic] = "dynamic",
  [field_id] = "id",
  [field_key] = "key",
  [field_marker] = "marker",
  [field_missing] = "missing",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_open] = "open",
  [field_path] = "path",
  [field_position] = "position",
  [field_project] = "project",
  [field_tag_descendants] = "tag_descendants",
  [field_tag_self] = "tag_self",
  [field_title] = "title",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 3},
  [11] = {.index = 24, .length = 3},
  [12] = {.index = 27, .length = 3},
  [13] = {.index = 30, .length = 1},
  [14] = {.index = 31, .length = 4},
  [15] = {.index = 35, .length = 3},
  [16] = {.index = 38, .length = 4},
  [17] = {.index = 42, .length = 4},
  [18] = {.index = 46, .length = 4},
  [19] = {.index = 50, .length = 4},
  [20] = {.index = 54, .length = 4},
  [21] = {.index = 58, .length = 4},
  [22] = {.index = 62, .length = 5},
  [23] = {.index = 67, .length = 5},
  [24] = {.index = 72, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_marker, 1},
    {field_title, 0},
  [2] =
    {field_assigner, 1},
    {field_key, 0},
  [4] =
    {field_close, 1},
    {field_open, 0},
  [6] =
    {field_project, 0},
  [7] =
    {field_assigner, 1},
    {field_key, 0},
    {field_value, 2},
  [10] =
    {field_close, 2},
    {field_dynamic, 1},
    {field_open, 0},
  [13] =
    {field_close, 2},
    {field_open, 0},
  [15] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [18] =
    {field_close, 2},
    {field_id, 1},
    {field_open, 0},
  [21] =
    {field_assigner, 2},
    {field_key, 1},
    {field_tag_self, 0},
  [24] =
    {field_assigner, 2},
    {field_key, 1},
    {field_tag_descendants, 0},
  [27] =
    {field_close, 3},
    {field_dynamic, 1},
    {field_open, 0},
  [30] =
    {field_name, 0},
  [31] =
    {field_close, 2},
    {field_id, 1},
    {field_open, 0},
    {field_position, 3},
  [35] =
    {field_close, 3},
    {field_open, 0},
    {field_path, 2},
  [38] =
    {field_close, 3},
    {field_id, 2},
    {field_modifier, 1},
    {field_open, 0},
  [42] =
    {field_assigner, 2},
    {field_key, 1},
    {field_tag_self, 0},
    {field_value, 3},
  [46] =
    {field_assigner, 3},
    {field_key, 2},
    {field_tag_descendants, 1},
    {field_tag_self, 0},
  [50] =
    {field_assigner, 2},
    {field_key, 1},
    {field_tag_descendants, 0},
    {field_value, 3},
  [54] =
    {field_close, 3},
    {field_open, 0},
    {field_path, 2},
    {field_position, 4},
  [58] =
    {field_close, 4},
    {field_missing, 2},
    {field_open, 0},
    {field_path, 3},
  [62] =
    {field_close, 3},
    {field_id, 2},
    {field_modifier, 1},
    {field_open, 0},
    {field_position, 4},
  [67] =
    {field_assigner, 3},
    {field_key, 2},
    {field_tag_descendants, 1},
    {field_tag_self, 0},
    {field_value, 4},
  [72] =
    {field_close, 4},
    {field_missing, 2},
    {field_open, 0},
    {field_path, 3},
    {field_position, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 6,
  [11] = 7,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 15,
  [23] = 23,
  [24] = 14,
  [25] = 23,
  [26] = 13,
  [27] = 16,
  [28] = 28,
  [29] = 28,
  [30] = 19,
  [31] = 17,
  [32] = 20,
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
  [43] = 33,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 46,
  [52] = 49,
  [53] = 48,
  [54] = 47,
  [55] = 45,
  [56] = 38,
  [57] = 44,
  [58] = 35,
  [59] = 59,
  [60] = 42,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 40,
  [65] = 39,
  [66] = 37,
  [67] = 67,
  [68] = 68,
  [69] = 36,
  [70] = 68,
  [71] = 71,
  [72] = 50,
  [73] = 34,
  [74] = 74,
  [75] = 41,
  [76] = 74,
  [77] = 71,
  [78] = 67,
  [79] = 63,
  [80] = 62,
  [81] = 81,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 13,
  [90] = 16,
  [91] = 20,
  [92] = 23,
  [93] = 28,
  [94] = 19,
  [95] = 13,
  [96] = 16,
  [97] = 20,
  [98] = 23,
  [99] = 28,
  [100] = 19,
  [101] = 38,
  [102] = 62,
  [103] = 67,
  [104] = 71,
  [105] = 74,
  [106] = 68,
  [107] = 36,
  [108] = 62,
  [109] = 67,
  [110] = 71,
  [111] = 74,
  [112] = 112,
  [113] = 68,
  [114] = 114,
  [115] = 36,
  [116] = 33,
  [117] = 117,
  [118] = 117,
  [119] = 117,
  [120] = 117,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 127,
  [130] = 127,
  [131] = 125,
  [132] = 132,
  [133] = 126,
  [134] = 132,
  [135] = 132,
  [136] = 136,
  [137] = 128,
  [138] = 128,
  [139] = 128,
  [140] = 132,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 142,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 141,
  [155] = 142,
  [156] = 156,
  [157] = 145,
  [158] = 143,
  [159] = 159,
  [160] = 156,
  [161] = 147,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 162,
  [168] = 152,
  [169] = 141,
  [170] = 159,
  [171] = 162,
  [172] = 163,
  [173] = 164,
  [174] = 166,
  [175] = 141,
  [176] = 142,
  [177] = 162,
  [178] = 163,
  [179] = 164,
  [180] = 166,
  [181] = 181,
  [182] = 163,
  [183] = 183,
  [184] = 184,
  [185] = 149,
  [186] = 164,
  [187] = 165,
  [188] = 144,
  [189] = 181,
  [190] = 166,
  [191] = 146,
  [192] = 151,
  [193] = 181,
  [194] = 194,
  [195] = 183,
  [196] = 184,
  [197] = 181,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 59,
        '!', 90,
        '$', 44,
        '%', 58,
        '(', 39,
        ')', 40,
        '*', 49,
        '+', 98,
        '.', 141,
        '/', 87,
        ':', 92,
        ';', 48,
        '<', 68,
        '=', 62,
        '>', 50,
        '?', 88,
        '[', 66,
        ']', 144,
        '_', 60,
        '`', 80,
        '{', 31,
        '|', 83,
        '}', 33,
        '~', 143,
        '-', 167,
        '@', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 151,
        '#', 164,
        '%', 150,
        '*', 102,
        '+', 98,
        '.', 141,
        ':', 163,
        '<', 166,
        '=', 156,
        '[', 157,
        ']', 144,
        '_', 158,
        '`', 80,
        'h', 161,
        '{', 31,
        '|', 83,
        '}', 33,
        '~', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 151,
        '#', 164,
        '%', 150,
        '*', 102,
        '+', 98,
        '.', 141,
        '<', 166,
        '=', 156,
        '[', 157,
        ']', 144,
        '_', 158,
        '`', 80,
        'h', 161,
        '{', 31,
        '|', 83,
        '}', 33,
        '~', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 151,
        '#', 124,
        '%', 110,
        '*', 103,
        '+', 99,
        '.', 141,
        ';', 167,
        '<', 123,
        '=', 116,
        '[', 118,
        ']', 127,
        '_', 119,
        '`', 81,
        'h', 122,
        '{', 32,
        '|', 84,
        '}', 33,
        '~', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 17,
        '!', 90,
        '%', 11,
        '(', 39,
        '*', 104,
        '/', 87,
        ':', 91,
        '?', 88,
      );
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 72,
        '$', 45,
        ')', 40,
        '*', 49,
        '-', 22,
        ':', 71,
        ';', 48,
        '<', 70,
        '=', 65,
        '@', 23,
        '|', 83,
      );
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 72,
        '$', 45,
        ')', 40,
        '*', 49,
        '-', 22,
        ';', 48,
        '<', 70,
        '=', 65,
        '@', 23,
        '|', 83,
      );
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(35);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '-', 22,
        '.', 141,
        ':', 78,
        '<', 77,
        '=', 76,
        '>', 50,
        '@', 23,
        ']', 20,
        '`', 80,
        '|', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '@' || '[' < lookahead)) ADVANCE(79);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '-', 22,
        '.', 141,
        '<', 77,
        '=', 76,
        '>', 50,
        '@', 23,
        ']', 20,
        '`', 80,
        '|', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '@' || '[' < lookahead)) ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(80);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(133);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(136);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(6);
      END_STATE();
    case 27:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 151,
        '#', 164,
        '%', 150,
        '*', 102,
        '+', 98,
        '.', 141,
        ':', 163,
        '<', 166,
        '=', 156,
        '[', 157,
        '_', 158,
        '`', 80,
        'h', 161,
        '{', 31,
        '|', 83,
        '~', 143,
        ']', 144,
        '}', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 151,
        '#', 164,
        '%', 150,
        '*', 102,
        '+', 98,
        '.', 141,
        '<', 166,
        '=', 156,
        '[', 157,
        '_', 158,
        '`', 80,
        'h', 161,
        '{', 31,
        '|', 83,
        '~', 143,
        ']', 144,
        '}', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 151,
        '#', 124,
        '%', 110,
        '*', 103,
        '+', 99,
        '.', 141,
        ';', 167,
        '<', 123,
        '=', 116,
        '[', 118,
        ']', 127,
        '_', 119,
        '`', 81,
        'h', 122,
        '{', 32,
        '|', 84,
        '}', 144,
        '~', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_embed_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_embed_close);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_call_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_call_flag);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_virtual_target);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_format_string);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_format_string);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_format_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_format_string);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_call_separator);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_call_asterisk);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_frame_target_marker);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__call_text);
      ADVANCE_MAP(
        '\n', 59,
        '.', 141,
        '>', 69,
        '[', 73,
        '`', 73,
        '<', 67,
        '{', 67,
        '}', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(6);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__call_text);
      ADVANCE_MAP(
        '"', 69,
        ']', 6,
        '|', 6,
        '\n', 56,
        '<', 56,
        '[', 56,
        '`', 56,
        '{', 56,
        '}', 56,
      );
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__call_text);
      ADVANCE_MAP(
        '"', 94,
        ']', 6,
        '|', 6,
        '\n', 56,
        '<', 56,
        '[', 56,
        '`', 56,
        '{', 56,
        '}', 56,
      );
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(6);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__call_text);
      ADVANCE_MAP(
        '%', 35,
        '>', 69,
        '[', 73,
        '`', 73,
        '\n', 67,
        '<', 67,
        '{', 67,
        '}', 67,
      );
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '>' ||
          lookahead == '[' ||
          lookahead == '`') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__call_text);
      ADVANCE_MAP(
        '>', 69,
        '_', 134,
        '[', 73,
        '`', 73,
        '\n', 67,
        '<', 67,
        '{', 67,
        '}', 67,
      );
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[' ||
          lookahead == '`') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '[' ||
          lookahead == '`') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__call_text);
      ADVANCE_MAP(
        '>', 95,
        '[', 64,
        '`', 64,
        '\n', 67,
        '<', 67,
        '=', 67,
        '$', 75,
        ')', 75,
        '*', 75,
        ';', 75,
      );
      if (lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '=') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '>' ||
          lookahead == '[' ||
          lookahead == '`') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '>' ||
          lookahead == '[' ||
          lookahead == '`') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == ';') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/' ||
          lookahead == '<') ADVANCE(67);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__call_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/' ||
          lookahead == '<') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__call_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__call_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__call_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__frame_text);
      if (lookahead == '.') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '>' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__frame_text);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '=') ADVANCE(79);
      if (lookahead == '-' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__frame_text);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '-' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__frame_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/' ||
          lookahead == '<') ADVANCE(79);
      if (lookahead == '>' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__frame_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '>' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__frame_text);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '>' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_project_ref);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_link_position);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_other_project_link);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == ')' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ';' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(64);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == ';' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_meta_stars);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_meta_stars);
      if (lookahead == '*') ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_meta_stars);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_meta_stars);
      if (lookahead == '*') ADVANCE(101);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '.') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_meta_value);
      ADVANCE_MAP(
        '"', 86,
        ';', 148,
        '\n', 7,
        '}', 7,
        '<', 107,
        '[', 107,
        ']', 107,
        '`', 107,
        '{', 107,
        '|', 107,
      );
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\n' ||
          lookahead == ';' ||
          lookahead == '}') ADVANCE(7);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_meta_value);
      ADVANCE_MAP(
        '"', 126,
        ';', 148,
        '\n', 7,
        '}', 7,
        '<', 107,
        '[', 107,
        ']', 107,
        '`', 107,
        '{', 107,
        '|', 107,
      );
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < ':' || '<' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < ':' || '<' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == ';' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == ';' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '<') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(117);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '`' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '`' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_meta_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_hash_meta);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_hash_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_bold_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym___);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_italic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_http_link);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '|') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_http_link);
      if (lookahead == ';' ||
          lookahead == '}') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_http_link);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_http_link);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_whitespace_anchor);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_dynamic_indicator);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_dynamic_indicator);
      if (lookahead == '?') ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '.') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\n' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '%') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '.') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '[') ADVANCE(36);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '<' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(139);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '`' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '`' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != '<') ADVANCE(16);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(167);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 28, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 28, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 29, .external_lex_state = 2},
  [18] = {.lex_state = 29, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 2},
  [22] = {.lex_state = 29, .external_lex_state = 2},
  [23] = {.lex_state = 27, .external_lex_state = 2},
  [24] = {.lex_state = 29, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 27, .external_lex_state = 2},
  [27] = {.lex_state = 27, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 27, .external_lex_state = 2},
  [30] = {.lex_state = 27, .external_lex_state = 2},
  [31] = {.lex_state = 3, .external_lex_state = 2},
  [32] = {.lex_state = 27, .external_lex_state = 2},
  [33] = {.lex_state = 28, .external_lex_state = 2},
  [34] = {.lex_state = 2, .external_lex_state = 2},
  [35] = {.lex_state = 28, .external_lex_state = 2},
  [36] = {.lex_state = 2, .external_lex_state = 2},
  [37] = {.lex_state = 2, .external_lex_state = 2},
  [38] = {.lex_state = 28, .external_lex_state = 2},
  [39] = {.lex_state = 2, .external_lex_state = 2},
  [40] = {.lex_state = 2, .external_lex_state = 2},
  [41] = {.lex_state = 28, .external_lex_state = 2},
  [42] = {.lex_state = 28, .external_lex_state = 2},
  [43] = {.lex_state = 2, .external_lex_state = 2},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 28, .external_lex_state = 2},
  [47] = {.lex_state = 2, .external_lex_state = 2},
  [48] = {.lex_state = 2, .external_lex_state = 2},
  [49] = {.lex_state = 2, .external_lex_state = 2},
  [50] = {.lex_state = 2, .external_lex_state = 2},
  [51] = {.lex_state = 2, .external_lex_state = 2},
  [52] = {.lex_state = 28, .external_lex_state = 2},
  [53] = {.lex_state = 28, .external_lex_state = 2},
  [54] = {.lex_state = 28, .external_lex_state = 2},
  [55] = {.lex_state = 28, .external_lex_state = 2},
  [56] = {.lex_state = 2, .external_lex_state = 2},
  [57] = {.lex_state = 28, .external_lex_state = 2},
  [58] = {.lex_state = 2, .external_lex_state = 2},
  [59] = {.lex_state = 2, .external_lex_state = 2},
  [60] = {.lex_state = 2, .external_lex_state = 2},
  [61] = {.lex_state = 28, .external_lex_state = 2},
  [62] = {.lex_state = 2, .external_lex_state = 2},
  [63] = {.lex_state = 2, .external_lex_state = 2},
  [64] = {.lex_state = 28, .external_lex_state = 2},
  [65] = {.lex_state = 28, .external_lex_state = 2},
  [66] = {.lex_state = 28, .external_lex_state = 2},
  [67] = {.lex_state = 2, .external_lex_state = 2},
  [68] = {.lex_state = 2, .external_lex_state = 2},
  [69] = {.lex_state = 28, .external_lex_state = 2},
  [70] = {.lex_state = 28, .external_lex_state = 2},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 28, .external_lex_state = 2},
  [73] = {.lex_state = 28, .external_lex_state = 2},
  [74] = {.lex_state = 2, .external_lex_state = 2},
  [75] = {.lex_state = 2, .external_lex_state = 2},
  [76] = {.lex_state = 28, .external_lex_state = 2},
  [77] = {.lex_state = 28, .external_lex_state = 2},
  [78] = {.lex_state = 28, .external_lex_state = 2},
  [79] = {.lex_state = 28, .external_lex_state = 2},
  [80] = {.lex_state = 28, .external_lex_state = 2},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 4, .external_lex_state = 3},
  [118] = {.lex_state = 4, .external_lex_state = 3},
  [119] = {.lex_state = 4, .external_lex_state = 3},
  [120] = {.lex_state = 4, .external_lex_state = 3},
  [121] = {.lex_state = 4, .external_lex_state = 3},
  [122] = {.lex_state = 4, .external_lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4, .external_lex_state = 4},
  [126] = {.lex_state = 4, .external_lex_state = 5},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 4, .external_lex_state = 6},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 4, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 4, .external_lex_state = 5},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 4, .external_lex_state = 6},
  [138] = {.lex_state = 4, .external_lex_state = 6},
  [139] = {.lex_state = 4, .external_lex_state = 6},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 28},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0, .external_lex_state = 6},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 5},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 0, .external_lex_state = 5},
  [189] = {.lex_state = 0, .external_lex_state = 6},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 5},
  [196] = {.lex_state = 24},
  [197] = {.lex_state = 0, .external_lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_dynamic_marker] = ACTIONS(1),
    [sym_embed_close] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_call_name] = ACTIONS(1),
    [sym_format_string] = ACTIONS(1),
    [sym_call_separator] = ACTIONS(1),
    [sym_call_asterisk] = ACTIONS(1),
    [sym_frame_target_marker] = ACTIONS(1),
    [sym__call_text] = ACTIONS(1),
    [sym__frame_text] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_link_position] = ACTIONS(1),
    [sym_other_project_link] = ACTIONS(1),
    [sym_timestamp] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [sym_whitespace_anchor] = ACTIONS(1),
    [sym_dynamic_indicator] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym_title_content] = ACTIONS(1),
    [sym_link_id] = ACTIONS(1),
    [sym_pointer_id] = ACTIONS(1),
    [sym_file_path] = ACTIONS(1),
    [sym_meta_key] = ACTIONS(1),
    [sym_embed_content] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(150),
    [sym__element] = STATE(4),
    [sym_inline_node] = STATE(4),
    [sym_embedded_syntax] = STATE(4),
    [sym_frame] = STATE(4),
    [sym_raw] = STATE(4),
    [sym_node_pointer] = STATE(4),
    [sym_cross_project_link] = STATE(4),
    [sym_file_link] = STATE(4),
    [sym_node_link] = STATE(4),
    [sym_metadata_entry] = STATE(4),
    [sym_node_title] = STATE(4),
    [sym_bold_text] = STATE(4),
    [sym_italic_text] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_embed_open] = ACTIONS(7),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [sym_project_ref] = ACTIONS(15),
    [sym_other_project_link] = ACTIONS(17),
    [sym_timestamp] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [sym_meta_stars] = ACTIONS(23),
    [sym_hash_meta] = ACTIONS(19),
    [anon_sym_STAR_STAR] = ACTIONS(25),
    [anon_sym___] = ACTIONS(27),
    [sym_http_link] = ACTIONS(19),
    [sym_whitespace_anchor] = ACTIONS(19),
    [sym_dynamic_indicator] = ACTIONS(19),
    [sym__text] = ACTIONS(17),
    [sym_title_content] = ACTIONS(29),
    [sym_meta_key] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym_dynamic_marker,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(49), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(51), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(10), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [70] = 17,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      sym_dynamic_marker,
    ACTIONS(69), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(71), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(6), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [140] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_embed_open,
    ACTIONS(9), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_BQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      sym_project_ref,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      sym_meta_stars,
    ACTIONS(25), 1,
      anon_sym_STAR_STAR,
    ACTIONS(27), 1,
      anon_sym___,
    ACTIONS(29), 1,
      sym_title_content,
    ACTIONS(31), 1,
      sym_meta_key,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(77), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(9), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [207] = 16,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(83), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(12), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [274] = 16,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(83), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(12), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [341] = 16,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(91), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(5), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [408] = 16,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(83), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(12), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [475] = 16,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      sym_embed_open,
    ACTIONS(103), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(106), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      sym_project_ref,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(124), 1,
      sym_meta_stars,
    ACTIONS(127), 1,
      anon_sym_STAR_STAR,
    ACTIONS(130), 1,
      anon_sym___,
    ACTIONS(133), 1,
      sym_title_content,
    ACTIONS(136), 1,
      sym_meta_key,
    ACTIONS(115), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(118), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(9), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [542] = 16,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(83), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(12), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [609] = 16,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_embed_open,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      sym_project_ref,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      sym_meta_stars,
    ACTIONS(57), 1,
      anon_sym_STAR_STAR,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(61), 1,
      sym_title_content,
    ACTIONS(63), 1,
      sym_meta_key,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(145), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(8), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [676] = 16,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      sym_embed_open,
    ACTIONS(153), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(156), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(162), 1,
      sym_project_ref,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(174), 1,
      sym_meta_stars,
    ACTIONS(177), 1,
      anon_sym_STAR_STAR,
    ACTIONS(180), 1,
      anon_sym___,
    ACTIONS(183), 1,
      sym_title_content,
    ACTIONS(186), 1,
      sym_meta_key,
    ACTIONS(165), 2,
      sym_other_project_link,
      sym__text,
    ACTIONS(168), 5,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    STATE(12), 14,
      sym__element,
      sym_inline_node,
      sym_embedded_syntax,
      sym_frame,
      sym_raw,
      sym_node_pointer,
      sym_cross_project_link,
      sym_file_link,
      sym_node_link,
      sym_metadata_entry,
      sym_node_title,
      sym_bold_text,
      sym_italic_text,
      aux_sym_document_repeat1,
  [743] = 3,
    ACTIONS(191), 1,
      sym_link_position,
    ACTIONS(193), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(189), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [771] = 3,
    ACTIONS(199), 1,
      sym_meta_value,
    ACTIONS(195), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
    ACTIONS(197), 10,
      sym_title_content,
      sym_meta_key,
      anon_sym_RBRACE,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [799] = 3,
    ACTIONS(205), 1,
      sym_meta_value,
    ACTIONS(201), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
    ACTIONS(203), 10,
      sym_title_content,
      sym_meta_key,
      anon_sym_RBRACE,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [827] = 3,
    ACTIONS(209), 1,
      sym_link_position,
    ACTIONS(211), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(207), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [855] = 3,
    ACTIONS(217), 1,
      sym_meta_value,
    ACTIONS(213), 10,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    ACTIONS(215), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
  [883] = 3,
    ACTIONS(223), 1,
      sym_meta_value,
    ACTIONS(219), 10,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    ACTIONS(221), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
  [911] = 3,
    ACTIONS(227), 1,
      sym_link_position,
    ACTIONS(229), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(225), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [939] = 3,
    ACTIONS(233), 1,
      sym_link_position,
    ACTIONS(235), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(231), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [967] = 3,
    ACTIONS(237), 1,
      sym_meta_value,
    ACTIONS(219), 10,
      sym_title_content,
      sym_meta_key,
      anon_sym_RBRACE,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    ACTIONS(221), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
  [995] = 3,
    ACTIONS(239), 1,
      sym_meta_value,
    ACTIONS(201), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
    ACTIONS(203), 10,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1023] = 3,
    ACTIONS(243), 1,
      sym_link_position,
    ACTIONS(245), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(241), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1051] = 3,
    ACTIONS(247), 1,
      sym_meta_value,
    ACTIONS(195), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
    ACTIONS(197), 10,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1079] = 3,
    ACTIONS(249), 1,
      sym_link_position,
    ACTIONS(245), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(241), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1107] = 3,
    ACTIONS(251), 1,
      sym_link_position,
    ACTIONS(193), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(189), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1135] = 3,
    ACTIONS(253), 1,
      sym_link_position,
    ACTIONS(211), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(207), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1163] = 3,
    ACTIONS(257), 1,
      sym_link_position,
    ACTIONS(259), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(255), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1191] = 3,
    ACTIONS(261), 1,
      sym_link_position,
    ACTIONS(259), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(255), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1219] = 3,
    ACTIONS(263), 1,
      sym_link_position,
    ACTIONS(229), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(225), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1247] = 3,
    ACTIONS(265), 1,
      sym_meta_value,
    ACTIONS(213), 10,
      sym_title_content,
      sym_meta_key,
      anon_sym_RBRACE,
      sym_embed_open,
      sym_project_ref,
      sym_timestamp,
      sym_hash_meta,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
    ACTIONS(215), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      anon_sym_PLUS,
      sym_meta_stars,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym__text,
  [1275] = 3,
    ACTIONS(267), 1,
      sym_link_position,
    ACTIONS(235), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(231), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1303] = 2,
    ACTIONS(271), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(269), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1328] = 2,
    ACTIONS(275), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(273), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1353] = 2,
    ACTIONS(279), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(277), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1378] = 2,
    ACTIONS(283), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(281), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1403] = 2,
    ACTIONS(287), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(285), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1428] = 2,
    ACTIONS(291), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(289), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1453] = 2,
    ACTIONS(295), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(293), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1478] = 2,
    ACTIONS(299), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(297), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1503] = 2,
    ACTIONS(303), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(301), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1528] = 2,
    ACTIONS(307), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(305), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1553] = 2,
    ACTIONS(271), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(269), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1578] = 2,
    ACTIONS(311), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(309), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1603] = 2,
    ACTIONS(315), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(313), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1628] = 2,
    ACTIONS(319), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(317), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1653] = 2,
    ACTIONS(323), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(321), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1678] = 2,
    ACTIONS(327), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(325), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1703] = 2,
    ACTIONS(331), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(329), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1728] = 2,
    ACTIONS(335), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(333), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1753] = 2,
    ACTIONS(319), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(317), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1778] = 2,
    ACTIONS(331), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(329), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1803] = 2,
    ACTIONS(327), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(325), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1828] = 2,
    ACTIONS(323), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(321), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1853] = 2,
    ACTIONS(315), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(313), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1878] = 2,
    ACTIONS(291), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(289), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1903] = 2,
    ACTIONS(311), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(309), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1928] = 2,
    ACTIONS(279), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(277), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1953] = 2,
    ACTIONS(339), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(337), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [1978] = 2,
    ACTIONS(307), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(305), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2003] = 2,
    ACTIONS(339), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(337), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2028] = 2,
    ACTIONS(343), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(341), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2053] = 2,
    ACTIONS(347), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(345), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2078] = 2,
    ACTIONS(299), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(297), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2103] = 2,
    ACTIONS(295), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(293), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2128] = 2,
    ACTIONS(287), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(285), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2153] = 2,
    ACTIONS(351), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(349), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2178] = 2,
    ACTIONS(355), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(353), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2203] = 2,
    ACTIONS(283), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(281), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2228] = 2,
    ACTIONS(355), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(353), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2253] = 2,
    ACTIONS(359), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(357), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2278] = 2,
    ACTIONS(335), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(333), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2303] = 2,
    ACTIONS(275), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(273), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2328] = 2,
    ACTIONS(363), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(361), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2353] = 2,
    ACTIONS(303), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(301), 17,
      sym_title_content,
      sym_meta_key,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2378] = 2,
    ACTIONS(363), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(361), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2403] = 2,
    ACTIONS(359), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(357), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2428] = 2,
    ACTIONS(351), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(349), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2453] = 2,
    ACTIONS(347), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(345), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2478] = 2,
    ACTIONS(343), 3,
      sym_other_project_link,
      sym_meta_stars,
      sym__text,
    ACTIONS(341), 17,
      sym_title_content,
      sym_meta_key,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_embed_open,
      anon_sym_LBRACK_LBRACK,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_project_ref,
      sym_timestamp,
      anon_sym_PLUS,
      sym_hash_meta,
      anon_sym_STAR_STAR,
      anon_sym___,
      sym_http_link,
      sym_whitespace_anchor,
      sym_dynamic_indicator,
  [2503] = 7,
    ACTIONS(365), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(367), 1,
      sym_call_name,
    ACTIONS(373), 1,
      sym__frame_text,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(370), 6,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
    STATE(81), 7,
      sym__frame_element,
      sym_call,
      sym_raw,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_frame_repeat1,
  [2536] = 7,
    ACTIONS(382), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(384), 1,
      sym_call_name,
    ACTIONS(388), 1,
      sym__frame_text,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(386), 6,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
    STATE(85), 7,
      sym__frame_element,
      sym_call,
      sym_raw,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_frame_repeat1,
  [2569] = 7,
    ACTIONS(384), 1,
      sym_call_name,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(398), 1,
      sym__frame_text,
    ACTIONS(396), 6,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
    STATE(84), 7,
      sym__frame_element,
      sym_call,
      sym_raw,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_frame_repeat1,
  [2602] = 7,
    ACTIONS(384), 1,
      sym_call_name,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(404), 1,
      sym__frame_text,
    ACTIONS(402), 6,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
    STATE(81), 7,
      sym__frame_element,
      sym_call,
      sym_raw,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_frame_repeat1,
  [2635] = 7,
    ACTIONS(384), 1,
      sym_call_name,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(404), 1,
      sym__frame_text,
    ACTIONS(406), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(402), 6,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
    STATE(81), 7,
      sym__frame_element,
      sym_call,
      sym_raw,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_frame_repeat1,
  [2668] = 5,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym__call_text,
    ACTIONS(416), 1,
      anon_sym_PIPE,
    STATE(86), 5,
      sym__call_element,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_call_repeat1,
    ACTIONS(410), 8,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2695] = 5,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      sym__call_text,
    ACTIONS(425), 1,
      anon_sym_PIPE,
    STATE(86), 5,
      sym__call_element,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_call_repeat1,
    ACTIONS(421), 8,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2722] = 5,
    ACTIONS(425), 1,
      anon_sym_PIPE,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      sym__call_text,
    STATE(87), 5,
      sym__call_element,
      sym_node_pointer,
      sym_file_link,
      sym_node_link,
      aux_sym_call_repeat1,
    ACTIONS(429), 8,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2749] = 3,
    ACTIONS(193), 1,
      sym__frame_text,
    ACTIONS(433), 1,
      sym_link_position,
    ACTIONS(189), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2768] = 3,
    ACTIONS(211), 1,
      sym__frame_text,
    ACTIONS(435), 1,
      sym_link_position,
    ACTIONS(207), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2787] = 3,
    ACTIONS(235), 1,
      sym__frame_text,
    ACTIONS(437), 1,
      sym_link_position,
    ACTIONS(231), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2806] = 3,
    ACTIONS(245), 1,
      sym__frame_text,
    ACTIONS(439), 1,
      sym_link_position,
    ACTIONS(241), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2825] = 3,
    ACTIONS(259), 1,
      sym__frame_text,
    ACTIONS(441), 1,
      sym_link_position,
    ACTIONS(255), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2844] = 3,
    ACTIONS(229), 1,
      sym__frame_text,
    ACTIONS(443), 1,
      sym_link_position,
    ACTIONS(225), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2863] = 3,
    ACTIONS(193), 1,
      sym__call_text,
    ACTIONS(445), 1,
      sym_link_position,
    ACTIONS(189), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2882] = 3,
    ACTIONS(211), 1,
      sym__call_text,
    ACTIONS(447), 1,
      sym_link_position,
    ACTIONS(207), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2901] = 3,
    ACTIONS(235), 1,
      sym__call_text,
    ACTIONS(449), 1,
      sym_link_position,
    ACTIONS(231), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2920] = 3,
    ACTIONS(245), 1,
      sym__call_text,
    ACTIONS(451), 1,
      sym_link_position,
    ACTIONS(241), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2939] = 3,
    ACTIONS(259), 1,
      sym__call_text,
    ACTIONS(453), 1,
      sym_link_position,
    ACTIONS(255), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2958] = 3,
    ACTIONS(229), 1,
      sym__call_text,
    ACTIONS(455), 1,
      sym_link_position,
    ACTIONS(225), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [2977] = 2,
    ACTIONS(291), 1,
      sym__frame_text,
    ACTIONS(289), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [2993] = 2,
    ACTIONS(343), 1,
      sym__frame_text,
    ACTIONS(341), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3009] = 2,
    ACTIONS(351), 1,
      sym__call_text,
    ACTIONS(349), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [3025] = 2,
    ACTIONS(359), 1,
      sym__call_text,
    ACTIONS(357), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [3041] = 2,
    ACTIONS(363), 1,
      sym__call_text,
    ACTIONS(361), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [3057] = 2,
    ACTIONS(355), 1,
      sym__call_text,
    ACTIONS(353), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [3073] = 2,
    ACTIONS(283), 1,
      sym__call_text,
    ACTIONS(281), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [3089] = 2,
    ACTIONS(343), 1,
      sym__call_text,
    ACTIONS(341), 10,
      anon_sym_RPAREN,
      sym_call_flag,
      sym_virtual_target,
      sym_format_string,
      sym_call_separator,
      sym_call_asterisk,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_hash_meta,
  [3105] = 2,
    ACTIONS(351), 1,
      sym__frame_text,
    ACTIONS(349), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3121] = 2,
    ACTIONS(359), 1,
      sym__frame_text,
    ACTIONS(357), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3137] = 2,
    ACTIONS(363), 1,
      sym__frame_text,
    ACTIONS(361), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3153] = 2,
    ACTIONS(459), 1,
      sym__frame_text,
    ACTIONS(457), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3169] = 2,
    ACTIONS(355), 1,
      sym__frame_text,
    ACTIONS(353), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3185] = 2,
    ACTIONS(463), 1,
      sym__frame_text,
    ACTIONS(461), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3201] = 2,
    ACTIONS(283), 1,
      sym__frame_text,
    ACTIONS(281), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3217] = 2,
    ACTIONS(271), 1,
      sym__frame_text,
    ACTIONS(269), 10,
      anon_sym_RBRACK_RBRACK,
      sym_call_name,
      sym_call_flag,
      sym_virtual_target,
      sym_frame_target_marker,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      sym_other_project_link,
      sym_timestamp,
      sym_whitespace_anchor,
  [3233] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(469), 1,
      sym_link_id,
    ACTIONS(471), 1,
      sym_pointer_id,
    STATE(135), 1,
      sym_link_modifier,
    ACTIONS(467), 3,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_COLON,
  [3251] = 5,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      sym_link_id,
    ACTIONS(477), 1,
      sym_pointer_id,
    STATE(134), 1,
      sym_link_modifier,
    ACTIONS(467), 3,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_COLON,
  [3269] = 5,
    ACTIONS(479), 1,
      anon_sym_SLASH,
    ACTIONS(481), 1,
      sym_link_id,
    ACTIONS(483), 1,
      sym_pointer_id,
    STATE(140), 1,
      sym_link_modifier,
    ACTIONS(467), 3,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_COLON,
  [3287] = 5,
    ACTIONS(485), 1,
      anon_sym_SLASH,
    ACTIONS(487), 1,
      sym_link_id,
    ACTIONS(489), 1,
      sym_pointer_id,
    STATE(132), 1,
      sym_link_modifier,
    ACTIONS(467), 3,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_COLON,
  [3305] = 4,
    ACTIONS(469), 1,
      sym_link_id,
    ACTIONS(471), 1,
      sym_pointer_id,
    STATE(135), 1,
      sym_link_modifier,
    ACTIONS(467), 3,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_COLON,
  [3320] = 4,
    ACTIONS(475), 1,
      sym_link_id,
    ACTIONS(477), 1,
      sym_pointer_id,
    STATE(134), 1,
      sym_link_modifier,
    ACTIONS(467), 3,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_COLON,
  [3335] = 2,
    ACTIONS(491), 1,
      anon_sym_PIPE,
    STATE(46), 2,
      sym_node_pointer,
      sym_node_link,
  [3343] = 2,
    ACTIONS(493), 1,
      anon_sym_PIPE,
    STATE(51), 2,
      sym_node_pointer,
      sym_node_link,
  [3351] = 2,
    ACTIONS(495), 1,
      sym_embed_close,
    ACTIONS(497), 1,
      sym_embed_content,
  [3358] = 2,
    ACTIONS(499), 1,
      sym_meta_stars,
    ACTIONS(501), 1,
      sym_meta_key,
  [3365] = 2,
    ACTIONS(503), 1,
      anon_sym_BQUOTE,
    ACTIONS(505), 1,
      sym_raw_content,
  [3372] = 2,
    ACTIONS(507), 1,
      anon_sym_QMARK,
    ACTIONS(509), 1,
      sym_file_path,
  [3379] = 2,
    ACTIONS(511), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      sym_raw_content,
  [3386] = 2,
    ACTIONS(515), 1,
      anon_sym_BQUOTE,
    ACTIONS(517), 1,
      sym_raw_content,
  [3393] = 2,
    ACTIONS(519), 1,
      sym_embed_close,
    ACTIONS(521), 1,
      sym_embed_content,
  [3400] = 2,
    ACTIONS(523), 1,
      sym_link_id,
    ACTIONS(525), 1,
      sym_pointer_id,
  [3407] = 2,
    ACTIONS(527), 1,
      sym_meta_stars,
    ACTIONS(529), 1,
      sym_meta_key,
  [3414] = 2,
    ACTIONS(531), 1,
      sym_link_id,
    ACTIONS(533), 1,
      sym_pointer_id,
  [3421] = 2,
    ACTIONS(535), 1,
      sym_link_id,
    ACTIONS(537), 1,
      sym_pointer_id,
  [3428] = 1,
    ACTIONS(539), 2,
      sym_link_id,
      sym_pointer_id,
  [3433] = 2,
    ACTIONS(541), 1,
      anon_sym_QMARK,
    ACTIONS(543), 1,
      sym_file_path,
  [3440] = 2,
    ACTIONS(545), 1,
      anon_sym_QMARK,
    ACTIONS(547), 1,
      sym_file_path,
  [3447] = 2,
    ACTIONS(549), 1,
      anon_sym_QMARK,
    ACTIONS(551), 1,
      sym_file_path,
  [3454] = 2,
    ACTIONS(553), 1,
      sym_link_id,
    ACTIONS(555), 1,
      sym_pointer_id,
  [3461] = 1,
    ACTIONS(557), 1,
      anon_sym_GT,
  [3465] = 1,
    ACTIONS(559), 1,
      anon_sym_GT_GT,
  [3469] = 1,
    ACTIONS(561), 1,
      anon_sym_COLON_COLON,
  [3473] = 1,
    ACTIONS(563), 1,
      sym_meta_key,
  [3477] = 1,
    ACTIONS(565), 1,
      anon_sym_COLON_COLON,
  [3481] = 1,
    ACTIONS(567), 1,
      anon_sym__,
  [3485] = 1,
    ACTIONS(569), 1,
      anon_sym_COLON_COLON,
  [3489] = 1,
    ACTIONS(571), 1,
      anon_sym_GT_GT,
  [3493] = 1,
    ACTIONS(573), 1,
      sym_italic_content,
  [3497] = 1,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
  [3501] = 1,
    ACTIONS(577), 1,
      sym_embed_close,
  [3505] = 1,
    ACTIONS(579), 1,
      anon_sym_BQUOTE,
  [3509] = 1,
    ACTIONS(581), 1,
      anon_sym_BQUOTE,
  [3513] = 1,
    ACTIONS(583), 1,
      anon_sym_GT,
  [3517] = 1,
    ACTIONS(585), 1,
      anon_sym_GT_GT,
  [3521] = 1,
    ACTIONS(587), 1,
      anon_sym___,
  [3525] = 1,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON,
  [3529] = 1,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
  [3533] = 1,
    ACTIONS(593), 1,
      anon_sym_STAR_STAR,
  [3537] = 1,
    ACTIONS(595), 1,
      anon_sym___,
  [3541] = 1,
    ACTIONS(597), 1,
      anon_sym_COLON_COLON,
  [3545] = 1,
    ACTIONS(599), 1,
      anon_sym_GT,
  [3549] = 1,
    ACTIONS(601), 1,
      anon_sym_GT,
  [3553] = 1,
    ACTIONS(603), 1,
      anon_sym_GT_GT,
  [3557] = 1,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
  [3561] = 1,
    ACTIONS(607), 1,
      anon_sym_GT,
  [3565] = 1,
    ACTIONS(609), 1,
      anon_sym_GT,
  [3569] = 1,
    ACTIONS(611), 1,
      anon_sym_BQUOTE,
  [3573] = 1,
    ACTIONS(613), 1,
      anon_sym_GT,
  [3577] = 1,
    ACTIONS(615), 1,
      anon_sym_STAR_STAR,
  [3581] = 1,
    ACTIONS(617), 1,
      anon_sym_GT,
  [3585] = 1,
    ACTIONS(619), 1,
      anon_sym_GT,
  [3589] = 1,
    ACTIONS(621), 1,
      anon_sym_GT_GT,
  [3593] = 1,
    ACTIONS(623), 1,
      anon_sym_GT,
  [3597] = 1,
    ACTIONS(625), 1,
      anon_sym_GT,
  [3601] = 1,
    ACTIONS(627), 1,
      anon_sym_GT_GT,
  [3605] = 1,
    ACTIONS(629), 1,
      anon_sym_GT,
  [3609] = 1,
    ACTIONS(631), 1,
      anon_sym_GT,
  [3613] = 1,
    ACTIONS(633), 1,
      anon_sym_GT_GT,
  [3617] = 1,
    ACTIONS(635), 1,
      anon_sym_GT,
  [3621] = 1,
    ACTIONS(637), 1,
      sym_file_path,
  [3625] = 1,
    ACTIONS(639), 1,
      anon_sym_GT,
  [3629] = 1,
    ACTIONS(641), 1,
      sym_meta_key,
  [3633] = 1,
    ACTIONS(643), 1,
      sym_bold_content,
  [3637] = 1,
    ACTIONS(645), 1,
      sym_italic_content,
  [3641] = 1,
    ACTIONS(647), 1,
      anon_sym_GT_GT,
  [3645] = 1,
    ACTIONS(649), 1,
      anon_sym_COLON_COLON,
  [3649] = 1,
    ACTIONS(651), 1,
      sym_meta_key,
  [3653] = 1,
    ACTIONS(653), 1,
      sym_file_path,
  [3657] = 1,
    ACTIONS(655), 1,
      anon_sym_GT,
  [3661] = 1,
    ACTIONS(657), 1,
      anon_sym__,
  [3665] = 1,
    ACTIONS(659), 1,
      sym_embed_close,
  [3669] = 1,
    ACTIONS(661), 1,
      sym_file_path,
  [3673] = 1,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
  [3677] = 1,
    ACTIONS(665), 1,
      sym_meta_key,
  [3681] = 1,
    ACTIONS(667), 1,
      sym_bold_content,
  [3685] = 1,
    ACTIONS(669), 1,
      sym_file_path,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 207,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 341,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 475,
  [SMALL_STATE(10)] = 542,
  [SMALL_STATE(11)] = 609,
  [SMALL_STATE(12)] = 676,
  [SMALL_STATE(13)] = 743,
  [SMALL_STATE(14)] = 771,
  [SMALL_STATE(15)] = 799,
  [SMALL_STATE(16)] = 827,
  [SMALL_STATE(17)] = 855,
  [SMALL_STATE(18)] = 883,
  [SMALL_STATE(19)] = 911,
  [SMALL_STATE(20)] = 939,
  [SMALL_STATE(21)] = 967,
  [SMALL_STATE(22)] = 995,
  [SMALL_STATE(23)] = 1023,
  [SMALL_STATE(24)] = 1051,
  [SMALL_STATE(25)] = 1079,
  [SMALL_STATE(26)] = 1107,
  [SMALL_STATE(27)] = 1135,
  [SMALL_STATE(28)] = 1163,
  [SMALL_STATE(29)] = 1191,
  [SMALL_STATE(30)] = 1219,
  [SMALL_STATE(31)] = 1247,
  [SMALL_STATE(32)] = 1275,
  [SMALL_STATE(33)] = 1303,
  [SMALL_STATE(34)] = 1328,
  [SMALL_STATE(35)] = 1353,
  [SMALL_STATE(36)] = 1378,
  [SMALL_STATE(37)] = 1403,
  [SMALL_STATE(38)] = 1428,
  [SMALL_STATE(39)] = 1453,
  [SMALL_STATE(40)] = 1478,
  [SMALL_STATE(41)] = 1503,
  [SMALL_STATE(42)] = 1528,
  [SMALL_STATE(43)] = 1553,
  [SMALL_STATE(44)] = 1578,
  [SMALL_STATE(45)] = 1603,
  [SMALL_STATE(46)] = 1628,
  [SMALL_STATE(47)] = 1653,
  [SMALL_STATE(48)] = 1678,
  [SMALL_STATE(49)] = 1703,
  [SMALL_STATE(50)] = 1728,
  [SMALL_STATE(51)] = 1753,
  [SMALL_STATE(52)] = 1778,
  [SMALL_STATE(53)] = 1803,
  [SMALL_STATE(54)] = 1828,
  [SMALL_STATE(55)] = 1853,
  [SMALL_STATE(56)] = 1878,
  [SMALL_STATE(57)] = 1903,
  [SMALL_STATE(58)] = 1928,
  [SMALL_STATE(59)] = 1953,
  [SMALL_STATE(60)] = 1978,
  [SMALL_STATE(61)] = 2003,
  [SMALL_STATE(62)] = 2028,
  [SMALL_STATE(63)] = 2053,
  [SMALL_STATE(64)] = 2078,
  [SMALL_STATE(65)] = 2103,
  [SMALL_STATE(66)] = 2128,
  [SMALL_STATE(67)] = 2153,
  [SMALL_STATE(68)] = 2178,
  [SMALL_STATE(69)] = 2203,
  [SMALL_STATE(70)] = 2228,
  [SMALL_STATE(71)] = 2253,
  [SMALL_STATE(72)] = 2278,
  [SMALL_STATE(73)] = 2303,
  [SMALL_STATE(74)] = 2328,
  [SMALL_STATE(75)] = 2353,
  [SMALL_STATE(76)] = 2378,
  [SMALL_STATE(77)] = 2403,
  [SMALL_STATE(78)] = 2428,
  [SMALL_STATE(79)] = 2453,
  [SMALL_STATE(80)] = 2478,
  [SMALL_STATE(81)] = 2503,
  [SMALL_STATE(82)] = 2536,
  [SMALL_STATE(83)] = 2569,
  [SMALL_STATE(84)] = 2602,
  [SMALL_STATE(85)] = 2635,
  [SMALL_STATE(86)] = 2668,
  [SMALL_STATE(87)] = 2695,
  [SMALL_STATE(88)] = 2722,
  [SMALL_STATE(89)] = 2749,
  [SMALL_STATE(90)] = 2768,
  [SMALL_STATE(91)] = 2787,
  [SMALL_STATE(92)] = 2806,
  [SMALL_STATE(93)] = 2825,
  [SMALL_STATE(94)] = 2844,
  [SMALL_STATE(95)] = 2863,
  [SMALL_STATE(96)] = 2882,
  [SMALL_STATE(97)] = 2901,
  [SMALL_STATE(98)] = 2920,
  [SMALL_STATE(99)] = 2939,
  [SMALL_STATE(100)] = 2958,
  [SMALL_STATE(101)] = 2977,
  [SMALL_STATE(102)] = 2993,
  [SMALL_STATE(103)] = 3009,
  [SMALL_STATE(104)] = 3025,
  [SMALL_STATE(105)] = 3041,
  [SMALL_STATE(106)] = 3057,
  [SMALL_STATE(107)] = 3073,
  [SMALL_STATE(108)] = 3089,
  [SMALL_STATE(109)] = 3105,
  [SMALL_STATE(110)] = 3121,
  [SMALL_STATE(111)] = 3137,
  [SMALL_STATE(112)] = 3153,
  [SMALL_STATE(113)] = 3169,
  [SMALL_STATE(114)] = 3185,
  [SMALL_STATE(115)] = 3201,
  [SMALL_STATE(116)] = 3217,
  [SMALL_STATE(117)] = 3233,
  [SMALL_STATE(118)] = 3251,
  [SMALL_STATE(119)] = 3269,
  [SMALL_STATE(120)] = 3287,
  [SMALL_STATE(121)] = 3305,
  [SMALL_STATE(122)] = 3320,
  [SMALL_STATE(123)] = 3335,
  [SMALL_STATE(124)] = 3343,
  [SMALL_STATE(125)] = 3351,
  [SMALL_STATE(126)] = 3358,
  [SMALL_STATE(127)] = 3365,
  [SMALL_STATE(128)] = 3372,
  [SMALL_STATE(129)] = 3379,
  [SMALL_STATE(130)] = 3386,
  [SMALL_STATE(131)] = 3393,
  [SMALL_STATE(132)] = 3400,
  [SMALL_STATE(133)] = 3407,
  [SMALL_STATE(134)] = 3414,
  [SMALL_STATE(135)] = 3421,
  [SMALL_STATE(136)] = 3428,
  [SMALL_STATE(137)] = 3433,
  [SMALL_STATE(138)] = 3440,
  [SMALL_STATE(139)] = 3447,
  [SMALL_STATE(140)] = 3454,
  [SMALL_STATE(141)] = 3461,
  [SMALL_STATE(142)] = 3465,
  [SMALL_STATE(143)] = 3469,
  [SMALL_STATE(144)] = 3473,
  [SMALL_STATE(145)] = 3477,
  [SMALL_STATE(146)] = 3481,
  [SMALL_STATE(147)] = 3485,
  [SMALL_STATE(148)] = 3489,
  [SMALL_STATE(149)] = 3493,
  [SMALL_STATE(150)] = 3497,
  [SMALL_STATE(151)] = 3501,
  [SMALL_STATE(152)] = 3505,
  [SMALL_STATE(153)] = 3509,
  [SMALL_STATE(154)] = 3513,
  [SMALL_STATE(155)] = 3517,
  [SMALL_STATE(156)] = 3521,
  [SMALL_STATE(157)] = 3525,
  [SMALL_STATE(158)] = 3529,
  [SMALL_STATE(159)] = 3533,
  [SMALL_STATE(160)] = 3537,
  [SMALL_STATE(161)] = 3541,
  [SMALL_STATE(162)] = 3545,
  [SMALL_STATE(163)] = 3549,
  [SMALL_STATE(164)] = 3553,
  [SMALL_STATE(165)] = 3557,
  [SMALL_STATE(166)] = 3561,
  [SMALL_STATE(167)] = 3565,
  [SMALL_STATE(168)] = 3569,
  [SMALL_STATE(169)] = 3573,
  [SMALL_STATE(170)] = 3577,
  [SMALL_STATE(171)] = 3581,
  [SMALL_STATE(172)] = 3585,
  [SMALL_STATE(173)] = 3589,
  [SMALL_STATE(174)] = 3593,
  [SMALL_STATE(175)] = 3597,
  [SMALL_STATE(176)] = 3601,
  [SMALL_STATE(177)] = 3605,
  [SMALL_STATE(178)] = 3609,
  [SMALL_STATE(179)] = 3613,
  [SMALL_STATE(180)] = 3617,
  [SMALL_STATE(181)] = 3621,
  [SMALL_STATE(182)] = 3625,
  [SMALL_STATE(183)] = 3629,
  [SMALL_STATE(184)] = 3633,
  [SMALL_STATE(185)] = 3637,
  [SMALL_STATE(186)] = 3641,
  [SMALL_STATE(187)] = 3645,
  [SMALL_STATE(188)] = 3649,
  [SMALL_STATE(189)] = 3653,
  [SMALL_STATE(190)] = 3657,
  [SMALL_STATE(191)] = 3661,
  [SMALL_STATE(192)] = 3665,
  [SMALL_STATE(193)] = 3669,
  [SMALL_STATE(194)] = 3673,
  [SMALL_STATE(195)] = 3677,
  [SMALL_STATE(196)] = 3681,
  [SMALL_STATE(197)] = 3685,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_link, 3, 0, 9),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_link, 3, 0, 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 3, 0, 11),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 3, 0, 11),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 3, 0, 10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 3, 0, 10),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pointer, 3, 0, 9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pointer, 3, 0, 9),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 4, 0, 18),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 4, 0, 18),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 2, 0, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 2, 0, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_link, 5, 0, 21),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_link, 5, 0, 21),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_link, 4, 0, 15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_link, 4, 0, 15),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_link, 4, 0, 16),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_link, 4, 0, 16),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pointer, 4, 0, 16),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pointer, 4, 0, 16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 4, 0, 19),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 4, 0, 19),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 2, 0, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame, 2, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_link, 4, 0, 14),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_link, 4, 0, 14),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_node, 4, 0, 12),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_node, 4, 0, 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_text, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_text, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_text, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_text, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_title, 2, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_title, 2, 0, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_node, 2, 0, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_node, 2, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 3, 0, 7),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame, 3, 0, 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_syntax, 3, 0, 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_syntax, 3, 0, 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_project_link, 2, 0, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cross_project_link, 2, 0, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_node, 3, 0, 7),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_node, 3, 0, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_node, 3, 0, 6),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_node, 3, 0, 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 3, 0, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 3, 0, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 4, 0, 17),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 4, 0, 17),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_syntax, 2, 0, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_syntax, 2, 0, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_link, 6, 0, 24),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_link, 6, 0, 24),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_entry, 5, 0, 23),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_entry, 5, 0, 23),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pointer, 5, 0, 22),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pointer, 5, 0, 22),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pointer, 4, 0, 14),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pointer, 4, 0, 14),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_link, 5, 0, 22),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_link, 5, 0, 22),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_link, 5, 0, 20),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_link, 5, 0, 20),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frame_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 13),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 13),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 13),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 13),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_modifier, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [575] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_title_content = 0,
  ts_external_token_link_id = 1,
  ts_external_token_pointer_id = 2,
  ts_external_token_file_path = 3,
  ts_external_token_meta_key = 4,
  ts_external_token_embed_content = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_title_content] = sym_title_content,
  [ts_external_token_link_id] = sym_link_id,
  [ts_external_token_pointer_id] = sym_pointer_id,
  [ts_external_token_file_path] = sym_file_path,
  [ts_external_token_meta_key] = sym_meta_key,
  [ts_external_token_embed_content] = sym_embed_content,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_title_content] = true,
    [ts_external_token_link_id] = true,
    [ts_external_token_pointer_id] = true,
    [ts_external_token_file_path] = true,
    [ts_external_token_meta_key] = true,
    [ts_external_token_embed_content] = true,
  },
  [2] = {
    [ts_external_token_title_content] = true,
    [ts_external_token_meta_key] = true,
  },
  [3] = {
    [ts_external_token_link_id] = true,
    [ts_external_token_pointer_id] = true,
  },
  [4] = {
    [ts_external_token_embed_content] = true,
  },
  [5] = {
    [ts_external_token_meta_key] = true,
  },
  [6] = {
    [ts_external_token_file_path] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_urtext_external_scanner_create(void);
void tree_sitter_urtext_external_scanner_destroy(void *);
bool tree_sitter_urtext_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_urtext_external_scanner_serialize(void *, char *);
void tree_sitter_urtext_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_urtext(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_urtext_external_scanner_create,
      tree_sitter_urtext_external_scanner_destroy,
      tree_sitter_urtext_external_scanner_scan,
      tree_sitter_urtext_external_scanner_serialize,
      tree_sitter_urtext_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
