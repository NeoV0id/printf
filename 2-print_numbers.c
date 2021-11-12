#include "main.h"

/**
 * print_numbers - check if the number is negative or positive
 * @ap: va_list
 * @p: pointer to count
 * Return: nothing
 */

void print_numbers(va_list ap, int *p)
{
	int num;
	unsigned int un_num;

	num = va_arg(ap, int);
	if (num < 0)
	{
		un_num = (unsigned int)(num * -1);
		_putchar('-');
		*p += 1;
	}
	else
	{
		un_num = (unsigned int)num;
	}
	print_numbers_rec(un_num, p);
}

/**
 * print_numbers_rec - print the numbers
 * @a: number to print
 * @p: pointer to count
 * Return: nothing
 */

void print_numbers_rec(unsigned int a, int *p)
{
	*p += 1;
	if (a >= 1)
	{
		print_numbers_rec((a / 10), p);
		_putchar((a % 10) + '0');
	}
}
