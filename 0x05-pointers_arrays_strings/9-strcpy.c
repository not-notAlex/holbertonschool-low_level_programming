#include "holberton.h"

/**
 * _strcpy - Copy a string from source to destination
 * @dest: the destination pointer
 * @src: the source string
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*src)
	{
		dest[a] = *src;
		a++;
		src++;
	}

	dest[a] = *src;
	return (dest);
}
