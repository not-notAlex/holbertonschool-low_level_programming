#include "holberton.h"

/**
 * print_line - Print some underscores
 * @n: number of underscores
 *
 * Return: no return
 */
void print_line(int n)
{
	int a;

	if (n < 1)
	{
		_putchar(10);
		return;
	}
	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar(10);
}
