#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2D array previously created by alloc_grid
 *
 * @grid: 2D array to free
 * @height: height of the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
