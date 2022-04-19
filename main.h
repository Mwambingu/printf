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

/*int print_decimal(va_list args);*/
/*int print_integer(va_list args);*/

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
