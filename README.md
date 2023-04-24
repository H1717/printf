0x11. C - printf team project


specifiers that we can use in the _printf
s      print_string             print a string
c      print_char               print just a char
i       print_integer          print a number in base 10
d      print_integer          print a number in base 10
These 3 functions are the bases for this project:
Printf: is the prototype, and just receive the variables to print in the stdout.
Handler: controller for the string and the formats, and also does the counter.
_handler: Compare a list of possible specifiers with the current pattern, and return the corresponding function.
