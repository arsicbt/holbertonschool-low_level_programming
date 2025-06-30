#include <stdio.h>

/**
 * _strchr - Display the c's characteres, betwin c in a string
 * @s: pointer to the start of of a string
 * @c: charactere
 * Return: NULL
**/
char *_strchr(char *s, char c)
{
	int charactere;

	for (charactere = 0; s[charactere] != '\0'; charactere++)
	{
		if (s[charactere] == c)
		{
			return (&s[charactere]);
		}
		if (c == '\0')
		{
			return (&s[charactere]);
		}
	}
	return (NULL);
}
