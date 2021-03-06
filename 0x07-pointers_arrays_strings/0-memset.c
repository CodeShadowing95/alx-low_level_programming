#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: void pointer. We can pass any type of pointer to this function
 * @b: constant byte
 * @n: number of bytes of the memory to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n * sizeof(*s)));
}
