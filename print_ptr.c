#include "main"
#include <stdio.h>

int _strcmp(char *, char *);
int print_pointer(va_list list)
{
char *ptr_b;
int size;
ptr_b = itoa(va_arg(list, unsigned long int), 16);
if (!_strcmp(ptr_b, "0"))
        return (print("(nil)"));
size = print("0x");
if (!_strcmp(p_buff, "-1"))
        size += print("ffffffffffffffff");
else
	size += print(p_buff);
	return (size);
}
