#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n : check
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;
		for (i = 0 ; i < n ; i++)
		{
			if (n > 0)
			for (j = i ; j > 0 ; j--)
				_putchar (' ');
				_putchar ('\\');
				_putchar (10);
		}
		if (n <= 0)
		_putchar (10);
}
