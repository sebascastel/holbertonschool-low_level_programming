#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings
 *@s1: str1
 *@s2: str2
 *@n: n bytes of s2
 *Return: (0) always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b = 0;
	unsigned int c = 0;
	char *d;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[b] != '\0')
	b++;
	while (s2[c] != '\0')
	c++;
	if (n > c)
	n = c;
	d = malloc(sizeof(char) * (b + n + 1));
	if (d == NULL)
	return (NULL);
	for (a = 0; a < b + n; a++)
	{
	if (a < b)
	d[a] = s1[a];
	else
	d[a] = s2[a - b];
	}
	d[a] = '\0';
	return (d);
}
