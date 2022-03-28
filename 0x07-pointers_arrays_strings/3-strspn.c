#include <string.h>
#include "main.h"

/**
 * _strspn - length of a prefix substring
 *
 * @s: main string to be scanned
 * @accept: string containing the list of chars to match in s
 * Return: number of chars in the initial segment of s which consist only
 * of chars from str2
:q
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
