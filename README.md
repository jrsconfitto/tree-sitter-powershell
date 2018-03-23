# tree-sitter-powershell

A [tree-sitter] grammar for the PowerShell language.

*This is still very much a WIP* and isn't something i'd recommend depending on!

The goal of this project is to build a grammar that is useful in the Atom editor (and to learn how grammars work).

# Contributing

Issues and Pull Requests are welcome! Feel free to ask any questions in the issues.

The files you'll mainly want to work with are the [grammar.js](grammar.js) and files in the corpus folder, which are the unit tests.

This is a side-project for fun, so please be understanding if responses take a little bit of time :smile:

# References

- [Learn a bit about creating tree-sitter grammars from a doc][tsdoc]
- This grammar is (very roughly) modeled after the [Windows PowerShell Language Specification Version 3.0][spec].

[tree-sitter]:https://github.com/tree-sitter/tree-sitter
[tsdoc]:https://github.com/tree-sitter/tree-sitter/blob/10c3a956794a5e81a0a7e5c5a804e818c2dd0fe3/docs/creating-parsers.md
[spec]:https://www.microsoft.com/en-us/download/details.aspx?id=36389
