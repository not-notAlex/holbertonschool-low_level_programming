#include "lists.h"

/**
 * print_listint - prints all elements of a list and returns the number
 * @h: head of nodes
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);

	if (h->next == NULL)
		return (1);

	return (1 + print_listint(h->next));
}
