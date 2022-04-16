#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition of 2 numbers
 *
 * @a: int
 * @b: int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of 2 numbers
 *
 * @a: int
 * @b: int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutiply 2 numbers
 *
 * @a: int
 * @b: int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a by b
 *
 * @a: int
 * @b: int
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of a by b
 *
 * @a: int
 * @b: int
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
