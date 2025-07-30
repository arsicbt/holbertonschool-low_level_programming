#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - Add a new node(s) at the tail of a string
 * @head: the first node of a string
 * @str: the linked list
 * Return: the new node(s)
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup;
	new_node->len = _strlen(dup);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
