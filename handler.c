#include "main.h"
/**
* handler - Format controller
* @str: String format
* @list: List of arguments
*
* Return: Total size of arguments with the total size of the base string
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
