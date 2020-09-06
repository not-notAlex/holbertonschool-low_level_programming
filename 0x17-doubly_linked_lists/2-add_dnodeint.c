#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning
 * @head: head of list
 * @n: value of new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	(*head)->prev = node;
	*head = node;
	return (node);
}
