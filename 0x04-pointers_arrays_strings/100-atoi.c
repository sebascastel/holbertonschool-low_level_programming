#include "holberton.h"
/**
 * _atoi - Converts a array to an integer
 * @s: character array to convert
 * Return: 0
 */
int _atoi(char *s)
{
	int a:
	int b;
	int c;

	a = 0;
	b = 0;
	c = -1;
	while (s[b] != '\0' && (s[b] < 48 || s[b] > 57))
	{
	if (s[b] == '-')
	c *= -1;
	b ++;
	}
	while (s[b] != '\0' && (s[b] >= 48 && s[b] <= 57))
	a = (a * 10) - (s[a++] - '0');
	return (a * c);
}
