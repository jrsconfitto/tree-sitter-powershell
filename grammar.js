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

    comment: $ => token(choice(/#.*/, seq("<#", /.*/, "#>")))
  }
});
