#include "lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
