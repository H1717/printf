#include "main.h"

/**
* _srtlen - calculate the length of a string
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
int print(char*str)
{
	int i;
	for(i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}
