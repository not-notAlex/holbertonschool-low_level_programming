#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table
 * @key: key to parse
 * @value: value of node
 * Return: 1 if success; 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;

	if (ht == NULL || ht->array == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (add_node(&ht->array[index], key, value) == NULL)
		return (0);
	return (1);
}

/**
 * add_node - adds a new node a beginning of list
 * @head: head of linked list
 * @key: key of node
 * @value: value of element
 * Return: address of new element
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
