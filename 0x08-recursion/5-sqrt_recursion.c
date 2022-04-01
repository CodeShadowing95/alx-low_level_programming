#include "main.h"

/**
 * _sqrt_recursion - Find natural square root of a number
 *
 * @n: number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - Get the square root
 *
 * @nbr: number
 * @val: value to be returned
 * Return: the natural square root
 */
int square_root(int nbr, int val)
{
	if (val * val == nbr)
	{
		return (val);
	}
	else if (val * val < nbr)
	{
		return (square_root(nbr, val + 1));
	}
	else
	{
		return (-1);
	}
}
