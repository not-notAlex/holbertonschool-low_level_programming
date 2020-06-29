#include "holberton.h"

/**
 * _strchr - Locate a char in a string
 * @s: given string
 * @c: Search char
 * Return: Identified char
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
		count++;
	}

	while (count >= 0)
	{
		count--;
		s--;
	}

	return (0);
}
