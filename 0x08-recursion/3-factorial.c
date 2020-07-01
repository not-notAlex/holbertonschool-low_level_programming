#include "holberton.h"

/**
 * factorial - Gives the factorial of a number
 * @n: number to factor
 *
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
