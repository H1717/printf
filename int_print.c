#include "main.h"
/**
  *print_integer-print a number in base 10
  *@list: number to print in base 10
  *
  *Return: lenght of the numbers in decimal
  **/
int print_integer(va_list list)
{
	char *ptr_b;
	int size;
	ptr_b = itoa(va_arg(list, int),10);
	size = print((ptr_b != NULL) ? ptr_b : "NULL");
	return(size);
}
