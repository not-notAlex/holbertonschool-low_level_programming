#include "holberton.h"

/**
 * _print_rev_recursion - Prints reverese string
 * @s: string given
 *
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
