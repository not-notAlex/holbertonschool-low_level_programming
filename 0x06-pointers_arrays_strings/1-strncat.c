#include "holberton.h"

/**
 * _strncat - Concatenates two strings together for n bytes
 * @dest: The result string
 * @src: String to append
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a;

	if (n == 0)
		return (dest);

        while (dest[i] != '\0')
		i++;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
