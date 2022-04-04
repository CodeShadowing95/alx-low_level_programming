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
	unsigned int i, sum = 0, nbr;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (argc-- && argc > 0)
	{
		i = 0;

		while (argv[argc][i] != '\0')
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		nbr = atoi(argv[argc]);
		sum += nbr;
	}

	printf("%d\n", sum);

	return (sum);
}
