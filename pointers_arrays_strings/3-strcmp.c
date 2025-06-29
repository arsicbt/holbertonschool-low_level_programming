#include "main.h"

/**
 * _strcpm - compare 2 strings
 * @s1: pointer to the start of the string
 * @s2: pointer to the start of the string
 * Return: the diference
**/
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
		{
			return s1[c] - s2[c];
		}
	}
	return 0;
}
