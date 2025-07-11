#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - Frees the dogs strucutres.
 * @d: pointer to the dig structure
 * Return: void
**/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
	}
}
