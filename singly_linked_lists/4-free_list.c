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
		to_free = head;
		head = head->next;
		free(to_free->str);
		free(to_free);
	}
}
