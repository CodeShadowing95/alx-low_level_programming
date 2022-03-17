#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: parameter
 *
 * Return: straight line
 */
void print_diagonal(int n)
{
int i = 0, j;
if (n > 0)
{
while (i < n)
{
if (i == 0)
{
putchar('\\');
putchar('\n');
}
else
{
j = 0;
while (j < i)
{
putchar(' ');
j++;
}
putchar('\\');
putchar('\n');
}
i++;
}
putchar('\n');
}
else if (n <= 0)
{
putchar('\n');
}
}

