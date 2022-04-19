#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _putchar(char c);
int print_decimal(va_list args);
int print_integer(va_list args);

#endif
