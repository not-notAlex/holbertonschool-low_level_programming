#include "hash_tables.h"

/**
 * hash_table_get - gets a value from a hash table
 * @ht: hash table to search
 * @key: key to search with
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
