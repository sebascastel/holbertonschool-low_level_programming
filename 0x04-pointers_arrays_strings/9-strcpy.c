#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed to by src.
 * @dest : copy
 * @src : pointed
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
	dest[n] = src[n];
	n++;
	}
	return (dest);
}
