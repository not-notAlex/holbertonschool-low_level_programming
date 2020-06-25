#include "holberton.h"

/**
 * string_toupper - Converts a string to uppercase
 * @str: String to modify
 *
 * Return: New uppercase string
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
		count++;
	}
	while (count > 0)
	{
		str--;
		count--;
	}
	return (str);
}
