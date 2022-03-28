#include <string.h>
#include "main.h"

/**
 * _strstr - find the first occurrence of a sub-string in a main string
 *
 * @haystack: main string to be examined
 * @needle: small string to be searched in haystack string
 * Return: pointer to the 1st char of the found needle in haystack
 * otherwise a null pointer if needle is not present in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
