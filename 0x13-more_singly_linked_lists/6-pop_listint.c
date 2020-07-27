#include "lists.h"

/**
 * pop_listint - Removes the head node of a list
 * @head: head of linked list
 *
 * Return: new head of list
 */
int pop_listint(listint_t **head)
{
	int x;

	if (*head == NULL)
		return (0);
	x = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (x);
}
