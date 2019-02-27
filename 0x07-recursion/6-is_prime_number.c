#include "holberton.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *@n: int
 * Return: (0) always
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - fin prime number.
 *@n: int
 *@a: int
 * Return: (0) always
 */
int prime(int n, int a)
{
	if (n == a)
	return (1);
	if (n < 2)
	return (0);
	else if (n % a == 0)
	return (0);
	return (prime(n, (a + 1)));
}
