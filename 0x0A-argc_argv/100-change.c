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
	int coin[] = {25, 10, 5, 2, 1}, change = 0, nbr, j = 0;

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

	while (j < 5)
	{
		while (nbr >= coin[j])
		{
			change++;
			nbr -= coin[j];
		}
		if (nbr == 0)
			break;
		j++;
	}

	printf("%d\n", change);
	return (0);
}
