#include "holberton.h"

/**
 * malloc_checked - allocates memory for an array
 * @b: size of array
 *
 * Return: no return
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
