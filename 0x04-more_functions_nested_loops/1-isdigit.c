#include "holberton.h"

/**
 * _isdigit - Determines if value is a digit
 * @c: Character passed
 *
 * Return: No return needed
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
