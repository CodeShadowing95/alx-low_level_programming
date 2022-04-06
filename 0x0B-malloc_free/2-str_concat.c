#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate 2 strings
 *
 * @s1: string
 * @s2: string to concatenate in the first string
 * Return: s1 and s2 concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/** Quick way to get the length of a string **/
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			concat[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			concat[i] = s2[j];
			i++;
			j++;
		}
		concat[i] = '\0';
	}

	return (concat);
}
