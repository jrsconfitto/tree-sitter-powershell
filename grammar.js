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

    // Ref: https://github.com/tree-sitter/tree-sitter-javascript/blob/e2d88fff88f6452c61cb26edc709b0563f137427/grammar.js#L765
    number: $ => {
      const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F]+/);

      const decimal_digits = /\d+/;
      const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
      const exponent_part = seq(choice("e", "E"), signed_integer);

      const binary_literal = seq(choice("0b", "0B"), /[0-1]+/);

      const octal_literal = seq(choice("0o", "0O"), /[0-7]+/);

      const decimal_integer_literal = choice(
        "0",
        seq(/[1-9]/, optional(decimal_digits))
      );

      const decimal_literal = choice(
        seq(
          decimal_integer_literal,
          ".",
          optional(decimal_digits),
          optional(exponent_part)
        ),
        seq(".", decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part))
      );

      return token(
        choice(hex_literal, decimal_literal, binary_literal, octal_literal)
      );
    },

    // Ref: https://github.com/tree-sitter/tree-sitter-javascript/blob/e2d88fff88f6452c61cb26edc709b0563f137427/grammar.js#L708
    // Ref: https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ =>
      token(choice(/#.*/, seq("<#", /[^#]*\#+(?:[^<#][^#]*#+)*/, ">")))
  }
});
