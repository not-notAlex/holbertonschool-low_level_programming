#include "holberton.h"

/**
 * _puts - prints a given string
 * @str: string to be printed
 *
 * Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
