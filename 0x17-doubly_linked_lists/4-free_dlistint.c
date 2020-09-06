#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of list
 *
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		if (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
	}
	free(head);
}
