#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: 2D array
 * @height: height of grid
 *
 * Description: frees the memory of a 2D grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
