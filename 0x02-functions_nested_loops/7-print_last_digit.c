#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @n: number to test
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int i = (n % 10);

	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
