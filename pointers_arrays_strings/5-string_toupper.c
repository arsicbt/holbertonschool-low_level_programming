#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the input string
 *
 * Return: pointer to the modified string
**/
char *string_toupper(char *str)
{
	int element;

	for (element = 0; str[element] != '\0'; element++)
	{
		if (str[element] >= 97 && str[element] <= 122)
		{
			str[element] = str[element] - 32;
		}
	}
	return (str);
}
