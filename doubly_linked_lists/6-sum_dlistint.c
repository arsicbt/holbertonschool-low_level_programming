#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the start of a the list
 * Return: The sum of the dta, or 0 if the list is empty
**/
int sum_dlistint(dlistint_t *head)
{
	int data_sum;

	data_sum = 0;

	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}
