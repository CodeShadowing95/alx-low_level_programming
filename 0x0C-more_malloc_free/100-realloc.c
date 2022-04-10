#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the old block of memory
 * @new_size: size of the new block of memory
 * Return: NULL or pointer to the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	unsigned int max = new_size, i;
	char *oldPtr = ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		newPtr[i] = oldPtr[i];
	free(ptr);

	return (newPtr);
}
