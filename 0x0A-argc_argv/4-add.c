#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	int nbr;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			nbr = atoi(argv[i]);
			if (nbr)
			{
				sum += nbr;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
	}

	printf("%d\n", sum);

	return (sum);
}
