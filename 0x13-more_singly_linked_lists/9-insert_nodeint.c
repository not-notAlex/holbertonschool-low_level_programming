#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: head of list
 * @idx: index of where to place node
 * @n: data of node
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (temp->next == NULL && i < idx - 2)
				return (NULL);
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
