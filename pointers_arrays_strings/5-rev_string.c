#include "main.h"
#include <stdio.h>

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
 * rev_string - reverse a string
 * @s: char *
 * Return: the reversed string.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
