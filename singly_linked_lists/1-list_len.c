#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - Check the len of an str.
 * @s: char *
 * Return: the len.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * list_len - Count the number of elements in a linked list_t list.
 * @h: Pointer to the end of the list
 * Return: The len of list_t
**/
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
