#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: number
 * @index: index of bit of the number
 * Return: value of the bit at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n >= 1)
	{
		if (i == index)
		{
			/*
			 * Can do the same work
			 * bitStatus = (num >> n) & 1;
			 * get the specific at a given index
			 */
			if (n % 2 == 0)
				return (0);
			else
				return (1);
		}

		n = n / 2;
		i++;
	}

	if (index > i && index < 63)
	{
		return (0);
	}

	return (-1);
}
