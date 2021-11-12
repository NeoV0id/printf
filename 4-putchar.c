#include "main.h"
#include <unistd.h>

/**
* put_char - writes the character c to stdout and count
* @ap: The character to print
* @p: pointer to count
* Return: nothing
*/
void put_char (va_list ap, int *p)
{
	char c;

	c = va_arg(ap, int);
	*p += 1;
	write(1, &c, 1);
}
