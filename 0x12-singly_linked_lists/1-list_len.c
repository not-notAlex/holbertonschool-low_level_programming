#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (1);

	return (1 + list_len(h->next));
}
