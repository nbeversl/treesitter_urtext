package tree_sitter_urtext_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-urtext"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_urtext.Language())
	if language == nil {
		t.Errorf("Error loading Urtext grammar")
	}
}
