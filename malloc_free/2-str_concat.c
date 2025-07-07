#include "main.h"
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
**/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;
	int len_s1, len_s2;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	p = malloc(len_s1 + len_s2 + 1);

	if (p == NULL || s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		p[i + j] = s2[j];
	}

	return (p);
}
