#include "lists.h"

/**
 * print_list - prints all of the elements of a list
 * @h: List to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (1 + print_list(h->next));
	}
	printf("[%u] %s\n", h->len, h->str);

	return (1 + print_list(h->next));
}
