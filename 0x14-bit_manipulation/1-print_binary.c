#include "holberton.h"

/**
 * print_binary - Prints the binary conversion of a number
 * @n: number to print
 *
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	unsigned int remainder;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	remainder = n % 2;
	if (n / 2 != 0)
		print_binary(n / 2);
	_putchar(remainder + '0');
}
