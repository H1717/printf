#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *ptr_b;
	int size;

	ptr_b = itoa(va_arg(list, unsigned int), 10);

	size = print((ptr_b != NULL) ? ptr_b : "NULL");

	return (size);
}
