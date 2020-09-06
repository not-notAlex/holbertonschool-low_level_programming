#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index to delete
 * Return: 1 if success 0 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1 = *head, *ptr2 = NULL;
	unsigned int i = 1;

	if (*head == NULL)
		return (1);
	if (ptr1 != NULL)
		ptr2 = ptr1->next;
	if (index == 0)
	{
		free(ptr1);
		*head = ptr2;
		if (ptr2 != NULL)
			ptr2->prev = NULL;
		return (1);
	}
	while (i < index)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
		i++;
		if (i < index && ptr2 == NULL)
			return (-1);
	}
	ptr1->next = ptr2->next;
	ptr2->next->prev = ptr1;
	free(ptr2);
	return (1);
}
