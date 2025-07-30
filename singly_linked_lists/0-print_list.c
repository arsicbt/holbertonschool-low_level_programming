#include "lists.h"
#include <stdio.h>
#include <stddef.h>

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

/**
 * print_list - Print all element of a list_t
 * @h: Pointer to the end of the list
 * Return: The number of nodes.
**/
size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", _strlen_recursion(h->str), h->str);
		}
		h = h->next;
		len++;
	}

	return (len);
}
