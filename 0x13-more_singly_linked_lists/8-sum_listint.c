#include "lists.h"

/**
 * sum_listint - Returns sum of all data in linked list
 * @head: head of linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
