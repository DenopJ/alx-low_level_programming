#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 * @grid: first parameter(2D array)
 * @height: second parameter (grid height)
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}

