#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: base number
 * @y: exponent
 * Return: result number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (x);
}
