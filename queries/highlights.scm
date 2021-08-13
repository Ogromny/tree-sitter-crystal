; comments
 (comment
 	((comment_directive) @annotation)*) @comment

; literals
(nil) @variable.builtin
(bool) @boolean
(integer) @number
(float) @float
(char) @character

(string_literal 
	[
	 	(string_content) @string
		(string_escape) @string.escape
		(string_interpolation) @string.special
	]*) @string


; TODO: \#{...}
