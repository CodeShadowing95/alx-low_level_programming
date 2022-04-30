#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at nth index
 * @n: pointer to unsigned long int
 * @index: index, starting from 0 of the bit we want to set
 * Return: 1 if it worked, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
