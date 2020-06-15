#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - print all the numbers between n and 98
 * @n: starting point
 *
 * Return: end function
 */
void print_to_98(int n)
{
	int a;

	if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	printf("\n");
}
