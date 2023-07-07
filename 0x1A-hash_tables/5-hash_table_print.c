#include"hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 * Return: void.
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_first = 1;
	hash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!is_first)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			is_first = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
