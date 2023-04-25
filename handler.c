#include "main.h"

/**
 * handler - controller
 * @str: String format
 * @list: List of arguments
 *
 * Return: size of arguments + size of string
 **/
int handler(const char *str, va_list list)
{
	int size, i, x;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			x = _handler(str, list, &i);
			if (x == -1)
				return (-1);

			size += x;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

/**
 * _handler - Controller for percent format
 * @str: String format
 * @list: List of argument
 * @i: iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int _handler(const char *str, va_list list, int *i)
{
	int size, j, n;
	format formats[] = {
		{'s', str_print}, {'c', char_print},
		{'d', print_integer}, {'i', print_integer},
		{'b', binary_print},{'u', print_unsigned},
		{'o', print_oct}, {'x', print_hex_low},
		{'X', print_hex_upp}, {'p', print_pointer},
		{'S', print_S},
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	n = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < n; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
