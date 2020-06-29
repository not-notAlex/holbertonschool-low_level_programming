#include "holberton.h"

/**
 * _strspn - Gives the length of a prefix substring
 * @s: given string
 * @accept: The test string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int a, b;

	for (a = 0; accept[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (b > count)
				count = b;
		}
	}
	count++;

	return (count);
}
