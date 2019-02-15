#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n : check
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	j = 0;
	while (j < size)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (size > 0)
				_putchar ('#');
		}
				_putchar (10);
		j++;
	}
	if (size <= 0)
		_putchar (10);

}
