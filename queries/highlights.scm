; comments
(comment_directive) @annotation
(comment) @comment

; literals
(nil) @variable.builtin
(bool) @boolean
(integer) @number
(float) @float
(char) @character

(string) @string
(string_escape) @string.escape
(string_interpolation_start) @string.special
(string_interpolation_end) @string.special
; TODO: \#{...}
(string_percent
	(string_percent_start) @string.special
	(string_percent_end) @string.special)
