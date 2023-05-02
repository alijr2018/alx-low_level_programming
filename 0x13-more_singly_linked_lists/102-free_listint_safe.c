#include"lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: double pointer
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *a;
	size_t i;
	int j;

	if (*h == NULL || h == NULL)
	{
		return (0);
	}

	for (i = 0; *h; i++)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			a = (*h)->next;
			*h = a;
		}
		else
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (i);
}
