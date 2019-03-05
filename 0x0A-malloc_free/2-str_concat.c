#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 *@s1: str1
 *@s2: str2
 * Return: (0) always
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c = 0;
	int d = 0;
	int e =	0;
	char *s;

	if (s1 == NULL)
	{
	s1 = malloc(sizeof(char));
	if (s1 == NULL)
	return (NULL);
	*s1 = '\0';
	}
	if (s2 == NULL)
	{
	s2 = malloc(sizeof(char));
	if (s2 == NULL)
	return (NULL);
	*s2 = '\0';
	}
	while (s1[c] != '\0')
	c++;
	while (s2[d] != '\0')
	d++;
	s = malloc(sizeof(char) * (c + (d + 1)));
	if (s == NULL)
	return (NULL);
	for (a = 0; a < c; a++)
	s[a] = s1[a];
	for (b = a; b <= c + d + 1; b++)
	{
	s[b] = s2[e];
	e++;
	}
	return (s);
}
