#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *@a:upper
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int b = 0;

	while (a[b++] != '\0')
	{
	if (a[b] >= 97 && a[b] < 123)
	a[b] = a[b] - 32;
	}
	return (a);
}
