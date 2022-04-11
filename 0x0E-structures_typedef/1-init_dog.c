#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the struct dog
 * @d: struct to initialize
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	free(d);
	return;
}

