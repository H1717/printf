#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */
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
int handler(const char *str, va_list list);
int print(char *);
int print_integer(va_list);
int print_unsigned(va_list);
char *itoa(long int, int);
int binary_print(va_list);
int print_oct(va_list);
int print_hex_low(va_list);
int print_hex_upp(va_list);
int print_pointer(va_list);
int print_S(va_list list);
int  print_rev(va_list list);
int print_rot(va_list list);
int rot13(char *s);
#endif
