/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "urtext",

  extras: (_) => [],

  externals: ($) => [
    $.title_content,
    $.link_id,
    $.pointer_id,
    $.file_path,
    $.meta_key,
    $.embed_content,
  ],

  rules: {
    document: ($) => repeat($._element),

    _element: ($) => choice(
      $.inline_node,
      $.embedded_syntax,
      $.frame,
      $.raw,
      $.node_pointer,
      $.cross_project_link,
      $.file_link,
      $.node_link,
      $.other_project_link,
      $.timestamp,
      $.metadata_entry,
      $.hash_meta,
      $.node_title,
      $.bold_text,
      $.italic_text,
      $.http_link,
      $.whitespace_anchor,
      $.dynamic_indicator,
      $._text,
    ),

    // { ... } with recursive nesting
    inline_node: ($) => seq(
      field("open", "{"),
      optional(field("dynamic", $.dynamic_marker)),
      repeat($._element),
      field("close", "}"),
    ),

    dynamic_marker: (_) => /~\??/,

    // %%Language ... %%
    embedded_syntax: ($) => seq(
      field("open", $.embed_open),
      optional(field("content", $.embed_content)),
      field("close", $.embed_close),
    ),
    embed_open: (_) => token(prec(10, /%%[A-Za-z]+/)),
    embed_close: (_) => token(prec(10, "%%")),

    // [[ ... ]]
    frame: ($) => seq(
      field("open", "[["),
      repeat($._frame_element),
      field("close", "]]"),
    ),

    _frame_element: ($) => choice(
      $.call,
      $.node_link,
      $.node_pointer,
      $.file_link,
      $.timestamp,
      $.whitespace_anchor,
      $.virtual_target,
      $.call_flag,
      $.other_project_link,
      $.raw,
      $.frame_target_marker,
      $._frame_text,
    ),

    // Call: NAME(...) where NAME is [A-Z_]+ or > or + or -
    call: ($) => seq(
      field("name", $.call_name),
      "(",
      repeat($._call_element),
      ")",
    ),

    _call_element: ($) => choice(
      $.node_link,
      $.node_pointer,
      $.file_link,
      $.timestamp,
      $.virtual_target,
      $.call_flag,
      $.format_string,
      $.call_separator,
      $.call_asterisk,
      $.other_project_link,
      $.hash_meta,
      $._call_text,
    ),

    call_name: (_) => token(prec(5, /[A-Z][A-Z_+\->]*/)),
    call_flag: (_) => /\-[a-z_]+/,
    virtual_target: (_) => /@[\w_]+/,
    format_string: (_) => /\$_?[.A-Za-z0-9_-]*/,
    call_separator: (_) => ";",
    call_asterisk: (_) => "*",
    frame_target_marker: (_) => token(prec(3, ">")),
    _call_text: (_) => token(prec(-2, /[^)\];|*@$\-A-Z]+/)),
    _frame_text: (_) => token(prec(-5, /[^\]\[|A-Z@>\-`]+|\s/)),

    // `...`
    raw: ($) => seq("`", optional($.raw_content), "`"),
    raw_content: (_) => /[^`]+/,

    // | id >>
    node_pointer: ($) => seq(
      field("open", "|"),
      optional(field("modifier", $.link_modifier)),
      field("id", $.pointer_id),
      field("close", " >>"),
      optional(field("position", $.link_position)),
    ),

    // =>"Project" | id >
    cross_project_link: ($) => seq(
      field("project", $.project_ref),
      choice($.node_link, $.node_pointer),
    ),
    project_ref: (_) => token(prec(2, /=>"[^"]+"/)),

    // |/ path > or |/? path >
    file_link: ($) => seq(
      field("open", "|"),
      "/",
      optional(field("missing", "?")),
      field("path", $.file_path),
      field("close", " >"),
      optional(field("position", $.link_position)),
    ),

    // | id >
    node_link: ($) => seq(
      field("open", "|"),
      optional(field("modifier", $.link_modifier)),
      field("id", $.link_id),
      field("close", " >"),
      optional(field("position", $.link_position)),
    ),
    link_modifier: (_) => choice("?", "!", ":"),
    link_position: (_) => /:\d+/,

    // =>"project"
    other_project_link: (_) => token(prec(1, /=>"[^"]+"/)),

    // <...>
    timestamp: (_) => token(prec(1, /<[^\-\/<\s\n][^=<\n]*>/)),

    // key::value
    metadata_entry: ($) => seq(
      optional(field("tag_self", "+")),
      optional(field("tag_descendants", $.meta_stars)),
      field("key", $.meta_key),
      field("assigner", "::"),
      optional(field("value", $.meta_value)),
    ),
    meta_stars: (_) => /\*{1,2}/,
    meta_value: (_) => /[^\n;\}]+/,

    // #tag
    hash_meta: (_) => token(prec(1, /#[A-Za-z][\w]*/)),

    // Title text followed by ` _`
    node_title: ($) => seq(
      field("title", $.title_content),
      field("marker", " _"),
    ),

    // **bold**
    bold_text: ($) => seq("**", $.bold_content, "**"),
    bold_content: (_) => /[^\*\n]+/,

    // __italic__
    italic_text: ($) => seq("__", $.italic_content, "__"),
    italic_content: (_) => /[^_\n]+/,

    // https://...
    http_link: (_) => token(prec(1, /https?:\/\/[^\s]+/)),

    // Leading dot
    whitespace_anchor: (_) => token(prec(1, /\s*\./)),

    // ~ or ~? at start
    dynamic_indicator: (_) => token(prec(2, /~\??/)),

    // Fallback
    _text: (_) => token(prec(-10, /[^\{\}\[\]`|<\n]+|\n|./)),
  },
});
