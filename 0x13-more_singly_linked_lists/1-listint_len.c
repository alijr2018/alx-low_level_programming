#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 *@h: pointer to struct
 *Return: the number of elements in a linked listint_t list.
 **/

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
