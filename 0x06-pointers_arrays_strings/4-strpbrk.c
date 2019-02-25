#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 *@s: str
 *@accept: str
 * Return: (0) always
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
	if (s[a] == accept[b])
	return (s + a);
	}
	a++;
	}
	return ('\0');
}
