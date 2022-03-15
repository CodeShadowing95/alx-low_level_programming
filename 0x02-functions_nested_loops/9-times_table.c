#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: 9 times table
 */
void times_table(void)
{
int a = 0;
int b;

while (a < 10)
{
b = 0;
while (b < 10)
{
if (b == 0)
{
printf("%d,", a * b);
}
else
{
if (b != 9)
{
printf("%3d,", a * b);
}
else
{
printf("%3d", a * b);
}
}
b++;
}
printf("\n");
a++;
}

}

