# tree-sitter-urtext

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar and parser for the [Urtext](https://urtext.org) markup language.

## Prerequisites

- [Node.js](https://nodejs.org/) (for grammar development and the Node.js binding)
- [tree-sitter CLI](https://tree-sitter.github.io/tree-sitter/creating-parsers#installation) (`npm install -g tree-sitter-cli` or `cargo install tree-sitter-cli`)
- A C compiler (gcc, clang, or MSVC)

Additional prerequisites depending on which binding you want to use:

| Binding | Requires |
|---------|----------|
| Rust    | [Rust toolchain](https://rustup.rs/) (edition 2021+) |
| Python  | Python 3.8+, pip |
| Go      | Go 1.18+ |
| Swift   | Swift 5.3+ |

## Building

### Generate the parser from the grammar

If you modify `grammar.js` or `src/scanner.c`, regenerate the parser:

```sh
npx tree-sitter generate
```

This produces `src/parser.c`, `src/grammar.json`, and `src/node-types.json`.

### Build the shared library (C)

```sh
make
```

This compiles `src/parser.c` and `src/scanner.c` into a static library (`libtree-sitter-urtext.a`) and a shared library (`.so` on Linux, `.dylib` on macOS).

To install the library and headers system-wide:

```sh
make install            # installs to /usr/local by default
make install PREFIX=/opt/tree-sitter   # custom prefix
```

To uninstall:

```sh
make uninstall
```

### Node.js

```sh
npm install
```

This uses `node-gyp` to compile the native addon. You can then use the parser in Node.js:

```js
const Parser = require("tree-sitter");
const Urtext = require("tree-sitter-urtext");

const parser = new Parser();
parser.setLanguage(Urtext);

const tree = parser.parse("your urtext content here");
```

### Rust

Add the crate to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter = ">=0.22.6"
tree-sitter-urtext = "0.0.1"
```

Or build locally:

```sh
cargo build
```

### Python

Install in a virtual environment:

```sh
pip install .
```

Or install with the tree-sitter core library:

```sh
pip install ".[core]"
```

### Go

```sh
go get github.com/tree-sitter/tree-sitter-urtext/bindings/go
```

### Swift

Add the package to your `Package.swift` dependencies:

```swift
.package(url: "https://github.com/tree-sitter/tree-sitter-urtext", from: "0.0.1")
```

## Running Tests

```sh
make test
# or equivalently:
npx tree-sitter test
```

## Syntax Highlighting

Query files for syntax highlighting live in the `queries/` directory. To try them out:

```sh
npx tree-sitter highlight <your-file.urtext>
```

## Project Structure

```
grammar.js          — grammar definition (source of truth)
src/scanner.c       — external scanner for context-sensitive tokens
src/parser.c        — generated parser (do not edit by hand)
src/grammar.json    — generated grammar metadata
src/node-types.json — generated node type info
queries/            — tree-sitter queries (highlights, etc.)
bindings/           — language-specific bindings
  c/                — C header and pkg-config template
  go/               — Go binding
  node/             — Node.js binding
  python/           — Python binding
  rust/             — Rust binding
  swift/            — Swift binding
```

## License

MIT
