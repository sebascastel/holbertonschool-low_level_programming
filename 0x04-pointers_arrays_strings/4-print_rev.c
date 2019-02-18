#include "holberton.h"
/**
 * print_rev - string in reverse.
 * @s : string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	a++;

	for (b = a - 1; b >= 0; b--)
	_putchar(s[b]);
	_putchar (10);
}
