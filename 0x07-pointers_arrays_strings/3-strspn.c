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
	int ans = 1;
	int count = 0;

	while (accept[count])
		count++;

	count--;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0 + ans; accept[b] != '\0'; a++)
		{
			if (s[a] == accept[b])
				ans++;
			if (count == ans)
				return (a + 1);
		}
	}

	return (ans);
}
