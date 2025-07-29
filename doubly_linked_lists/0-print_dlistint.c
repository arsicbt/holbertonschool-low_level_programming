#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - Count the number of node in a doubly linked list
 * @h: pointer to the end of the list
 * Return: The number of node.
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
