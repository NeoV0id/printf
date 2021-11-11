#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_all - print all arguments
 * @format: format argument
 */

int _printf(const char *format, ...)
{
int i = 0, count = 0;
va_list ap;
char *s;
int ch, in, db;
unsigned int it, d;

va_start(ap, format);
while (format && format[i])
{
	if (format[i] == '%' && !(format[i + 1]))
	{
		return (-1);
	}
	if (format[i] == '%' && format[i + 1] == 'i')
	{
		in = va_arg(ap, int);
		if (in < 0)
		{
			it = (unsigned int)in * -1;
			_putchar('-');
			count++;
		}
		else
			it = (unsigned int)in;
		print_numbers(it, &count);
		i++;
	}
	else if (format[i] == '%' && format[i + 1] == 'd')
	{
		db = (int)va_arg(ap, int);
		if (db < 0)
		{
			d = (unsigned int)db * -1;
			_putchar('-');
		}
		else
			d = (unsigned int)db;
		print_numbers(d, &count);
		i++;
	}
	else if (format[i] == '%' && format[i + 1] == 'c')
	{
		ch = va_arg(ap, int);
		_putchar(ch);
		i++;
		count++;
	}
	else if (format[i] == '%' && format[i + 1] == 's')
	{
		s = va_arg(ap, char *);
		_printstr(s, &count);
		i++;
	}
	else if(format[i] == '%' && format[i + 1] == '%')
	{
		i++;
		continue;
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
