#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a list
 * @head: head of linked list
 * @str: string to put into list
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *newstr;
	list_t *item, *tmp;

	if (str != NULL)
	{
		while (str[len])
			len++;
		newstr = malloc(len + 1);
		if (newstr == NULL)
		{
			printf("Error\n");
			return (NULL);
		}
		for (len = 0; str[len]; len++)
			newstr[len] = str[len];
		newstr[len] = '\0';
	}
	else
		return (NULL);
	item = malloc(sizeof(list_t));
	if (item == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	item->str = newstr;
	item->len = len;
	item->next = NULL;
	if (*head == NULL)
		*head = item;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = item;
	}
	return (item);
}
