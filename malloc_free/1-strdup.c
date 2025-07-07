#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int len = strlen(str);
	char *copy = malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
