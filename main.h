#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int _puts(char *str, int ascii);
int convert_alpha_numeric(int nb, int upper);
char *convert_base(unsigned long nb, unsigned int base, int upper);
int print_percent(va_list args __attribute__((unused)));
int print_nbr(va_list ap);
int print_binary(va_list ap);
int print_octal(va_list ap);
int print_hexa_lower(va_list ap);
int print_hexa_upper(va_list ap);
int _strlen_recursion(char *s);
char *_strdup(char *str);
/**
 * struct flags_printf - struct converstion to function
 * @c: flag string
 * @f: pointer to a function
 */

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
} flags_p;

#endif
