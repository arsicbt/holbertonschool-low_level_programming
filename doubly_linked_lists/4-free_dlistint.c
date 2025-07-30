#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: first node of the linked list
 * Return: void.
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
