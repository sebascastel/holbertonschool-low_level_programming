#include "holberton.h"
/**
 * *leet - changes all lowercase letters of a string to uppercase.
 *@a:upper
 * Return: Always 0.
 */
char *leet(char *a)
{
	int b;
	int c;
	char d[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
	for (c = 0; d[c] != '\0'; c++)
	{
	if (a[b] == d[c])
	{
	a[b] = e[c];
	}
	}
	}
	return (a);
}
