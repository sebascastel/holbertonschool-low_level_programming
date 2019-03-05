#include <stdlib.h>
/**
 * *_strdup - turns a pointer to a newly allocated space in memory
 *@str: char
 * Return: (0) always
 */
char *_strdup(char *str)
{
	int a;
	int b = 0;
	char *s;

	if (str == NULL)
	return (NULL);
	while (str[b] != '\0')
	b++;
	s = malloc(sizeof(char) * (b + 1));
	if (s == NULL)
	return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	s[a] = str[a];
	s[a] = '\0';
	return (s);
}
