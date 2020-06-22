#include "holberton.h"

/**
 * print_rev - Prints reverse of string
 * @s: given string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int count = 0;
	int a;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (a = 0; a < count; a++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
