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
if (b != 9)
{
printf("%2d, ", a * b);
}
else
{
printf("%d", a * b);
}
b++;
}
printf("\n");
a++;
}

}

