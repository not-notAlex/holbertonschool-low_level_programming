#include "lists.h"

/**
 * print_dlistint - prints elements of list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}
	return (sum);
}
