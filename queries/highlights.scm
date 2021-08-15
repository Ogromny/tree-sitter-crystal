; comments
 (comment
 	((comment_directive) @annotation)*) @comment

; literals
(nil) @variable.builtin
(bool) @boolean
(integer) @number
(float) @float
(char) @character
(string
  	[
		(_ ([
				(string_content) @string
				(string_escape) @string.escape
				(string_interpolation) @string.special
				(string_leading_backslash) @none
			]))
		(string_percent) @string.special
	]) @string
