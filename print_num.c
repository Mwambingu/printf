#include "main.h"

/**
 * print_decimal - prints a decimal
 * @args: decimal argument
 * Return: len
 */
int print_decimal(va_list args)
{
	int n;
	int div = 1;
	int len = 0;
	unsigned int num;

	n  = va_arg(args, int);

	if (n < 0)
	{
		len = len +  putchar(45);
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len = len + _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_integer - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_integer(va_list args)
{
	return (print_decimal(args));
}
