#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string to a newly allocated memory space
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
	int i;
	char *p = str;
	char *copy = malloc(*p + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != p['\0']; i++)
	{
		copy[i] = p[i];
	}

	return (copy);
}
