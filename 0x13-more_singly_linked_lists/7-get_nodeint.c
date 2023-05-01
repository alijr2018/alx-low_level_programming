#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer
 * @index: int
 * Return:the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
