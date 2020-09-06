#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at index
 * @h: head of lst
 * @idx: index to insert
 * @n: node value
 * Return: new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *ptr = *h;
	unsigned int i = 2;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		ptr->prev = node;
		node->next = ptr;
		*h = node;
		return (node);
	}
	while (ptr && i <= idx)
	{
		ptr = ptr->next;
		i++;
		if (ptr == NULL && i < idx)
		{
			free(node);
			return (NULL);
		}
	}
	if (ptr != NULL)
	{
		node->prev = ptr;
		node->next = ptr->next;
		ptr->next = node;
		ptr = node->next;
		if (ptr != NULL)
			ptr->prev = node;
	}
	else
		return (NULL);
	return (node);
}
