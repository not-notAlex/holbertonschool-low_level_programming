#include "holberton.h"

/**
 * _strdup - Copies a string to a new pointer
 * @str: string to copy
 *
 * Return: string if created or NULL if str is NULL
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int a;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	if (size == 0)
	{
		ar = malloc(sizeof(char));
		if (ar == NULL)
			return (NULL);
		ar[0] = '\0';
		return (ar);
	}

	ar = malloc(sizeof(char) * (size + 1));
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size + 1; a++)
	{
		ar[a] = str[a];
	}

	return (ar);
}
