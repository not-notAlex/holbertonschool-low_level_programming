#include "holberton.h"

/**
 * _strcmp - Compares the size of two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if true 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return (15);
		if (*s1 < *s2)
			return (-15);
		s1++;
		s2++;
	}

	return (0);
}
