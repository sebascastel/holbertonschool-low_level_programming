#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: int
 * Return: (0) always
 */
int _sqrt_recursion(int n)
{
	return (root(1, n));
}
/**
 * root - returns the natural square root of a number.
 *@n: int
 *@a: int
 * Return: (0) always
 */
int root(int a, int n)
{
	if ((a * a) == n)
	return (a);
	if ((a * a) < n)
	return (root(a + 1, n));
	else
	return (-1);
}
