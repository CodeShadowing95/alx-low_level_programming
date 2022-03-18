#include "main.h"

/**
 * print_number - Entry point
 * @a: parameter
 *
 * Return: Integer
 */
void print_number(int n)
{
unsigned int j;

if (n < 0)
{
j = -n;
putchar('-');
}
else
{
j = n;
}
if (j / 10)
{
print_number(j / 10);
}
_putchar((j % 10) + '0');
}
