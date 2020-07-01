#include "holberton.h"

/**
 * _sqrt_recursion - Finds square root of given number
 * @n: number given
 *
 * Return: result number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 1)
		return (-1);
	return (sqrt_finder(n, 1));
}

/**
 * sqrt_finder - Same function as above but with second argument
 * @n: test number
 * @x: target to help find
 * Return: the result
 */
int sqrt_finder(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (sqrt_finder(n, x + 1));
}
