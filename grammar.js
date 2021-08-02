module.exports = grammar({
	name: "crystal",
	extras: $ => [
		/\s/, // whitespace
		$.comment,
		$.comment_directive,
	],
	externals: $ => [
		$.char,
		$.string,
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
			$.char
		),
		
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
		// char: $ => /'([\u00C0-\u1FFF\u2C00-\uD7FF\w]|\\([\'\\abefnrtv]|u[a-zA-Z0-9]{1,4}|u\{[a-zA-Z0-9]{1,6}\}))'/,

		comment: $ => seq(
			"#",
			/.*/
		),
		comment_directive: $ => seq(
			"#",
			choice(
				":ditto:",
				":nodoc:",
				":inherit:"
			),
			/.*/
		)
	}
})
