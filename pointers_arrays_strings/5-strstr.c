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

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (h = 0; haystack[h] != '\0'; h++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[h + n] != needle[n])
			{
				break;
			}
		}
		if (needle[n] == '\0')
		{
			return (&haystack[h]);
		}
	}
	return (NULL);
}
