#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog -  prints a struct dog
 * @d: pointer to the struct dog to print
 * Return: void.
**/
void print_dog(struct dog *d)
{
	char *nil;

	nil = "(nil)";

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: %s\n", nil);
	} else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: %s\n", nil);
	} else
	{
		printf("Owner: %s\n", d->owner);
	}
}

