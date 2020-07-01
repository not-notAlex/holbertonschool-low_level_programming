#include "holberton.h"

/**
 * _strlen_recursion - Gives the length of a string
 * @s: string given
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
