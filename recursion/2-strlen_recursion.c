#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int i;
	i = 0;

	if (*s != '\0')
	{
		i += 1;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
