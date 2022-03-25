#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer
 *
 * @n: integer to print
 * Return: Nothing
 */
void print_number(int n)
{

unsigned int nbr;

if (n < 0)
{
_putchar('-');
nbr = -n;
}
else
{
nbr = n;
}

if (nbr / 10)
{
print_number(nbr / 10);
}
_putchar((nbr % 10) + '0');
}
