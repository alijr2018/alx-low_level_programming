#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list.
 * @head: double pointer
 * Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *i;
	int a;

	if (*head == NULL)
		return (0);

	a = 0;
	a = (*head)->n;
	i = *head;
	*head = (*head)->next;
	free(i);

	return (a);
}
