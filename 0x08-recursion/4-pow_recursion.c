#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - x pow y
 *
 * @x: number
 * @y: exponent or power
 * Return: Value of x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
