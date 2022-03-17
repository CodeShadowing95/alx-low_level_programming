#include <stdio.h>

/**
 * positive_negative - Entry point
 *
 * @n: integer
 * Return: A message according to the sign of a number
 */
void positive_or_negative(int n)
{

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
}
