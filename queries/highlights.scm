; Node structure
(inline_node "{" @punctuation.bracket)
(inline_node "}" @punctuation.bracket)
(dynamic_marker) @keyword

; Node title
(node_title
  title: (title_content) @markup.heading)
(node_title " _" @markup.heading)

; Timestamps
(timestamp) @string.special

; Node links
(node_link "|" @punctuation.delimiter)
(node_link
  modifier: (link_modifier) @keyword)
(node_link
  id: (link_id) @markup.link)
(node_link " >" @punctuation.delimiter)
(node_link
  position: (link_position) @number)

; Node pointers
(node_pointer "|" @punctuation.delimiter)
(node_pointer
  modifier: (link_modifier) @keyword)
(node_pointer
  id: (pointer_id) @markup.link)
(node_pointer " >>" @punctuation.delimiter)

; File links
(file_link "|" @punctuation.delimiter)
(file_link "/" @punctuation.delimiter)
(file_link
  path: (file_path) @string.special.path)
(file_link " >" @punctuation.delimiter)

; Cross-project links
(cross_project_link
  project: (project_ref) @markup.link.url)

; Other project link
(other_project_link) @markup.link.url

; Metadata
(metadata_entry "+" @operator)
(metadata_entry
  tag_descendants: (meta_stars) @operator)
(metadata_entry
  key: (meta_key) @property)
(metadata_entry "::" @punctuation.delimiter)
(metadata_entry
  value: (meta_value) @string)

; Hash metadata
(hash_meta) @property

; Frames
(frame "[[" @punctuation.special)
(frame "]]" @punctuation.special)
(frame_target_marker) @keyword

; Calls inside frames
(call
  name: (call_name) @function)
(call "(" @punctuation.bracket)
(call ")" @punctuation.bracket)
(call_flag) @attribute
(call_separator) @punctuation.delimiter
(call_asterisk) @operator
(virtual_target) @variable.builtin
(format_string) @string.special

; Embedded syntax
(embedded_syntax
  open: (embed_open) @keyword.import)
(embedded_syntax
  content: (embed_content) @markup.raw)
(embedded_syntax
  close: (embed_close) @keyword.import)

; Raw / preformatted
(raw "`" @punctuation.special)
(raw (raw_content) @markup.raw)

; Bold and italic
(bold_text "**" @punctuation.delimiter)
(bold_text (bold_content) @markup.bold)
(italic_text "__" @punctuation.delimiter)
(italic_text (italic_content) @markup.italic)

; HTTP links
(http_link) @markup.link.url

; Whitespace anchor
(whitespace_anchor) @comment

; Dynamic indicator
(dynamic_indicator) @keyword
