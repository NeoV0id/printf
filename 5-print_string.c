include "main.h"
#include <stdlib.h>

/**
 * print_string - prints strings
 * @ap: string to print
 * @p: pointer to count
 * Return: 0 for success
 */

void print_string(va_list ap, int *p)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	if (!(str))
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
		_putchar(str[i]);
		*p += 1;
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		*p += 1;
	}
}
