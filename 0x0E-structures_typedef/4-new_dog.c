#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: new owner
 * Return: pointer to struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
