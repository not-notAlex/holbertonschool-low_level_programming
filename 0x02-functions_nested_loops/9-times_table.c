#include "holberton.h"

/**
 * times_table - Print the times table of 9
 *
 * Return: end function
 */
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b < 10; b++)
		{
			c = (a * b) / 10;
			d = (a * b) % 10;
			if (c == 0)
				_putchar(' ');
			else
				_putchar(c + '0');
			_putchar(d + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
