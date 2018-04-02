module.exports = grammar({
  name: "powershell",

  extras: $ => [$.comment, /\s/],

  rules: {
    /*
     * > The top-most level of a PowerShell program is a script
     * - Windows PowerShell Language Spec 3.0
     *
     * Based on Windows PowerShell Language Specification 3.0 (as best as i can handle given what i know)
     * input:
     *    input-elementsopt   signature-blockopt
     */
    script: $ =>
      seq(choice($.script_block, blank()), optional($.signature_block)),

    /*
     * Script block
     */
    script_block: $ => seq(optional($.param_block), $.statement_list),

    /*
     * Parameters
     */
    param_block: $ => seq(caseInsensitive("param"), $.parameter_list),

    parameter_list: $ => seq("(", commaSep($.parameter_declaration), ")"),

    parameter_declaration: $ => seq(repeat($.attribute), $.user_variable),

    attribute: $ =>
      seq(
        "[",
        $.identifier, // Attribute name
        optional($.attribute_arguments),
        "]"
      ),

    // TODO: will need to handle:
    //   [Dictionary[int,string]]
    array_declaration: $ => seq("[", optional(repeat(",")), "]"),

    attribute_arguments: $ => seq("(", commaSep($.attribute_argument), ")"),

    attribute_argument: $ =>
      seq(
        $.identifier,
        optional(seq("=", choice($.string, $.identifier, $.number)))
      ),

    statement_block: $ => seq("{", optional($.statement_list), "}"),

    statement_list: $ =>
      repeat1(seq($.statement, optional($.statement_terminator))),

    // Or a newline, but i'm not sure if i need to state that?
    statement_terminator: $ => ";",

    statement: $ =>
      choice(
        $.function_definition,
        $.if,
        $.while,
        $.do,
        $.for,
        $.foreach,
        $.try,
        $.trap,
        $.data,
        $.switch,
        $.flow_control_statement,
        $.labeled_statement,
        $.user_variable,
        $.boolean_value,
        $.number,
        $.string,
        $.expandable_here_string
      ),

    /*
     * Pipelines
     */

    // TODO: of course this isn't right
    pipeline: $ => choice($.boolean_value, $.user_variable),

    /*
     * Functions
     */

    function_definition: $ =>
      seq(
        choice(
          caseInsensitive("function"),
          caseInsensitive("filter"),
          caseInsensitive("workflow")
        ),
        $.identifier,
        optional($.parameter_list),
        "{",
        $.script_block,
        "}"
      ),

    // TODO: pipeline should go in between the parens there
    if: $ =>
      seq(
        caseInsensitive("if"),
        "(",
        $.boolean_value,
        ")",
        $.statement_block,
        repeat($.elseif),
        optional($.else)
      ),

    elseif: $ => seq(caseInsensitive("elseif"), $.statement_block),

    else: $ => seq(caseInsensitive("else"), $.statement_block),

    while: $ =>
      seq(
        caseInsensitive("while"),
        "(",
        $.boolean_value,
        ")",
        $.statement_block
      ),

    do: $ =>
      seq(
        caseInsensitive("do"),
        $.statement_block,
        choice(caseInsensitive("while"), caseInsensitive("until")),
        "(",
        $.boolean_value,
        ")"
      ),

    for: $ =>
      seq(
        caseInsensitive("for"),
        "(",
        optional(seq($.pipeline, optional($.statement_terminator))),
        optional(seq($.pipeline, optional($.statement_terminator))),
        optional($.pipeline),
        ")",
        $.statement_block
      ),

    foreach: $ =>
      seq(
        caseInsensitive("foreach"),
        optional($.foreach_parameter),
        "(",
        $.user_variable,
        caseInsensitive("in"),
        $.user_variable, // TODO: should be a pipeline
        ")",
        $.statement_block
      ),

    foreach_parameter: $ => seq("-", caseInsensitive("parallel")),

    try: $ =>
      seq(
        caseInsensitive("try"),
        $.statement_block,
        repeat($.catch),
        optional($.finally)
      ),

    catch: $ =>
      seq(caseInsensitive("catch"), repeat($.type_literal), $.statement_block),

    finally: $ => seq(caseInsensitive("finally"), $.statement_block),

    trap: $ =>
      seq(caseInsensitive("trap"), optional($.type_literal), $.statement_block),

    data: $ =>
      seq(caseInsensitive("data"), optional($.identifier), $.statement_block),

    labeled_statement: $ =>
      seq($.label, choice($.switch, $.foreach, $.for, $.while, $.do)),

    label: $ => seq(":", $.identifier),

    /*
     * From spec 3.0:
     *
     * flow-control-statement:
     *    break   label-expressionopt
     *    continue   label-expressionopt
     *    throw    pipelineopt
     *    return   pipelineopt
     *    exit   pipelineopt
     *
     * label-expression:
     *    simple-name
     *    unary-expression
     */
    flow_control_statement: $ =>
      choice(
        $.flow_break_continue,
        caseInsensitive("return"), // TODO: these last three can be followed by expressions
        caseInsensitive("throw"),
        caseInsensitive("exit")
      ),

    flow_break_continue: $ =>
      seq(
        choice(caseInsensitive("break"), caseInsensitive("continue")),
        optional($.identifier)
      ),

    switch: $ =>
      seq(
        caseInsensitive("switch"),
        repeat($.switch_parameter), // these are optional
        $.switch_condition,
        $.switch_body
      ),

    switch_parameter: $ =>
      seq(
        "-",
        choice(
          wholeOrPartCaseInsensitive("regex"),
          wholeOrPartCaseInsensitive("wildcard"),
          wholeOrPartCaseInsensitive("exact"),
          wholeOrPartCaseInsensitive("casesensitive"),
          wholeOrPartCaseInsensitive("parallel")
        )
      ),

    switch_condition: $ => seq("(", $.boolean_value, ")"),

    switch_body: $ => seq("{", repeat($.switch_clause), "}"),

    switch_clause: $ => seq($.switch_clause_condition, $.statement_block),

    // TODO: needs improvement!
    switch_clause_condition: $ => $.identifier,

    // TODO:
    // catch_type_list: $ =

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

    /*
     * Literals
     */
    type_literal: $ =>
      seq(
        "[",
        $.identifier,
        optional(choice($.array_declaration, $.type_literal)),
        "]"
      ),

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
          seq("'", repeat(choice(/[^\\'\n]/, /\\(.|\n)/)), "'"),
          seq("@'", repeat(/[^(\'@)]/), /[\r|\r\n|\n]'@/)
        )
      ),

    expandable_here_string: $ =>
      seq(
        '@"',
        repeat(choice($.expandable_string_chars, $.expandable_string_part)),
        $.expandable_here_string_end
      ),

    // Based on tree-sitter-javascript's template string implementation.
    // Ref: https://github.com/tree-sitter/tree-sitter-javascript/blob/e2d88fff88f6452c61cb26edc709b0563f137427/grammar.js#L723,L745

    // expandable_string_literal: $ =>
    //   seq(
    //     repeat(choice($._expandable_string_chars, $.expandable_string_part)),
    //   ),
    //

    expandable_here_string_end: $ => /[\r|\r\n|\n]"@/,

    expandable_string_chars: $ =>
      prec.left(
        repeat1(
          choice(
            /[\r|\r\n|\n]"[^@]/, // No line start, then double-quote, then @ symbol
            /\$[^\(]/ // Any dollar not followed by an open paren
          )
        )
      ),

    // /\$[^{`$]/, // Any dollar not followed by a brace, backtick, or dollar
    // /\\[`$]/ // Any backslash followed by a backtick or dollar
    // "$"

    expandable_string_part: $ => seq("$", "(", $.statement, ")"),

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

      return seq(token(choice(hex_literal, decimal_literal)), repeat($.suffix));
    },

    suffix: $ =>
      choice(
        caseInsensitive("l"),  // Long
        caseInsensitive("d"),  // Decimal
        caseInsensitive("kb"), // kilobyte
        caseInsensitive("mb"), // megabyte
        caseInsensitive("gb"), // gigabyte
        caseInsensitive("tb"), // terabyte
        caseInsensitive("pb")  // petabyte
      ),

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
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}

// Returns a `choice` rule that matches the full keyword or any number of
// characters from the start of the keyword.
//
// This attempts to fulfill part of the powershell spec declaring:
//
// > A switch-parameter may be abbreviated; any distinct leading part of a
// > parameter may be used. For example, -regex, -rege, -reg, -re, and -r
// > are equivalent.
function wholeOrPartCaseInsensitive(keyword) {
  // Divide the keyword into all its parts, and assemble a collection of
  // case insensitive RegExps that can be fed into a `choice` rule.
  var keywordParts = [];
  for (var i = 1; i <= keyword.length; i++) {
    keywordParts.push(caseInsensitive(keyword.substr(0, i)));
  }

  // Return a choice between all possible sub-words
  return choice(...keywordParts);
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
