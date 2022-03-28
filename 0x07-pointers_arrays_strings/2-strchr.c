#include <string.h>
#include "main.h"

/**
 * _strchr - search for the 1st occurrence of a character in a string
 *
 * @s: string
 * @c: char
 * Return: string from the 1st occ. of the char. in the str, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
