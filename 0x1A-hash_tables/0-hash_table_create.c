#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: pointer to the newly created hash table,
 * Otherwise (NULL)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_hashtable = malloc(sizeof(hash_table_t));
	if (new_hashtable == NULL)
		return (NULL);

	new_hashtable->size = size;

	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtable->array == NULL)
	{
		free(new_hashtable); /*Cleanup on failure*/
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_hashtable->array[i] = NULL;
	}
	return (new_hashtable);
}
