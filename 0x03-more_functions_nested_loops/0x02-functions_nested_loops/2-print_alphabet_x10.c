#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: (0) always
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar(10);
	}
}
