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
	dlistint_t *n_node, *i;
	unsigned int j;

	i = *h;
	j = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	n_node = malloc(sizeof(dlistint_t));

	while (i != NULL && j < idx - 1)
	{
		i = i->next;
		j++;
	}
	if (i == NULL)
		return (NULL);

	if (i->next == NULL)
		return (add_dnodeint_end(h, n));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = i;
	n_node->next = i->next;
	i->next->prev = n_node;
	i->next = n_node;
	return (n_node);
}
