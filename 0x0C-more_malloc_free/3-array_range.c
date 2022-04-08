#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 *
 * @min: minimum value
 * @max: maximum value
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *tab;
	unsigned int i = 0;

	if (min > max)
		return (NULL);

	tab = malloc((max - min + 1) * sizeof(int));
	if (tab == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		tab[i] = min + i;

	return (tab);
}
