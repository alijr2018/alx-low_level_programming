#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning,
 * of a dlistint_t list.
 * @head: double pointer to the head pointer of a doubly linked list.
 * @n: int
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->i = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->perv = node;
	*head = node;
	return (node);
}
