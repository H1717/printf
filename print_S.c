#include "main.h"

/**
 * print_S - Non printable characters
 * @list: va_list arguments from _printf
 *
 * Return: number of characteri
 */
int print_S(va_list list)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(list, char *);

	if (!s)
		return (print("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			print("\\x");
			count += 2;
			res = itoa(s[i], 16);
			if (!res[1])
				count += _putchar('0');
			count += print(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
