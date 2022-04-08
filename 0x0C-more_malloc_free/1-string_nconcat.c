#include <stdlib.h>
#include "main.h"

/**
 * len - get the length of a string
 *
 * @s: string
 * Return: int
 */
unsigned int len(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate 2 strings
 *
 * @s1: first string
 * @s2: second string to concatenate
 * @n: amount of bytes of s2 to be added to s1 to do concatenation
 * Return: pointer to s1 and s2 concatenated or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len(s2))
		concat = malloc(len(s1) + len(s2) + 1);
	else
		concat = malloc(len(s1) + n * sizeof(char) + 1);

	if (concat == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
