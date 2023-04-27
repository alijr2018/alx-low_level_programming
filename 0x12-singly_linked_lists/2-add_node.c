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
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
