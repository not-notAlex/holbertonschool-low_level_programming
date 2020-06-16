#include "holberton.h"
/**
 * print_times_table - Print the times table of given number
 * @n: size of times table
 * Return: end function
 */
void print_times_table(int n)
{
	int a, b, c, d, e;

	if (n < 0 || n > 15)
		return;

	if (n == 0)
	{
		_putchar('0');
		_putchar(10);
		return;
	}

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= n; b++)
		{
			c = (a * b) / 100;
			d = ((a * b) % 100) / 10;
			e = (a * b) % 10;
			if (c == 0)
				_putchar(' ');
			else
				_putchar(c + '0');
			if (d == 0)
				_putchar(' ');
			else
				_putchar(d + '0');
			_putchar(e + '0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
