module.exports = grammar({
	name: "crystal",
	extras: $ => [
		$.comment,
		$.comment_directive,
		/(\r|\n|\t| )/
	],
	rules: {
		program: $ => repeat(
			$.statements,
		),

		statements: $ => choice(
			"let x",
			"let y",
		),

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
