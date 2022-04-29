#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: number
 * @index: index of bit of the number
 * Return: value of the bit at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n >= 1)
	{
		bit = (n >> index) & 1;
		if (bit != 0 && bit != 1)
			return (-1);
		return (bit);
	}

	return (-1);
}
