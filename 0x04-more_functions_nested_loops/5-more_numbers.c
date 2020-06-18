#include "holberton.h"

/**
 * more_numbers - Print 1-14 ten times
 *
 *
 * Return: no return
 */
void more_numbers(void)
{
	int a, b, x, y;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			x = b / 10;
			y = b % 10;
			if (x != 0)
				_putchar('0' + x);
			_putchar('0' + y);
		}
		_putchar(10);
	}
}
