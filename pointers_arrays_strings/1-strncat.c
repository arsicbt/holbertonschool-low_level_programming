#include "main.h"

/**
 * _strncat - concatenate 2 strings.
 * @dest: pointer to a string, inside it we add src
 * @src: pointer to the string we need to add
 * @n: length of src
 * Return: ptr, a concactenate string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
	ptr++;
	}

	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		i++;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
