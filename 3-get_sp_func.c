#include "main.h"
#include <stdlib.h>

/**
 * get_sp_func - get the function corespond to specifier
 * @ch: specifier
 * Return: 0 if false, something else otherwise.
 */

void (*get_sp_func(char ch))(va_list, int *)
{
printing sp[] = {
	{'i', print_numbers},
	{'d', print_numbers},
	{'c', put_char},
	{'s', print_string},
	{'%', print_percent}
};
int i;

i = 0;
while (i < 5)
{
	if ((sp[i]).identifier == ch)
		return (sp[i].func);
	i++;
}
return (NULL);
}
