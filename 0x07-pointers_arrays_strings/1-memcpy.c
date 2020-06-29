#include "holberton.h"

/**
 * _memcpy - Copies memory area from one stringto another
 * @src: given string
 * @dest: destination string
 * @n: number of bytes
 * Return: The resulting string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
