#include <stdio.h>
#include <stdlib.h>
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
	int sum = 0;

	if (argc > 2)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
