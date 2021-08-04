module.exports = grammar({
	name: "crystal",
	extras: $ => [
		/\s/, // whitespace
		$.comment,
	],
	externals: $ => [
		$.char,
		$.string_simple_content,
		$.string_simple_escape,
		$.string_simple_interpolation_start,
		$.string_simple_uninterpolation_start,
		// $.string_normal,
		// $.string_percent_literal,
		// $.string_rdoc,
	],
	rules: {
		program: $ => repeat(
			$.statements,
		),

		statements: $ => choice(
			$.statement
		),
		statement: $ => choice(
			$.expression
		),
		expression: $ => choice(
			$.nil,
			$.bool,
			$.integer,
			$.float,
			$.char,
			$.string,
			//$.string_normal,
			//$.string_percent_literal,
			//$.string_rdoc
		),

		/**********
		* COMMENT *
		**********/

		comment: $ => seq(
			"#",
			choice(
				$.comment_directive,
				/.*/
			)
		),
		comment_directive: $ => choice(
			":ditto:",
			":nodoc:",
			":inherit:"
		),

		/**********
		* LITERAL *
		**********/
		
		nil: $ => "nil",
		bool: $ => choice(
			"true",
			"false"
		),
		integer: $ => choice(
			/[+-]?\d[\d_]*([iu](8|16|32|64))?/,
			/[+-]?0b[01_]+/,
			/[+-]?0o[0-7_]+/,
			/[+-]?0x[0-9a-fA-F_]+/,
		),
		float: $ => /[+-]?\d[\d_]*(\.\d[\d_]*)?((e-?\d+)|(f(32|64)))?/,
		string: $ => choice(
			$.string_simple
		),
		string_simple: $ => seq(
			"\"",
			repeat(
				choice(
					$.string_simple_content,
					$.string_simple_escape,
					$.string_simple_interpolation,
					$.string_simple_uninterpolation
				)
			),
			"\"",
			optional(
				alias(
					seq(
						"\\",
						$.string_simple
					),
				"")
			)
		),
		string_simple_interpolation: $ => seq(
			$.string_simple_interpolation_start,
			$.nil, // TODO: 
			$.string_simple_interpolation_end
		),
		string_simple_interpolation_end: $ => "}",
		string_simple_uninterpolation: $ => seq(
			$.string_simple_uninterpolation_start,
			$.nil, // TODO: 
			$.string_simple_uninterpolation_end
		),
		string_simple_uninterpolation_end: $ => "}"
	}
})
