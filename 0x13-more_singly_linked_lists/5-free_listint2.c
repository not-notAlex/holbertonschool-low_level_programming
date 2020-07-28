#include "lists.h"

/**
 * free_listint2 - Frees memory of list and sets head to NULL
 * @head: head of list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
