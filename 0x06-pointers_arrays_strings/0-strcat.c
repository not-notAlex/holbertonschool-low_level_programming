#include "holberton.h"

/**
 * _strcat - Concatenates two strings together
 * @dest: The result string
 * @src: String to append
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*dest)
	{
		dest++;
		count++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = *src;
	while (count > 0)
	{
		dest--;
		count--;
	}
	return (dest);
}
