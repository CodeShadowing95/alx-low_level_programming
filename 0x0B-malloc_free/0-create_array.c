#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars and initialize it
 *
 * @size: size of the array
 * @c: character to be initialized
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
