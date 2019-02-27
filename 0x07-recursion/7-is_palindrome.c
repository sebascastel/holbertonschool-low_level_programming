#include "holberton.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: str
 * Return: (0) always
 */
int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s);
	return (pal(0, a - 1, a, s));
}
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
/**
 * pal - palindrome
 *@s: str
 *@h: head str
 *@t: tail str
 *@a: lenght
 * Return: (0) always
 */
int pal(int h, int t, int a, char *s)
{
	if (a == 0)
	return (1);
	if (h <= a / 2)
	{
	if (*(s + h) != *(s + t))
	return (0);
	else
	return (pal(h + 1, t - 1, a, s));
	}
	return (1);
}
