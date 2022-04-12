#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - print the struct dog
 *
 * @d: the struct dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(d);
		exit(98);
	}

	name = (char *)malloc(sizeof(char));
	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);

	age = malloc(sizeof(float));
	if (d->age == 0.0f)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	owner = (char *)malloc(sizeof(char));
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
