#include "holberton.h"
/**
 * print_triangle - prints a triangle.
 * @size: size
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a; 
	int b;
	int n;

	a = size;
	for (n = 0; n < size; n++)
	{
	b = n;
	a = size - b;
	while (a > 1)
	{
	_putchar(32);
	a--;
	}
	while (b >= 0)
	{
	_putchar('#');
	b--;
	}
	_putchar(10);
	}
	if (size <= 0)
	_putchar(10);
}
