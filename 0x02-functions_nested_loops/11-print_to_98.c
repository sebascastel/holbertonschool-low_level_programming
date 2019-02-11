#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - Entry point
 *@n: check
 * Return: (0) always
 */

void print_to_98(int n)
{
	if (n > 98)
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	else
		for (n = n; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	printf("\n");
}
