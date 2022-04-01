#include "main.h"

/**
 * is_prime_number - Get the prime number
 *
 * @n: number to check
 * Return: 1 if the number is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}

/**
 * prime_number - Check whether the number is a prime number or not
 *
 * @n: the number to analyze
 * @divisor: the possible divisors of the number
 * Return: 1 if a prime number, 0 otherwise
 */
int prime_number(int n, int divisor)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}
	else
	{
		return (prime_number(n, divisor + 1));
	}
}
