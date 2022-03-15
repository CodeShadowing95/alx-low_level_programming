#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: the parameter to check
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
int last_digit = abs(n) % 10;
_putchar(last_digit + '0');
return (last_digit);
}

