#include "holberton.h"

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: char to initialize
 * Return: array or NULL if size is zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ar;

	if (size < 1)
		return (0);

	ar = malloc(size * sizeof(char));

	if (ar = NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		ar[a] = c;
	}

	return (ar);
}
