#include "main.h"

/**
 * str_print - Print string
 * @list: list.
 *
 * Return: String length.
 */

int str_print(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}
