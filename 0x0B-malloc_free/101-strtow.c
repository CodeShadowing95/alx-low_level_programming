#include <stdlib.h>
#include "main.h"

/**
 * wordsCounter - count the number of words in a string
 *
 * @s: string to analyze
 * Return: number of words
 */
int wordsCounter(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - split a string into words
 *
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int _strlen = 0, i, k, words, c = 0, start, end;

	if (str == NULL || str == "")
		return (NULL);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			_strlen++;
		}
	}
	_strlen++;

	words = wordsCounter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= _strlen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
	
}
