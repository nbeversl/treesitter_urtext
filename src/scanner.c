#include "tree_sitter/parser.h"
#include <string.h>
#include <stdbool.h>

enum TokenType {
  TITLE_CONTENT,
  LINK_ID,
  POINTER_ID,
  FILE_PATH,
  META_KEY,
  EMBED_CONTENT,
};

void *tree_sitter_urtext_external_scanner_create(void) { return NULL; }
void tree_sitter_urtext_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_urtext_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_urtext_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static bool is_title_disallowed(int32_t c) {
  return c == '|' || c == '>' || c == '{' || c == '}' ||
         c == '\n' || c == '\r' || c == '`' || c == '@' ||
         c == '$' || c == '[' || c == ']' || c == '#' || c == 0;
}

bool tree_sitter_urtext_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {

  // META_KEY: match word chars until ::
  // Check this BEFORE title since metadata is more specific
  if (valid_symbols[META_KEY]) {
    bool has_content = false;
    while (lexer->lookahead != 0) {
      int32_t c = lexer->lookahead;
      if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
          (c >= '0' && c <= '9') || c == '_' || c == '?' ||
          c == '!' || c == '#' || c == '-') {
        has_content = true;
        lexer->advance(lexer, false);
      } else {
        break;
      }
    }
    if (has_content && lexer->lookahead == ':') {
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      if (lexer->lookahead == ':') {
        lexer->result_symbol = META_KEY;
        return true;
      }
    }
    // Don't return false here — fall through to try TITLE_CONTENT
  }

  // TITLE_CONTENT: match until " _" followed by whitespace or EOL
  if (valid_symbols[TITLE_CONTENT] &&
      !valid_symbols[LINK_ID] && !valid_symbols[POINTER_ID] && !valid_symbols[FILE_PATH]) {
    if (is_title_disallowed(lexer->lookahead)) return false;
    bool has_content = false;
    while (lexer->lookahead != 0) {
      int32_t c = lexer->lookahead;
      if (c == '\n' || c == '\r') break;
      if (is_title_disallowed(c)) break;
      if (c == ' ') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead == '_') {
          lexer->advance(lexer, false);
          int32_t after = lexer->lookahead;
          if (after == ' ' || after == '\n' || after == '\r' ||
              after == '\t' || after == 0 || after == '}') {
            if (has_content) {
              lexer->result_symbol = TITLE_CONTENT;
              return true;
            }
            return false;
          }
        }
        has_content = true;
      } else {
        lexer->advance(lexer, false);
        has_content = true;
      }
    }
    return false;
  }

  // LINK_ID or POINTER_ID: unified scanner
  // Scans content after "| " or "|modifier " until " >" or " >>"
  if (valid_symbols[LINK_ID] || valid_symbols[POINTER_ID]) {
    // Skip the leading space
    if (lexer->lookahead == ' ') {
      lexer->advance(lexer, false);
    } else {
      return false;
    }

    bool has_content = false;
    // Track the last position before a " >" sequence
    while (lexer->lookahead != 0 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
      if (lexer->lookahead == ' ') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead == '>') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '>') {
            // Found " >>" — this is a pointer
            if (has_content && valid_symbols[POINTER_ID]) {
              lexer->result_symbol = POINTER_ID;
              return true;
            }
            return false;
          } else {
            // Found " >" (not ">>") — this is a link
            if (has_content && valid_symbols[LINK_ID]) {
              lexer->result_symbol = LINK_ID;
              return true;
            }
            return false;
          }
        }
        has_content = true;
      } else if (lexer->lookahead == '|') {
        break;
      } else {
        lexer->advance(lexer, false);
        has_content = true;
      }
    }
    return false;
  }

  // FILE_PATH: skip leading space, match until " >"
  if (valid_symbols[FILE_PATH]) {
    if (lexer->lookahead == ' ') {
      lexer->advance(lexer, false);
    } else {
      return false;
    }
    bool has_content = false;
    while (lexer->lookahead != 0 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
      if (lexer->lookahead == ' ') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead == '>') {
          if (has_content) {
            lexer->result_symbol = FILE_PATH;
            return true;
          }
          return false;
        }
        has_content = true;
      } else if (lexer->lookahead == ';') {
        break;
      } else {
        lexer->advance(lexer, false);
        has_content = true;
      }
    }
    return false;
  }

  // EMBED_CONTENT: match everything until %%
  if (valid_symbols[EMBED_CONTENT] &&
      !valid_symbols[TITLE_CONTENT] &&
      !valid_symbols[LINK_ID] &&
      !valid_symbols[POINTER_ID] &&
      !valid_symbols[FILE_PATH] &&
      !valid_symbols[META_KEY]) {
    bool has_content = false;
    while (lexer->lookahead != 0) {
      if (lexer->lookahead == '%') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead == '%') {
          if (has_content) {
            lexer->result_symbol = EMBED_CONTENT;
            return true;
          }
          return false;
        }
        has_content = true;
      } else {
        lexer->advance(lexer, false);
        has_content = true;
      }
    }
    if (has_content) {
      lexer->mark_end(lexer);
      lexer->result_symbol = EMBED_CONTENT;
      return true;
    }
    return false;
  }

  return false;
}
