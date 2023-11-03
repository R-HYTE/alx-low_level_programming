#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: Hash table to print.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
