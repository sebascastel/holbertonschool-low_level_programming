#include "holberton.h"
/**
 * *rot13 - encoding rotating 13 places.
 *@a:arr
 * Return: Always 0.
 */
char *rot13(char *a)
{
	int b;
	int c;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
	for (c = 0; c < 52; c++)
	{
	if (a[b] == d[c])
	{
	a[b] = e[c];
	break;
	}
	}
	}
	return (a);
}
