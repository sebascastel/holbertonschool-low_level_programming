#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments
 *@ac: count arguments
 *@av: arguments
 *Return: (0) always
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c;
	int d;
	int e = 0;
	int f = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b] != '\0'; b++)
	e++;
	e++;
	}
	s = (char *)malloc(sizeof(char) * (e + 1));
	if (s == NULL)
	return (NULL);
	for (c = 0; c < ac; c++, f++)
	{
	for (d = 0; av[c][d]; d++, f++)
	{
	s[f] = av[c][d];
	}
	s[f] = '\n';
	}
	s[f] = '\0';
	return (s);
}
