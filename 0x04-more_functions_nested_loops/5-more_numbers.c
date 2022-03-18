#include "main.h"

/**
 * more_numbers - Entry point
 * Return: 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
int i = 0, j;

while (i < 10)
{
j = 0;
while (j < 15)
{
if (j / 10 == 1)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
j++;
}
_putchar('\n');
i++;
}
}
