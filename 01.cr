name = 1
print %q(hello \n \#{name}) # => "hello \\n \#{name}"
print %Q(hello \n #{name}) # => "hello \n world"
