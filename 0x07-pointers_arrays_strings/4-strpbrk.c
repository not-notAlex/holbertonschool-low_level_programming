#include "holberton.h"

/**
 * _strpbrk - Locate first occurence of target byte string
 * @s: Target string
 * @accept: test string
 * Return: result string
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}

	return (0);
}
