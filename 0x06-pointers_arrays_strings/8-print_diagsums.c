#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - fills memory
 *@a: str
 *@size: str
 * Return: (0) always
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;

	for (b = 0; b < size; b++)
	{
	f = (size + 1) * b;
	d = d + *(a + f);
	}
	printf("%d, ", d);
	for (c = 0; c <= size; c++)
	{
	g = (size - 1) * c;
	e = e + *(a + g);
	}
	printf("%d\n", e);
}
