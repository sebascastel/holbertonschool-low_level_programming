#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str);
/**
 *new_dog - initialize a variable of type struct dog
 *@name: name dogo
 *@age: age dogo
 *@owner: dogo owner
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;

	if (name == NULL || owner == NULL)
	return (NULL);
	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
	return (NULL);
	dogo->name = _strdup(name);
	if (dogo->name == NULL)
	{
	free(dogo);
	return (NULL);
	}
	dogo->owner = _strdup(owner);
	if (dogo->owner == NULL)
	{
	free(dogo->name);
	free(dogo);
	return (NULL);
	}
	dogo->age = age;
	return (dogo);
}
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
