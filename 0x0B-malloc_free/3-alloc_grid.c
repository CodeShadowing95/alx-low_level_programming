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
	int *grid, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int *) malloc(width * height * sizeof(int));

	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
