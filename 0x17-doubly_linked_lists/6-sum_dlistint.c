#include "lists.h"

/**
 * sum_dlistint - returns sum of elements in list
 * @head: head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
