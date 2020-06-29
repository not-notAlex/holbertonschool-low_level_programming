#include "holberton.h"

/**
 * _strspn - Gives the length of a prefix substring
 * @s: given string
 * @accept: The test string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int a, b;
	unsigned int len = 0;

	while (accept[len])
		len++;

	len++;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				count++;
			if (count == len)
				break;
		}
		if (count == len)
			break;
	}

	return (count);
}
