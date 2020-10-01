#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int x;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		array[x] = NULL;
	table->size = size;
	table->array = array;

	return (table);
}
