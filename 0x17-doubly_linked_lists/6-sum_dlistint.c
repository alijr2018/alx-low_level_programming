#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data,
 * (n) of a dlistint_t linked list.
 * @head: pointer to the first node of the doubly linked list.
 * Return: the sum of all the data (n).
*/

int sum_dlistint(dlistint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
