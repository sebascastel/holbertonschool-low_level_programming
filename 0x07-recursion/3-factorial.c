#include "holberton.h"
/**
 * factorial - returns factorial.e
 *@n: int
 * Return: (0) always
 */
int factorial(int n)
{
	int a = 0;

	if (n < 0)
	return (-1);
	if (n == 0)
	return (0);
	if (n == 1)
	return (1);
	a = n * factorial(n - 1);
	return (a);
}
