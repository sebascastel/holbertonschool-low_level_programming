#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring.
 *@haystack: str
 *@needle: str
 * Return: (0) always
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c;

	while (haystack[a] != '\0')
	{
	c = a;
	b = 0;
	while (haystack[a] == needle[b] && needle[b] != '\0' && haystack[a] != '\0')
	{
	a++;
	b++;
	}
	if (needle[b] == '\0')
	return (haystack + c);
	a = c + 1;
	}
	return (NULL);
}
