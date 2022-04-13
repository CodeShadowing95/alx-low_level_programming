#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the allocated memory to the struct dog_t
 *
 * @d: struct dog_t to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
