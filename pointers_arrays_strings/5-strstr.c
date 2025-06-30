#include <stdio.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of needle in haystack,
 *         or NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int n;
	int h;
	char *p;

	for (n = 0; needle[n] != '\0'; n++)
	{
		for (h = 0; haystack[h] != '\0'; h++)
		{
			if (needle[n] == haystack[h])
			{
				return (p = &haystack[h]);
			}
		}
	}
	return (NULL);
}
