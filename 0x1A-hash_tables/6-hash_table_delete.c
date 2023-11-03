#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: Hash table to delete.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			hash_node_t *temp = current;

			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		ht->array[i] = NULL; /* Set the array index to NULL */
	}

	free(ht->array);
	free(ht);
}
