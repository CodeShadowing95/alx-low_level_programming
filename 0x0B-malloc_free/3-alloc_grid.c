#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a 2-dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
