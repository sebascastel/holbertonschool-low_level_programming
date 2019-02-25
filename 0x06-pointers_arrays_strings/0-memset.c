#include "holberton.h"
/**
 * *_memset - fills memory
 *@s: str
 *@b: str
 *@n: uns
 * Return: (0) always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
