#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Create a new node at the start of a list
 * @head: Pointer to the first node of a list
 * @n: Value that will be stock in the list
 * Return: The new node(s).
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
