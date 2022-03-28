#include <stdio.h>
#include <string.h>

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 *
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n * sizeof(*src)));
}
