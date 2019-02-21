#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string.
 *@a:ca
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int b, c;
	char d[] = " \t\n,;.!?\"(){}";

	for (b = 0; a[b] != '\0'; b++)
	{
	if (a[0] >= 97 && a[0] < 123)
	a[0] = a[0] - 32;
	for (c = 0; d[c] != '\0'; c++)
	if (a[b] == d[c] && a[b + 1] >= 97 && a[b + 1] < 123)
	a[b + 1] = a[b + 1] - 32;
	}
	return (a);
}
