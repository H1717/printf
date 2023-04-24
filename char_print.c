#include "main.h"
/**
 * char_print - print char.
 * @list: va_list.
 *
 * Return: 1
 */
int char_print(va_list list)
{
	int x;

	x = va_arg(list, int);

	_putchar(x);

	return (1);
}

