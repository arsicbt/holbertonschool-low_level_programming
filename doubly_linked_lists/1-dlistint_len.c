#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Count the number of nodes in a doubly linked list
 * @h: Pointer to the end of a string
 * Return: The number of node.
**/
size_t dlistint_len(const dlistint_t *h)
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
