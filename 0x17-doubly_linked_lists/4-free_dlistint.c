#include "lists.h"

/**
 * free_dlistint -function that frees a dlistint_t list.
 * @head: pointer to the head of the list.
 * Return: void
**/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
