#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: table to print
 *
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char *sep = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			temp = ht->array[index];
			while (temp)
			{
				printf("%s\'%s\': \'%s\'", sep, temp->key, temp->value);
				sep = ", ";
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
