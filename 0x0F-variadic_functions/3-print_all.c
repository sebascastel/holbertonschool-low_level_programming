#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format : f
 * Return: point
 */
void print_all(const char * const format, ...)
{
	va_list a, char *b, int c = 0;

	va_start(a, format);
	while (format == NULL)
	{
	printf("\n");
	return;
	}
	while (format[c] != '\0')
	{
	switch (format[c])
	{
	case 'c':
	printf("%c", va_arg(a, int));
	break;
	case 'i':
	printf("%i", va_arg(a, int));
	break;
	case 'f':
	printf("%f", va_arg(a, double));
	break;
	case 's':
	b = va_arg(a, char *);
	if (b == NULL)
	{
	printf("(nil)");
	break;
	}
	printf("%s", b);
	break;
	default:
	c++;
	continue;
	}
	if (format[c + 1] != '\0')
	printf(", ");
	c++;
	}
	va_end(a);
	printf("\n");
}
