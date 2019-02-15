#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n : check
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;
		for (i = 0 ; i < n ; i++)
		{
			if (n > 0)
				_putchar ('_');
		}
		_putchar (10);
}
