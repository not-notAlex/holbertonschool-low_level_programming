#include "holberton.h"

/**
 * _isupper - Checks if character is upper case
 * @c: Tested char
 *
 * Return: nothing
 */
int _isupper(int c)
{
	if (c >= 65 && <= 90)
		return (1);
	else
		return (0);
}
