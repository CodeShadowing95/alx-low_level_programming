#include <string.h>
#include "main.h"

/**
 * _strchr - search for the 1st occurrence of a character in a string
 *
 * @s: string
 * @c: char
 * Return: pointer to the 1st occurrence of the character c in s, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
