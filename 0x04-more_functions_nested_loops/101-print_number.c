#include "holberton.h"

/**
 * print_number - prints a number using putchar
 * @n: number to be printed
 *
 * Return: no return
 */
void print_number(int n)
{
	unsigned int m, a, b, c, first, digit;
	int num = n;

	digit = 0;
	m = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}


	if (num < 0)
	{
		_putchar(45);
		num *= -1;
	}
	for (b = 1; num / b > 0; b *= 10)
		digit++;
	for (a = 0; a < digit; a++)
	{
		m *= 10;
	}
	for (c = 0; c < digit; c++)
	{
		first = num % m;
		while (first >= 10)
		{
			first /= 10;
		}
		_putchar(first + '0');
		m /= 10;
	}
}
