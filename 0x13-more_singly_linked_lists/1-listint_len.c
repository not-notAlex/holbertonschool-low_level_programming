#include "lists.h"

/**
 * listint_len - Returns number of nodes in list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h->next == NULL)
		return (1);

	return (1 + listint_len(h->next));
}
