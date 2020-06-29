#include "holberton.h"

/**
 * _strchr - Locate a char in a string
 * @s: given string
 * @c: Search char
 * Return: Identified char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
