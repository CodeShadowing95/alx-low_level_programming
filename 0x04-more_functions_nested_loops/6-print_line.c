#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n: parameter
 *
 * Return: straight line
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
