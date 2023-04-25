#include "main.h"

int lower(char);
char *str_to_upper(char *);

/**
 * print_hex_upp - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length
 **/
int print_hex_upp(va_list list)
{
	char *ptr_b;
	int size;

	ptr_b = itoa(va_arg(list, unsigned int), 16);
	ptr_b = str_to_upper(ptr_b);

	size = print((ptr_b != NULL) ? ptr_b : "NULL");

	return (size);
}

/**
 * str_to_upper - string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *str_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (lower(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

/**
 * is_lower - if the character are lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int lower(char c)
{
	return (c >= 'a' && c <= 'z');
}
