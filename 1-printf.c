#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print the string and all arguments
 * @format: format argument
 * Return: the length of string
 */

int _printf(const char *format, ...)
{
int i = 0, count = 0;
va_list ap;

va_start(ap, format);
if (!(format))
{
	return (-1);
}
while (format && format[i])
{
	if (format[i] == '%')
	{
		if (!(format[i + 1]))
		{
			return (-1);
		}
		else if (format[i + 1] == 'i' || format[i + 1] == 'd'
		|| format[i + 1] == 'c' || format[i + 1] == 's'
		|| format[i + 1] == '%')
		{
			(get_sp_func(format[i + 1]))(ap, &count);
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
			continue;
		}
	}
	else
	{
	_putchar(format[i]);
	count++;
	}
	i++;
}
va_end(ap);
return (count);
}
