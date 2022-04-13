#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - store a copy of a string
 *
 * @str: string to make a copy
 * Return: string
 */
char *_strcpy(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	i += 1;

	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}

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
	char *cpy_name, *cpy_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	cpy_name = _strcpy(name);
	if (cpy_name == NULL)
	{
		free(d);
		return (NULL);
	}

	cpy_owner = _strcpy(owner);
	if (cpy_owner == NULL)
	{
		free(cpy_name);
		free(d);
		return (NULL);
	}

	d->name = cpy_name;
	d->age = age;
	d->owner = cpy_owner;

	return (d);
}
