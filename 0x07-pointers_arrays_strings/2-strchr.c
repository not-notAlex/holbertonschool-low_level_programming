#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - Locate a char in a string
 * @s: given string
 * @c: Search char
 * Return: Identified char
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			s += a;
			return (s);
		}
	}

	return (NULL);
}
