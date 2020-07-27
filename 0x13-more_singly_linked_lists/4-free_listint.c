#include "lists.h"

/**
 * free_listint - Frees memory of list
 * @head: head of list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
