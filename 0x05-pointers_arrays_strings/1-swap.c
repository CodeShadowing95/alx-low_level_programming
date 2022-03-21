#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: Pointer to the address of the 1st number
 * @b: Pointer to the address of the 2nd number
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int p;

p = *a;
*a = *b;
*b = p;
}
