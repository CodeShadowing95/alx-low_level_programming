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
	if (d)
	{
		if (d->name)
			free(d->name);
		if(d->owner)
			free(d->owner);
		free(d);
	}
}
