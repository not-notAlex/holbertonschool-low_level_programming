#include "lists.h"

/**
 * free_listint2 - Frees memory of list and sets head to NULL
 * @head: head of list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
}
