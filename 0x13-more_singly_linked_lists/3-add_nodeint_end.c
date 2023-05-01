#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node
 *at the end of a listint_t list.
 * @head:double pointer
 * @n:constante
 * Return:  the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *a;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->next = NULL;
	i->n = n;

	if (*head)
	{
		a = *head;
		while (a->next != NULL)
			a = a->next;
		a->next = i;
	}
	else
		*head = i;
	return (i);
}
