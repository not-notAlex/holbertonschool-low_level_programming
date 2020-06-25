#include "holberton.h"

/**
 * _strncat - Concatenates two strings together for n bytes
 * @dest: The result string
 * @src: String to append
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;

	if (n == 0)
		return (dest);

	while (*dest)
	{
		dest++;
		count++;
	}
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
		i++;
	}
	*dest = '\0';
	while (count > 0)
	{
		dest--;
		count--;
	}
	return (dest);
}
