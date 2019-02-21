#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a : a
 * @n : n
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = n - 1;
	int d;

	while (b < c)
	{
	d = a[c];
	a[c] = a[b];
	a[b] = d;
	b++;
	c--;
	}
}
