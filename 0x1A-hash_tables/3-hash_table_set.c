#include "hash_tables.h"

void free_node(hash_node_t *node);

/**
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table to add or update the key/value to
 * @key: Key to be indexed.
 * @value: Value associated with the key
 *
 * Return: 1 (Success), 0 (Otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	} else
	{
		hash_node_t *current = ht->array[index];

		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next;
			ht->array[index] = new_node;
			free_node(current);
			return (1);
		}

		while (current->next != NULL)
		{
			if (strcmp(current->next->key, key) == 0)
			{
				new_node->next = current->next->next;
				free_node(current->next);
				current->next = new_node;
				return (1);
			}
			current = current->next;
		}

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
