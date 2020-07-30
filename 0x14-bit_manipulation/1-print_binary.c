#include "holberton.h"

/**
 * print_binary - Prints the binary conversion of a number
 * @n: number to print
 *
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary_recursion(n);
}

/**
 * print_binary_recursion - Prints the binary conversion of a number
 * @n: number to print
 *
 * Return: no return
 */
void print_binary_recursion(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_recursion(n >> 1);
	_putchar((n & 1) + '0');
}
