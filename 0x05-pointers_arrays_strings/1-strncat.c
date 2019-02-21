#include "holberton.h"
/**
 * *_strncat - concatenates 2 strings usinf at mos n bytes from src.
 * @dest : str1
 * @src : str2
 * @n : int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	a++;
	while (src[b] != '\0' && b != n)
	{
	dest[a++] = src[b++];
	dest[a] = '\0';
	}
	return (dest);
}
