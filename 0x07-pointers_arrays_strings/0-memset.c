#include "holberton.h"

/**
 * _memset - Overwrite n bytes with a given char
 * @s: Given string
 * @b: Char to set
 * @n: number of bytes
 * Return: The resulting string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
