#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 *@c: char
 *@size: unsigned int
 * Return: (0) always
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
	return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	return (NULL);
	for (a = 0; a < size; a++)
	s[a] = c;
	return (s);
}
