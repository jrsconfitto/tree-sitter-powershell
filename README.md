# NOTE

There's an official Tree Sitter implementation for PowerShell, please direct any efforts there: https://github.com/powershell/tree-sitter-powershell.

# tree-sitter-powershell

[![Build Status](https://travis-ci.org/jrsconfitto/tree-sitter-powershell.svg?branch=master)](https://travis-ci.org/jrsconfitto/tree-sitter-powershell)
[![Build status](https://ci.appveyor.com/api/projects/status/1xjovq67kgq36hfc/branch/master?svg=true)](https://ci.appveyor.com/project/jugglingnutcase/tree-sitter-powershell/branch/master)

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

# Licenses

This project uses [the MIT license](LICENSE).

This project uses code from the [tree-sitter-javascript grammar](https://github.com/tree-sitter/tree-sitter-javascript) which is released under the following license:

> The MIT License (MIT)
>
> Copyright (c) 2014 Max Brunsfeld
>
> Permission is hereby granted, free of charge, to any person obtaining a copy
> of this software and associated documentation files (the "Software"), to deal
> in the Software without restriction, including without limitation the rights
> to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
> copies of the Software, and to permit persons to whom the Software is
> furnished to do so, subject to the following conditions:
>
> The above copyright notice and this permission notice shall be included in all
> copies or substantial portions of the Software.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
> IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
> FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
> AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
> LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
> OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
> SOFTWARE.
