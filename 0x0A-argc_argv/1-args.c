#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: vector of arguments
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;
	int count = 0;

	if (argc > 1)
	{
		while (i < argc - 1)
		{
			count++;
			i++;
		}
	}

	printf("%d\n", count);

	return (0);
}
