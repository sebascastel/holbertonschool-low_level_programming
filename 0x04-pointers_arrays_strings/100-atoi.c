#include "holberton.h"
/**
 * _atoi - Converts a array to an integer
 *




 * @s: character array to convert
 * Return: 0
 */
int _atoi(char *s)
{
	int a:
  int b;
  int c;

	 = 0;
	= 0;
	 = -1;
	while (s[b] != '\0' && (s[b] < '0' || s[b] > '9'))
	{
		if (s[i] == '-')
			 *= -1;
		++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		 = (a * 10) - (s[a++] - '0');
	return (a * c);
}
