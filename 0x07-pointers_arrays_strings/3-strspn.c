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
	int ans = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				ans++;
		}
	}

	return (ans);
}
