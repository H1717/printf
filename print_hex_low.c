#include "main.h"

/**
 * print_hex_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length 
 **/
int print_hex_low(va_list list)
{
	char *ptr_b;
	int size;

	ptr_b = itoa(va_arg(list, unsigned int), 16);

	size = print((ptr_b != NULL) ? ptr_b : "NULL");

	return (size);
}
