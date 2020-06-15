#include "holberton.h"

/**
 * _isalpha - Determines in char is an alphabetic character
 * @c: The test
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
