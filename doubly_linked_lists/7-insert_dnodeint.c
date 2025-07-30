#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: Pointer th=o the start of the list
 * @idx: Index to insert the new node
 * @n: Value to insert
 * Return: The new node at the idx position
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	current_node = *h;
	i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current_node != NULL && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;

	current_node->next->prev = new_node;
	current_node->next = new_node;

	return(new_node);
}
