#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 *@min: min
 *@max: max
 *Return: (0) always
 */
int *array_range(int min, int max)
{
	int *a;
	int b;
	int c = 0;

	if (min > max)
	return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	return (NULL);
	c = min;
	for (b =0; b < (max - min + 1); b++)
	{
	a[b] = c;
	c++;
	}
	return (a);
}
