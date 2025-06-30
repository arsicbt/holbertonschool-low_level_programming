#include <stdio.h>

/**
 * _strpbrk - Finds the first character in s that matches any in accept
 * @s: The main string to search through
 * @accept: The string containing accepted characters
 *
 * Return: Pointer to the first matching character in s, or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int c;
	int a;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[c] == accept[a])
			{
				return (p = &s[c]);
			}
		}
	}
	return (NULL);
}
