#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed to by src.
 * @a : copy
 * @n : pointed
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b;
	
	a= _strlen (src);
	for (b = 0; b < a; b++)
	dest[b] = src[b];
	return (dest);
}
/**
 * _strlen - returns lenght of a string..
 * @s : stringd
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	n++;
	return (n);
}
