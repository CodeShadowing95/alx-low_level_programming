#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Entry point
 *
 * @str: string
 * Return: a pointer to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	char *p;

	if (!str)
		return (NULL);

	p = (char *) malloc(strlen(str) + 1);


	if (p != NULL)
		strcpy(p, str);


	return (p);
}
