#include "holberton.h"

/**
 * print_square - pretty a pretty square =D
 * @size: Size of square
 *
 * Return: no return
 */
void print_square(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar(10);
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (a + 1 < size)
			_putchar(10);
	}
	_putchar(10);
}
