#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: the parameter to check
 * Return: 1 if n is a positive, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)
{
int sign;
if (n > 0)
{
_putchar('+');
sign = 1;
}

if (n < 0)
{
_putchar('-');
sign = -1;
}

if (n == 0)
{
_putchar('0');
sign = 0;
}

return (sign);
}

