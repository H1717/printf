#include "main.h"

int rot13(char *s);
/**
 * print_rot - Prints the rot13'ed string
 * @list: String
*
 * Return: Length
**/

int print_rot(va_list list)
{
char *p;
int p_len;

p = va_arg(list, char *);
p_len = rot13((p != NULL) ? p : "(Wow)");
	return (p_len);
}
