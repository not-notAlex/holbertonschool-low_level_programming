#include "holberton.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 0 if false, 1 if true
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
