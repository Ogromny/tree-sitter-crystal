# lol
# :nodoc:
"\u{1 2} #{nil} \xFF aa #{nil} #{nil} \uFFFF"
"#{nil}"
'\n'
"hello
      world" # => "hello\n      world"
"hello " \
"#{nil} world, " \
"no newlines" # same as "hello world, no newlines"

%{test \uFFFF #{nil} aaaa}

"test \xFF" \
"test2 \xFF" \
"test #{nil} \xFF"

