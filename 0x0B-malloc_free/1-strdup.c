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

	while (str[size])
		size++;

	if (size == 0)
		return (0);

	ar = malloc(sizeof(char) * size);

	for (a = 0; a  < size; a++)
	{
		ar[a] = str[a];
	}

	return (ar);
}
