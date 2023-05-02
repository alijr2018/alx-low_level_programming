#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
*/


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	a = head;
	b = a;

	if (!head)
		return (NULL);

	while (a && b && a->n)
	{
		b = b->next;
		a = a->next->next;

		if (a == b)
		{
			b = head;

			while (b != a)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
	}
	return (NULL);
}
