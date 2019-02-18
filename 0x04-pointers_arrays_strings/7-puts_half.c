#include "holberton.h"
/**
 * puts_half - prints half of a string.
 * @str : string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a = 0;
	int b;
	int c;

	while (str[a] != '\0')
	a++;
	c = a / 2;
	if (a % 2 != 0)
	c = c + 1;

	for (b = c; b < a; b++)
	_putchar(str[b]);
	_putchar (10);
}
