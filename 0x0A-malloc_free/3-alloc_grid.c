#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of the grid
 *@height: heigth of the grid
 * Return: (0) always
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b;
	int c;
	int d;
	int e;

	if (height <= 0)
	return (NULL);
	if (width <= 0)
	return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	return (NULL);
	for (b = 0; b < height; b++)
	{
	a[b] = malloc(sizeof(int) * width);
	if (a[b] == NULL)
	{
	for (c = b; c >= 0; c--)
	free(a[c]);
	free(a);
	}
	}
	for (d = 0; d < height; d++)
	{
	for (e = 0; e < width; e++)
	a[d][e] = 0;
	}
	return (a);
}
