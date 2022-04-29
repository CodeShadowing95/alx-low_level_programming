#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: number
 * @index: index of bit of the number
 * Return: value of the bit at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, r;

	while (n >= 1)
	{
		r = n % 2;
		n = n / 2;

		if (i == index)
		{
			return (r);
		}
		i++;
	}

	return (-1);
}
