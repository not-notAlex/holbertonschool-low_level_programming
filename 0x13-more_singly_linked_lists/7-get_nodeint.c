#include "lists.h"

/**
 * 
 * @head: head of linked list
 * @index: index of node we want
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);
	if (head->next == NULL)
		return (NULL);
	return get_nodeint_at_index(head->next, index - 1);
}
