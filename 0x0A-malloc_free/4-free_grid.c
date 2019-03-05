#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	free(grid[a]);
	free(grid);
}
