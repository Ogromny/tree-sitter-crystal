# comment
# simple
# :ditto:

# literals
# nil
nil

# bool
true
false

# int
1 # Int32
1_i8  # Int8
1_i16 # Int16
1_i32 # Int32
1_i64 # Int64
1_u8  # UInt8
1_u16 # UInt16
1_u32 # UInt32
1_u64 # UInt64
+10 # Int32
-20 # Int32
2147483648          # Int64
9223372036854775808 # UInt64
1_000_000 # better than 1000000
0b1101 # == 13
0o123 # == 83
0xFE012D # == 16646445
0xfe012d # == 16646445

# float
1.0     # Float64
1.0_f32 # Float32
1_f32   # Float32
1e10   # Float64
1.5e10 # Float64
1.5e-7 # Float64
+1.3 # Float64
-0.5 # Float64
1_000_000.111_111 # a lot more readable than 1000000.111111

# char
'a'
'z'
'0'
'_'
'あ'
'\''         # single quote
'\\'         # backslash
'\a'         # alert
'\b'         # backspace
'\e'         # escape
'\f'         # form feed
'\n'         # newline
'\r'         # carriage return
'\t'         # tab
'\v'         # vertical tab
'\uFFFF'     # hexadecimal unicode character
'\u{10FFFF}' # hexadecimal unicode character
'\u0041'    # => 'A'
'\u{41}'    # => 'A'
'\u{1F52E}' # => '&#x1F52E;'

# string :evil:
"hello world"
"\""                  # double quote
"\\"                  # backslash
"\a"                  # alert
"\b"                  # backspace
"\e"                  # escape
"\f"                  # form feed
"\n"                  # newline
"\r"                  # carriage return
"\t"                  # tab
"\v"                  # vertical tab
"\377"                # octal ASCII character
"\xFF"                # hexadecimal ASCII character
"\uFFFF"              # hexadecimal unicode character
"\u{0}" # hexadecimal unicode character
"\u{10FFFF}" # hexadecimal unicode character
"\101" # => "A"
"\123" # => "S"
"\12"  # => "\n"
"\1"   # string with one character with code point 1
"\u0041"    # => "A"
"\u{41}"    # => "A"
"\u{1F52E}" # => "&#x1F52E;"
"\u{48 45 4C 4C 4F}" # => "HELLO"
"sum: #{nil}"


