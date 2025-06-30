#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: length max
 * Return: the copy
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int octet;

	for (octet = 0; src[octet] < src[n]; octet++)
	{
		dest[octet] = src[octet];
	}
	return (dest);
}
