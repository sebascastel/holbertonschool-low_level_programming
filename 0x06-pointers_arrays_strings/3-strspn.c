#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: str
 *@accept: str
 * Return: (0) always
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d;

	while (s[a] != '\0')
	{
	for (d = 0; accept[d] != '\0'; d++)
	{
	if (s[a] == accept[d])
	b++;
	}
	if (b == c)
	return (b);
	c = b;
	a++;
	}
	return (b);
}
