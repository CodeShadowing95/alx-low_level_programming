#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: Numbers from 0 to 9
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
