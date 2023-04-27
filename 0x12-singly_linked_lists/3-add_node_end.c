#include "lists.h"

/**
 * _strlen - calculate the length of a string.
 * @s: the string to calculate it's length.
 * Return: length of a string.
 **/

int _strlen(const char *s)
{
	int i;
	int x;

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}
	return (x);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newa, *tmpa;

	if (str == NULL)
		return (NULL);
	newa = malloc(sizeof(list_t));
	if (newa == NULL)
		return (NULL);
	newa->str = strdup(str);
	if (newa->str == NULL)
	{
		free(newa);
		return (NULL);
	}
	newa->len = _strlen(newa->str);
	newa->next = NULL;
	if (*head == NULL)
	{
		*head = newa;
		return (newa);
	}
	tmpa = *head;
	while (tmpa->next)
		tmpa = tmpa->next;
	tmpa->next = newa;
	return (newa);
}
