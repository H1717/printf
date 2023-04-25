#include "main.h"

/**
  *binary_print - print and convert a number in base 2
  *@list: Number to print
  *
  *Return:length
  **/
int binary_print(va_list list)
{
	char *ptr_b;
	int size;

	ptr_b = itoa(va_arg(list, unsigned int), 2);
	size = print(ptr_b);
return (size);
}
