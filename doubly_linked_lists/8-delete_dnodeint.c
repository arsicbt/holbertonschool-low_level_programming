#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete;
	unsigned int i;

	node_to_delete = *head;
	i = 0;

	if (*head == NULL)
	{
		return (-1);
	}


	if (index == 0)
	{
		*head = node_to_delete->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(node_to_delete);
		return (1);
	}


	while (node_to_delete != NULL && i < index)
	{
		node_to_delete = node_to_delete->next;
		i++;
	}


	if (node_to_delete == NULL)
	{
		return (-1);
	}

	if (node_to_delete->prev != NULL)
	{
		node_to_delete->prev->next = node_to_delete->next;
	}
	if (node_to_delete->next != NULL)
	{
		node_to_delete->next->prev = node_to_delete->prev;
	}

	free(node_to_delete);
	return (1);
}
