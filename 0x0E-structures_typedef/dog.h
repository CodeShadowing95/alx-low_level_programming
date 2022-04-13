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

/**
 * struct dog_t - new name for the type struct dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog's owner
 *
 * Description: define a new type as a new name for the type struct dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *);

#endif

