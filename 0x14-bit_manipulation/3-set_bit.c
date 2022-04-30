#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at nth index
 * @n: pointer to int
 * @index: index of the bit we want to set
 * Return: 1 if it worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : - 1);
}
