#include "holberton.h"
/**
 * puts2 - char out of 2.
 * @str : string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	a++;

	for (b = 0; b < a; b = b + 2)
	_putchar(str[b]);
	_putchar (10);
}
