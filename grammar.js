module.exports = grammar({
	name: "crystal",
	extras: $ => [
		/\s/,
		$.comment,
	],
	externals: $ => [
		$.char,

		$.string_content,
		$.string_escape,
		$.string_interpolation_start,
		$.string_interpolation_end,
		$.string_percent_start,
		$.string_percent_end,
		// $.string_percent_literal_interpolated_start,
		//$.string_percent_literal_end

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
			$.string_literal,
			$.string_percent,
			// $.string_percent_literal_interpolated
		),
		string_literal: $ => seq(
			"\"",
			repeat(
				choice(
					$.string_interpolation,
					$.string_escape,
					$.string_content,
				)
			),
			"\"",
			optional(
				alias(
					seq(
						"\\",
						$.string_literal
					),
					"")
			)
		),
		string_interpolation: $ => seq(
			$.string_interpolation_start,
			$.nil,
			$.string_interpolation_end
		),
		string_percent: $ => seq(
			$.string_percent_start,
			repeat(
				choice(
					$.string_interpolation,
					$.string_escape,
					$.string_content,
				)
			),
			$.string_percent_end
		)
		//	string_percent_literal_interpolated: $ => {
		//		$.string_percent_literal_interpolated_start,
		//		repeat(
		//			choice(
		//				$.string_simple_interpolation,
		//				/.*/
		//			)
		//		),
		//		$.string_percent_literal_end
		//	}
	}
})
