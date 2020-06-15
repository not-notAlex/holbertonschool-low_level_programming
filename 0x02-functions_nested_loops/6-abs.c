#include "holberton.h"

/**
 * _abs - Find the absolute value of an integer
 * @n: the number to test
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
