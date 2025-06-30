#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 * @s: pointer to the memory area s
 * @b: constant byte b
 * @n: iteration
 * Return: the pointer
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int octet;

	for (octet = 0; octet < n; octet++)
	{
		s[octet] = b;
	}
	return (s);
}

