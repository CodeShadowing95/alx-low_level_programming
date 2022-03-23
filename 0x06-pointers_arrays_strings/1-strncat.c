#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of chars to be appended
 * Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
