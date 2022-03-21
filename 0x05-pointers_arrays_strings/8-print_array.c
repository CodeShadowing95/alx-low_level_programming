#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 *
 * @a: array
 * @n: size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
if (i == n - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
i++;
}
}
printf("\n");
}
