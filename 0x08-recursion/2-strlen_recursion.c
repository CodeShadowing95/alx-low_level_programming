#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Get the length of a string through recursion
 *
 * @s: string to analyze
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
