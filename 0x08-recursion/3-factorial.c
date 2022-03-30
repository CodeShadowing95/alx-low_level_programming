#include <stdio.h>
#include "main.h"

/**
 * factorial - get the factorial of a number
 *
 * @n: the given number
 * Return: the factorial of the given number
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
