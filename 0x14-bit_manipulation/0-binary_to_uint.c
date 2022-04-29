#include <stdio.h>
#include "main.h"

/**
 * _strlen - ...
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * power - get the power of a by b
 * @a: number
 * @b: power
 * Return: a pow b
 */
int power(int a, int b)
{
	int res, pwr = 1;

	if (b == 0)
		res = 1;
	else
	{
		while (b--)
		{
			pwr *= 2;
		}
	}
	res = a * pwr;
	return (res);
}

/**
 * binary_to_uint - convert a binary into an unsigned int
 * @b: binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n = (b[i] - '0');
		sum += power(n, (_strlen(b) - 1) - i);
	}

	return (sum);
}
