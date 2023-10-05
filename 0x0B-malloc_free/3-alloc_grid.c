#include "main.h"

/**
 * alloc_grid - create a 2 dimensional integer array
 *
 * @width: array width
 * @height: array height
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = (int **) malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
