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

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
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
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * isNumber - Check if a string is a number or not
 *
 * @number: the string to check
 * Return: 1 if number, 0 otherwise
 */
int isNumber(char *number)
{
	int i = 0;

	while (number[i] != '\0')
	{
		if (!isdigit(number[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
