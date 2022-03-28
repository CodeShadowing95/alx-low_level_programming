#include <string.h>
#include "main.h"

/**
 * _strpbrk - finds 1st char in a string from another string
 *
 * @s: string to be scanned
 * @accept: string containing the chars to match
 * Return: pointer to the char in s that matches one of the chars in accept,
 * else returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
