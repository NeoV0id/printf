#include "main.h"
#include <stdio.h>

/**
 * print_num - print number
 * @n : int
 * @len : lenght to print
 * @i : counter
 */

int print_num(va_list ap)
{
	long i = va_arg(ap, int);
	int count = 0;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		count++;
	}
	count += count_num(i);
	return (count);
}

/**
 * count_num - count numbers in string
 * @i : number that must be print
 *Return: lenght
 */

int count_num(long i)
{
	int count = 0;

	if (!(i / 10))
	{
		count += count_num(i / 10);
	}
	count += _putchar((i % 10) + '0');
	return (count);
}
