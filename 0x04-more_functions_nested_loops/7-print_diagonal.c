#include "holberton.h"

/**
 * print_diagonal - Print some diagonal lines
 * @n: how long the line is
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int a, b, c;

	c = 0;

	if (n < 1)
	{
		_putchar(10);
		return;
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < c; b++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
		c++;
	}
}
