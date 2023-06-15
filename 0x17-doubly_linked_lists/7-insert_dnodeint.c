#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node,
 * at a given position.
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: int.
 * @n: int.
 * Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_done, *k;
	unsigned int i;

	k = *h;
	i = 0;

	if (h == NULL)
		return (NULL);
	n_done = malloc(sizeof(dlistint_t));
	if (n_done == NULL)
		return (NULL);
	n_done->n = n;
	if (idx == 0)
	{
		n_done->prev = NULL;
		n_done->next = *h;
		if (*h != NULL)
			(*h)->prev = n_done;
		*h = n_done;
		return (n_done);
	}
	while (k != NULL && i < idx - 1)
	{
		k = k->next;
		i++;
	}
	if (k == NULL)
	{
		free(n_done);
		return (NULL);
	}
	n_done->prev = k;
	n_done->next = k->next;
	if (k->next != NULL)
		k->next->prev = n_done;

	k->next = n_done;
	return (n_done);
}
