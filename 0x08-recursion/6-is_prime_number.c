#include "holberton.h"

/**
 * is_prime_number - Tests if a number if prime
 * @n: number to test
 *
 * Return: result number
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0)
		return (0);
	return (prime_finder(n, 3));
}

/**
 * prime_finder - Tests primeness
 * @n: number to test
 * @x: modular test
 * Return: result number
 */
int prime_finder(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x * x > n)
		return (1);
	return (prime_finder(n, x + 2));
}
