#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of the grid
 *@height: heigth of the grid
 * Return: (0) always
 */
int ***alloc_grid(int width, int height, int depth)
{
	int ***a;
	int b;
	int c;
	int d;
	int e;
	int f;

	if (height <= 0)
	return (NULL);
	if (width <= 0)
	return (NULL);
	a = malloc(sizeof(int **) * height);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int*) * width);
		for (c = 0; c < width; c++)
		{
			a[b][c] = malloc(sizeof(int) * depth);
			if (a[b] == NULL)
			{
				for (; b >= 0; b--)
					free(a[b]);
					free(a);
			}
		}
	}
	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
		{
			for (f = 0; f < depth; f++)
				a[d][e][f] = 0;
		}
	}
	return (a);
}
