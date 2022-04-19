#include <stdarg.h>
#include "main.h"
#include <stddef.h>

int (*f_cvt(const char c))(va_list)
{
	int i = 0;

	flags_p fp[] = {
		{"c", print_char},
		{"s", print_str}
	};

	while (i < 2)
	{
		if (c == fp[i].c[0])
		{
			return (fp[i].f);
		}
		i++;
	}
	return (NULL);
}

int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				func = get_op(format[i + 1]);
			
			}
			if (func == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			}
			else
			{
				sum += func(ap);
				i += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			sum ++;
			i++;
		}
	}
	va_end(ap);
	return (sum);
}
