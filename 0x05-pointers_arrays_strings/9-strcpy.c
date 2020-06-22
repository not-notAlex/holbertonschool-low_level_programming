#include "holberton.h"

/**
 * _strcpy - Copy a string from source to destination
 * @dest: the destination pointer
 * @src: the source string
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int a;

	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
		if (*src == '\0')
			*dest = *src;
	}
	for (a = 0; a < count; a++)
		dest--;
	return (dest);
}
