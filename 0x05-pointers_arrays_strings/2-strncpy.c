#include "holberton.h"
/**
 * *_strncpy - copy src to dest.
 * @dest : str1
 * @src : str2
 * @n : n bytes src
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	dest[a] = src[a];
	for ( ; a < n; a++)
	{
	dest[a] = '\0';
	}
	return (dest);
}
