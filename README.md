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

contributors :
Dimago11
Mrscan20

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

bprint_binaryprint a number in base 2
x    print_hex_low
