#include"lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer.
 * Return: the number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	long int j;

	if (!head)
		exit(98);
	i = 0;
	while (head)
	{
		j = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (j > 0)
			head = head->next;
		else
		{
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (j);
}
