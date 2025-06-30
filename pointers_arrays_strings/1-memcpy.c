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

	for (octet = 0; octet < n && src[octet] != '\0'; octet++)
	{
		dest[octet] = src[octet];
	}
	for (; octet < n; octet++)
	{
		dest[octet] = '\0';
	}
	return (dest);
}
