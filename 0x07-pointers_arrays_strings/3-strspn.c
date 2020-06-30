#include "holberton.h"

/**
 * _strspn - Gives the length of a prefix substring
 * @s: given string
 * @accept: The test string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
				break;
		}
		if (accept[b] == '\0')
			break;
	}
	return (a);
}
