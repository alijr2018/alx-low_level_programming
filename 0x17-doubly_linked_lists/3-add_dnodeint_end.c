#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node,
 * at the end of a dlistint_t list.
 * @head: double pointer to the head pointer of a doubly linked list.
 * @n: int.
 * Return: the address of the new element, or NULL if it failed.
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *i;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	i = *head;
	while (i->next != NULL)
	{
		i = i->next;
	}

	i->next = node;
	node->prev = i;

	return (node);
}
