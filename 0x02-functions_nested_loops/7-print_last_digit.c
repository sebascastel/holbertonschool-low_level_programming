#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: (0) always
 */

int print_last_digit(int i)
{
	int l;
	
	if (i < 0)
	{
		l = -1 * (i % 10);
	}
	else
	{
		l = i % 10 ;
	}
	_putchar (l + '0');
	return (l);
}
