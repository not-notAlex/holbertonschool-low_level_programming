#include "holberton.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: size of data type
 * @size: number of data types
 * Return: no return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb < 1 || size < 1)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	return ((void*)ar);
}
