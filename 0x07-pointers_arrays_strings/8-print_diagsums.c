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
	int sum1 = 0, sum2 = 0, i = 0;

	while (i < size)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
