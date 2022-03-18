#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry point
 * @size: parameter
 *
 * Return: the triangme
 */
void print_triangle(int size)
{
int i = 1, j;

if (size > 0)
{
while (i <= size)
{
j = i;
while (j < size)
{
putchar(' ');
j++;
}

j = 1;
while (j <= i)
{
putchar(35);
j++;
}
putchar('\n');
i++;
}
}
else if (size <= 0)
{
putchar('\n');
}
}
