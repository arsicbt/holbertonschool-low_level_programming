#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: first node of the linked list
 * Return: void.
**/
void free_list(list_t *head)
{
	list_t *to_free;

	while (head != NULL)
	{
		to_free = head->next;
		free(head->str);
		free(head);
		head = to_free;
	}
}
