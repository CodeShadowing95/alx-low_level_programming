#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * @size: parameter
 *
 * Return: square
 */
void print_square(int size)
{
int i = 0, j;
if (size > 0)
{
while (i < size)
{
j = 0;
while (j < size)
{
putchar('#');
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

