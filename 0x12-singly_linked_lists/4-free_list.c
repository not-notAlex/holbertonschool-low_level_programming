#include "lists.h"

/**
 * free_list - frees a list in memory
 * @head: head of linked list
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *tmp1, *tmp2;

	tmp1 = head;
	while (tmp1->next)
	{
		free(tmp1->str);
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
}
