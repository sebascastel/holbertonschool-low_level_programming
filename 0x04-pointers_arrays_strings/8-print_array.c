#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array.
 * @a : pointer
 * @n : int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b != (n - 1))
	printf(", ");
	}
	printf("\n");
}
