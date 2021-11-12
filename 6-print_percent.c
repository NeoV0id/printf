#include "main.h"

/**
 * print_percent - print percent
 * @ap: va_list
 * @p: pointer to count
 * Return: nothing
 */

void print_percent(va_list ap, int *p)
{
	(void)ap;
	_putchar('%');
	*p += 1;
}
