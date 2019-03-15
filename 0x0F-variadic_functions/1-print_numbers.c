#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator : sep
 * @n : numb
 * Return: point
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	const char *b;
	unsigned int c;

	if (separator == NULL)
	b = "";
	else
	b = separator;
	va_start(a, n);
	for (c = 0; c < n; c++)
	{
	printf("%d", va_arg(a, int));
	if (c < n - 1)
	printf("%s", b);
	}
	printf("\n");
	va_end(a);
}
