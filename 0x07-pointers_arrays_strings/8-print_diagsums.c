#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of 2 diagonals of a square matrix of integers
 *
 * @a: array of array or matrix
 * @size: size of the matrix in height and width
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
			j++;
		}
		i++;
	}

	i = size - 1;
	while (i >= 0)
	{
		j = size - 1;
		while (j >= 0)
		{
			if (i + j == 2)
			{
				sum2 += a[i][j];
			}
			j--;
		}
		i--;
	}

	printf("%d, %d", sum1, sum2);
}
