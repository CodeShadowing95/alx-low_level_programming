#include "main.h"

/**
 * print_number - Entry point
 * @a: parameter
 *
 * Return: Integer
 */
void print_number(int a)
{
unsigned int j;

if (a < 0)
{
j = -a;
putchar('-');
}
else
{
j = a;
}
if (j / 10)
{
print_number(j / 10);
}
_putchar((j % 10) + '0');
}
