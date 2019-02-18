#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;

	j = 1;
	while (j <= 10)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
				_putchar ((i / 10) + '0');
				_putchar ((i % 10) + '0');
		}
	_putchar (10);
	j++;
	}
}
