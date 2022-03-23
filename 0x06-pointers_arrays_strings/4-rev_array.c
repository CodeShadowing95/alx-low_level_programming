#include <string.h>
#include "main.h"

/**
 * reverse_array - Reverse the order of an array
 * @a: array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
int j = n - 1;

while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
