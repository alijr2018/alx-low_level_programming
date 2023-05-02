#include"lists.h"

/**
 *insert_nodeint_at_index - function that inserts
 *a new node at a given position.
 *@head: double pointer
 *@idx:index of list
 *@n: int
 *Return: the address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i, *a;
	unsigned int j;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	a = *head;

	if (idx == 0)
	{
		i->next = *head;
		*head = i;
		return (*head);
	}
	j = 0;
	while (a != NULL)
	{
		if (j == idx - 1)
		{
			i->next = a->next;
			a->next = i;
		}
		j++;
		a = a->next;
	}
	if (idx > j)
		return (NULL);
	return (i);
}
