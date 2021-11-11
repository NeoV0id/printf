#include "main.h"
#include <stdlib.h>

/**
 * _printstr - prints strings
 * @str: string to print
 *
 * Return: 0 for success
 */

int _printstr(char *str, int *p)
{
	int i;

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
	return (0);
}
