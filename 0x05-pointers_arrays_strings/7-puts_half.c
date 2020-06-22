#include "holberton.h"

/**
 * puts_half - Prints second half of a string
 * @str: string to be printed
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int count = 0;
	int a;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	count /= 2;
	for (a = 0; a < count; a++)
		str--;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
