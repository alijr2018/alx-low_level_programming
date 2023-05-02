#include"lists.h"

/**
 * reverse_listint- function that reverses a listint_t linked list.
 * @head: double pointer
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *j;

	if (*head == NULL || *head == NULL)
		return (NULL);

	i = NULL;
	j = i;
	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = i;
	}
	*head = j;
	return (*head);
}
