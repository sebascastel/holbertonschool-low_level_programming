#include "holberton.h"
/**
 * print_number - prints an integer.
 *@n:arr
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
	if (n / 10)
	{
	print_number(n / 10);
	_putchar((n % 10) * (-1) + '0');
	}
	else
	{
	_putchar(45);
	_putchar((n % 10) * (-1) + '0');
	}
	}
	if (n >= 0)
	{
	if (n / 10)
	{
	print_number(n / 10);
	_putchar((n % 10) + '0');
	}
	else
	_putchar((n % 10) + '0');
	}
}
