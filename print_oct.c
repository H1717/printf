#include "main.h"

/**
 * print_oct - Print a unsigned octal
 * @list: Number to print
 *
 * Return: Length
 **/
int print_oct(va_list list)
{
	char *ptr_b;
	int size;

	ptr_b = itoa(va_arg(list, unsigned int), 8);

	size = print((ptr_b != NULL) ? ptr_b : "NULL");

	return (size);
}
