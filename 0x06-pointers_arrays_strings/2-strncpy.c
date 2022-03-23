#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Copy the content of a string to another string
 * @dest: destination string
 * @src: string to copy
 * @n:number of chars to be copied
 * Return: String copied from a source string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
