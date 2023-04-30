#include"lists.h"

/**
 *add_nodeint - function that adds a new node at
 *the beginning of a listint_t list.
 *@head: double pointer
 *@n: constante
 *Return:the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = *head;
	*head = i;
	return (i);
}
