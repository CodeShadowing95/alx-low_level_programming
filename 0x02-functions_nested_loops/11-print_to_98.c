#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: parameter
 *
 * Return: all natural numbers from n to 98
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}
n++;
}
}
else
{
while (n >= 98)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}
n--;
}
}

}

