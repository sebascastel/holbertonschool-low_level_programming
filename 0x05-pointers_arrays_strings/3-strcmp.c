#include "holberton.h"
/**
 * _strcmp - compare 2 strings.
 * @s1 : str1
 * @s2 : str2c
 * Return: compare.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
