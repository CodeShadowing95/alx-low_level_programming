#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - make change of an amount of money
 *
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int change, nbr;

	change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbr = atoi(argv[1]);

	if (nbr < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (nbr % 25 >= 0)
	{
		change += nbr / 25;
		nbr = nbr % 25;
	}
	if (nbr % 10 >= 0)
	{
		change += nbr / 10;
		nbr = nbr % 10;
	}
	if (nbr % 5 >= 0)
	{
		change += nbr / 5;
		nbr = nbr % 5;
	}
	if (nbr % 2 >= 0)
	{
		change += nbr / 2;
		nbr = nbr % 2;
	}
	if (nbr % 1 >= 0)
	{
		change += nbr / 1;
	}

	printf("%d\n", change);
}
