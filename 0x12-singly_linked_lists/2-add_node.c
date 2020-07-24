#include "lists.h"

/**
 * add_node - Adds a node to the head of a list
 * @head: head of linked list
 * @str: string to put into list
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *newstr;
	list_t *item;

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
	if (head == NULL)
		item->next = NULL;
	else
		item->next = *head;
	*head = item;
	return (item);
}
