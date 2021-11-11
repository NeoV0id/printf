#include "main.h"

void print_numbers(unsigned int a, int *p)
{
	*p += 1;
	if (a >= 1)
	{
		print_numbers((a / 10), p);
		_putchar((a % 10) + '0');
	}
}
