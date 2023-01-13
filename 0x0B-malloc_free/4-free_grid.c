#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of int
 * @grid: 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
