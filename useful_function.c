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
