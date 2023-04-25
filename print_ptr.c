#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_pointer - Print a number in hex
 * @list: Number
 *
 * Return: Length
 **/
int print_pointer(va_list list)
{
	char *ptr_b;
	int size;

	ptr_b = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(ptr_b, "0"))
		return (print("(nil)"));

	size = print("0x");

	if (!_strcmp(ptr_b, "-1"))
		size += print("ffffffffffffffff");
	else
		size += print(ptr_b);

	return (size);
}
