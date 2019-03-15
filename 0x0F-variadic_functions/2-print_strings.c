#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator : str to be printed
 * @n : numb
 * Return: point
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	const char *b;
	unsigned int c;
	char *d;

	if (separator == NULL)
	b = "";
	else
	b = separator;
	va_start(a, n);
	for (c = 0; c < n; c++)
	{
	d = va_arg(a, char *);
	if (d == NULL)
	printf("(nil)");
	else
	printf("%s", d);
	if (c < n - 1)
	printf("%s", b);
	}
	printf("\n");
	va_end(a);
}
