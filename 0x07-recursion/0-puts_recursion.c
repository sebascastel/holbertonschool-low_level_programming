#include "holberton.h"
/**
 * _puts_recursion - prints a string,
 *@s: str
 * Return: (0) always
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
	_putchar(s[0]);
	_puts_recursion(s + 1);
	}
	else
	_putchar(10);
}
