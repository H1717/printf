#include "main.h"

/**
* _strlen - calculate the length of a string
* @str: string.
*
* Return: length.
*/
int _strlen(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
	;
return (i);
}
/**
  *print - print char.
  *@str:string.
  *
  *Return:string length.
  */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on Success or -1 on Error.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: Character
 *
 * Return: 1
 **/
int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 *
 * Return: char
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encode
 */
int rot13(char *s)
{
	int i, j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!normal[j])
			_putchar(s[i]);
	}
	return (i);
}
