#include "holberton.h"

/**
 * _strncpy - Copies a string
 * @dest: The string copied to
 * @src: The string to copy
 * @n: number of bytes to copy max
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
