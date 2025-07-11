#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strdup - Duplicates a string to a newly allocated memory space
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	copy = malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';

	return (copy);
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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);

	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}

	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
