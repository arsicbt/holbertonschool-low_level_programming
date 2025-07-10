#include "dog.h"
#include <stdio.h>

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
		printf("Name : %d\n", nil);
	} else
	{
		printf("Name : %s\n", d->name);
	}

	if (d->age == NULL)
	{
		printf("Age : %dn", nil);
	} else
	{
		printf("Age : %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner : %d\n", nil);
	} else
	{
		printf("Owner : %s\n", d->owner);
	}
}

