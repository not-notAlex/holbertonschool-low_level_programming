#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: head of list
 * @index: index of node
 * Return: specific node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 1; i <= index; i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
