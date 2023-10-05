#include "main.h"

/**
 * free_grid - free 2 dimentional array
 *
 * @grid: array
 * @height: array height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
			free(grid[i]);
	free(grid[i]);
}
