module.exports = grammar({
  name: "powershell",

  extras: $ => [$.comment, /\s/],

  rules: {
    program: $ =>
      repeat(choice($.assignment_statement, $.expression_statement)),

    assignment_statement: $ => seq($.variable, "=", $.expression, ";"),

    expression_statement: $ => seq($.expression, ";"),

    expression: $ =>
      choice(
        $.variable,
        $.number,
        prec.left(1, seq($.expression, "+", $.expression)),
        prec.left(1, seq($.expression, "-", $.expression)),
        prec.left(2, seq($.expression, "*", $.expression)),
        prec.left(2, seq($.expression, "/", $.expression)),
        prec.left(3, seq($.expression, "^", $.expression))
      ),

    variable: $ => /\a\w*/,

    number: $ => /\d+/,

    // Ref: https://github.com/tree-sitter/tree-sitter-javascript/blob/e2d88fff88f6452c61cb26edc709b0563f137427/grammar.js#L708
    // Ref: https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ =>
      token(choice(/#.*/, seq("<#", /[^#]*\#+(?:[^<#][^#]*#+)*/, ">")))
  }
});
