#include "holberton.h"
/**
 * *_strchr - locates a character in a string.
 *@s: str
 *@c: str
 * Return: (0) always
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
	if (s[a] == c)
	return (s + a);
	s++;
	}
	if (c == '\0')
	return (s + a);
	return ('\0');
}
