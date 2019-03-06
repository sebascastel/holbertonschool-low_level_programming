#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int ***grid, int width, int height, int depth)
{
    int w;
    int h;
    int d;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
		d = 0;
		while (d < depth)
		{
            		printf("%d ", grid[h][w][d]);
			d++;
		}
        w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int ***grid;

    grid = alloc_grid(6, 4, 3);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4, 3);
    printf("\n");
    grid[0][3][0] = 98;
    grid[3][4][2] = 402;
    print_grid(grid, 6, 4, 3);
    return (0);
}
