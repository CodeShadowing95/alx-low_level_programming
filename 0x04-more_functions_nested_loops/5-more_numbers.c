#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j < 15)
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');

}
