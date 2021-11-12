#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct printing
{
	char identifier;
	void (*func)(va_list, int *);
} printing;

void print_numbers(va_list, int *);
void print_numbers_rec(unsigned int a, int *p);
void put_char(va_list, int *);
void print_string(va_list, int *);
void print_percent(va_list, int *);
int _putchar (char c);
void (*get_sp_func(char ch))(va_list, int *);
int _printf(const char *format, ...);

#endif
