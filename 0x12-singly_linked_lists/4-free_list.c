#include "lists.h"

/**
 * free_list - frees a list in memory
 * @head: head of linked list
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head->next)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}
}
