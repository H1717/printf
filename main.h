#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;
int _printf(const char *format, ...);
int _strlen(const char *str);
int _putchar(char);
int buffer(char);
int char_print(va_list list);
int str_print(va_list list);
int _handler(const char *str, va_list list, int *i);
int print(char *);

#endif
