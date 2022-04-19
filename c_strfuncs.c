#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _puts(char *str, int ascii)
{
	char *s;
	int i = 0, sum = 0;

	while (str[i])
	{
		if(((str [i] >= 0 && str[i] < 32) || str[i] >= 127) && ascii)
		{
			s = convert_base(str[i], 16, 1);
			sum += write(1, "\\x", 2);
			if (str[i] >= 0 && str[i] < 16)
			{
				sum += _putchar('0');
			}
			sum += _puts(s, 0);
			free(s);
			i++;
		}
		else
		{
			sum += _putchar(str[i]);
			i++;
		}
	}
	return (sum);
}
