#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n : numb
 * Return: point
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b = 0;
	unsigned int c;

	if (n == 0)
	return (0);
	va_start(a, n);
	for (c = 0; c < n; c++)
	{
	b += va_arg(a, int);
	}
	va_end(a);
	return (b);
}
