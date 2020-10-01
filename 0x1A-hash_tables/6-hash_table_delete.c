#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to delete
 *
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp, *next;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
