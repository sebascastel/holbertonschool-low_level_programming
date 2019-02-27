#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: str
 * Return: (0) always
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	return (_strlen_recursion(++s) + 1);
	return (0);
}
