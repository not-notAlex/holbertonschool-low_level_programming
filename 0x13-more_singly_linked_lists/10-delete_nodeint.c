#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: head of linked list
 * @index: index of node to delete
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index > 0)
	{
		for (i = 0; i < index - 1; i++)
			temp = temp->next;
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
	}
	else
	{
		free(*head);
		*head = (*head)->next;
	}
	return (1);
}
