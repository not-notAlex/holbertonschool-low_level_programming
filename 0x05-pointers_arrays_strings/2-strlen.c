#include "holberton.h"

/**
 * _strlen - Tells you the length of a string
 * @s: given string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
