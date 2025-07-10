#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that defines a dog's basic information
 * @name: Pointer to the dog's name (string)
 * @age: Age of the dog (float)
 * @owner: Pointer to the owner's name of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
