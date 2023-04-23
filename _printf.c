#include "main.h"

/**
* _printf - function that produces output according to a format.
* @format: is a character string composed of zero or more directives.
*
*Returns: the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int size;
	va_list args;

if (format == null)
	return (-1);

size = _strlen(format);
if (size <= 0)
	return (0);
va_start(args, format);

va_end(args);

return (size);
}
