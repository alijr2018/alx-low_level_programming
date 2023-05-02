#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node
 *at index index of a listint_t linked list.
 *@head: double pointer.
 *@index: int
 *Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i, *a;
	unsigned int j;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
		return (1);
	}
	i = *head;
	j = 0;
	while (j < index - 1)
	{
		if (i->next == NULL)
			return (-1);
		j++;
		i = i->next;
	}
	a = i->next;
	i->next = a->next;
	free(a);
	return (1);
}
