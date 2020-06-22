#include "holberton.h"

/**
 * puts2 - Print every other character in string
 * @str: string to print
 *
 * Return: no return
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
			str += 2;
		else
			break;
	}
	_putchar(10);
}
