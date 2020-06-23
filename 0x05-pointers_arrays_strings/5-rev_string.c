#include "holberton.h"

/**
 * rev_string - Reverse a string
 * @s: string to be reversed
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int count = 0;
	char str[1000];
	int a, b;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count--;
	s--;
	for (a = 0; a <= count; a++)
	{
		str[a] = *s;
		if (a != count)
			s--;
	}
	for (b = 0; b <= count; b++)
	{
		*s = str[b];
		s++;
	}
}
