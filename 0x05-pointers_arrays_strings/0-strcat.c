#include "holberton.h"
/**
 * *_strcat - concatenates 2 strings.
 * @dest : str1
 * @src : str2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	a++;
	while (src[b] != '\0')
	{
	dest[a + b] = src[b];
	b++;
	}
	return (dest);
}
