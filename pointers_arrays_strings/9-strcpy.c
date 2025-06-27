#include "main.h"
#include <stdio.h>

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
