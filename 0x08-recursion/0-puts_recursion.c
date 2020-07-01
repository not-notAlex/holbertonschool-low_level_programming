#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: string to print
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
