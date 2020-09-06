#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 * @head: head of list
 * @n: value of node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = node;
	node->prev = ptr;
	return (node);
}
