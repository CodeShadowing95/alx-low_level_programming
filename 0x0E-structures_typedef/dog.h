#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type dog
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Description: Create the structure dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

void init_dog(struct dog *, char *, float, char *);
