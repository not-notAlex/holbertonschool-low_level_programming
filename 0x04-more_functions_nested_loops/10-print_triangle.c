#include "holberton.h"

/**
 * print_triangle - prints a big triangle
 * @size: size of triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size < 1)
	{
		_putchar(10);
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 1; b < size - a; b++)
			_putchar(32);
		for (c = size - a; c <= size; c++)
			_putchar(35);
		_putchar(10);
	}
}
