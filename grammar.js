module.exports = grammar({
  name: "powershell",

  extras: $ => [$.comment, /\s/],

  rules: {
    /*
     * > The top-most level of a PowerShell program is a script
     * - Windows PowerShell Language Spec 3.0
     *
     * Based on Windows PowerShell Language Specification 3.0
     * input:
     *    input-elementsopt   signature-blockopt
     */
    script: $ =>
      seq(
        optional($.param_block),
        // optional($.)
        $.script_block,
        optional($.signature_block)
      ),

    /*
     * Parameters
     */
    param_block: $ =>
      seq(
        caseInsensitive("param"),
        "(",
        commaSep($.parameter_declaration),
        ")"
      ),

    parameter_declaration: $ => seq(repeat($.attribute), $.user_variable),

    attribute: $ =>
      seq(
        "[",
        $.identifier, // Attribute name
        optional($.attribute_arguments),
        "]"
      ),

    attribute_arguments: $ => seq("(", commaSep($.attribute_argument), ")"),

    attribute_argument: $ =>
      seq(
        $.identifier,
        optional(seq("=", choice($.string, $.identifier, $.number)))
      ),

    /*
     * Script block
     */
    script_block: $ => repeat1($.statement),

    statement: $ => choice($.if, $.user_variable, $.boolean_value, $.number),

    // TODO: pipeline should go in between the parens there
    if: $ =>
      seq(
        caseInsensitive("if"),
        "(",
        $.boolean_value,
        ")",
        "{",
        repeat($.statement),
        "}"
      ),

    //
    // expression: $ => choice($.boolean_value, $.logical_expression),
    //
    // logical_expression: $ => repeat($.logical_expression),
    //
    // /*
    //  * input-elements:
    //  *   input-element
    //  *   input-elements   input-element
    //  */
    //  // TODO: consider an underscore to hide this in the syntax tree
    // input_elements: $ =>
    //   seq($.input_element, repeat($.input_elements), $.input_element),
    //
    // // input-element:
    // //      whitespace
    // //      comment
    // //      token
    //  // TODO: consider an underscore to hide this in the syntax tree
    // input_element: $ =>
    //   repeat(choice($.comment, $.token)),

    // signature-begin   signature   signature-end
    // signature-begin:
    // new-line-character   # SIG # Begin signature block   new-line-character
    // signature:
    // base64 encoded signature blob in multiple single-line-comments
    // signature-end:
    // new-line-character   # SIG # End signature block   new-line-character

    boolean_value: $ =>
      prec(
        1,
        token(
          seq("$", choice(caseInsensitive("true"), caseInsensitive("false")))
        )
      ),

    // User variables
    // Ref: https://docs.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_variables?view=powershell-6
    user_variable: $ => prec(2, /\$[a-zA-Z]\w*/),

    // TODO: General identifier for now
    identifier: $ => /[a-zA-Z]\w*/,

    // Automatic variables
    // Ref: https://docs.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_automatic_variables?view=powershell-6
    // automatic_variable: "",

    // From tree-sitter-javascript:
    string: $ =>
      token(
        choice(
          seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
          seq("'", repeat(choice(/[^\\'\n]/, /\\(.|\n)/)), "'")
        )
      ),

    // Ref: https://github.com/tree-sitter/tree-sitter-javascript/blob/e2d88fff88f6452c61cb26edc709b0563f137427/grammar.js#L765
    number: $ => {
      const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F]+/);

      const decimal_digits = /\d+/;
      const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
      const exponent_part = seq(choice("e", "E"), signed_integer);

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

      return token(choice(hex_literal, decimal_literal));
    },

    // Ref: https://github.com/tree-sitter/tree-sitter-javascript/blob/e2d88fff88f6452c61cb26edc709b0563f137427/grammar.js#L708
    // Ref: https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ =>
      token(choice(/#.*/, seq("<#", /[^#]*\#+(?:[^<#][^#]*#+)*/, ">"))),

    signature_block: $ => "# SIG"
  }
});

function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map(letter => `[${letter}${letter.toUpperCase()}]`)
      .join("")
  );
}

// Ref: tree-sitter/tree-sitter-javascript's grammar
// Describes 1 or more rules that are separated by commas
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

// Describes 0 or more rules that are separated by commas
function commaSep(rule) {
  return optional(commaSep1(rule));
}
