#include <stdlib.h>
/**
 ***strtow - a function that splits a string into words
 *@str: string to split
 *Return: 0
 */
char **strtow(char *str)
{
	int a;
	int b;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	char **s;

	if (str == NULL)
	return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	if (a == 0)
	return (NULL);
	while (str[c] != '\0')
	{
	if (str[c] == ' ')
	{
	if (str[c + 1] != ' ')
	d++;
	}
	c++;
	}
	if (str[0] != ' ')
	d++;
	s = (char **)malloc(sizeof(char *) * (d + 1));
	if (s == NULL)
	return (NULL);
	for (c = 0; str[e] != '\0'; c++)
	{
	if (str[e] == ' ')
	{
	if (str[e + 1] == '\0' && f == 0)
	return (NULL);
	}
	else
	{
	f = 1;
	for (g = e; str[g] != '\0' && str[g] != ' '; g++)
	h++;
	s[c] = malloc(sizeof(char) * (h + 1));
	if (s[c] == NULL)
	{
	while (c >= 0)
	{
	free(s[c - 1]);
	c--;
	}
	free(s);
	return (NULL);
	}
	for (b = 0; b < h; b++)
	{
	s[c][b] = str[e];
	e++;
	}
	s[c][b] = '\0';
	h = 0;
	}
	}
	return (s);
}
