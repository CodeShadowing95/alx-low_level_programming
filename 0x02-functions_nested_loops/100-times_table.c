#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: parameter
 *
 * Return: n times table
 */
void print_times_table(int n)
{
int i = 0;
int j;

if (n > 0 && n < 15)
{
while (i <= n)
{
j = 0;
while (j <= n)
{
if (j == 0)
{
printf("%d, ", i * j);
}
else
{
if (j == n)
{
printf("%3d", i * j);
}
else
{
printf("%3d, ", i * j);
}
}
j++;
}
printf("\n");
i++;
}
}

}

