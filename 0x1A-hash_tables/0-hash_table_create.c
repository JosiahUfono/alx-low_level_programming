#include "hash_tables.h"

/**
 * hash_table_create - Method that creates a hash table;
 * @size: the size of the array.
 * Return: If there's an error, returns NULL,
 * else returns the hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int j;

	new_hash_table = malloc(sizeof(hash_table_t *));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		new_hash_table->array[j] = NULL;

	return (new_hash_table);
}
