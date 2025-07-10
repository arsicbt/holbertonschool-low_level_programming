#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - make a copy
 * @dest: destination
 * @src: source
 * Return: the copy
**/
char *_strcpy(char *dest, char *src)
{
	int charactere;

	for (charactere = 0; src[charactere] != '\0'; charactere++)
	{
		dest[charactere] = src[charactere];
	}
	dest[charactere] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: The new dog.
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	name = _strcpy(dog->name, name);
	dog->name = name;
	dog->age = age;
	owner = _strcpy(dog->owner, owner);
	dog->owner = owner;

	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	return (dog);
}
