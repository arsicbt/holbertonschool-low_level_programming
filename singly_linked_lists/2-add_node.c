#include "lists.h"
#include <stdlib.h>
#include <string.h>

#include "lists.h"

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
 * add_node - Add a new node(s) at the head of a string
 * @head: the first node of a string
 * @str: the linked list
 * Return: the new node(s)
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup;
	new_node->len = _strlen(dup);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
