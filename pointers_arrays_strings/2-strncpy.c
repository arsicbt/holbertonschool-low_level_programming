#include <stdio.h>

/**
 * _strncpy - make a copy
 * @dest: destination
 * @src: source
 * @n: length max
 * Return: the copy
**/
char *_strncpy(char *dest, char *src, int n)
{
	int charactere;

	for (charactere = 0; charactere < n && src[charactere] != 0; charactere++)
	{
		dest[charactere] = src[charactere];
	}

	for (; charactere < n; charactere++)
	{
		dest[charactere] = '\0';
	}
	return (dest);
}
