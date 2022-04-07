#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates args from a program to string
 *
 * @ac: arguments count
 * @av: array of arguments
 * Return: all the arguments concatenated
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, i = 0, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			len++, j++;
		len++, i++;
	}
	len++;
	str = (char *)malloc(sizeof(char) * len);
	if (str == 0)
	{
		free(str);
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			str[k] = av[i][j], j++, k++;
		str[k] = '\n', k++, i++;
	}
	str[k] = 0;
	return (str);
}
