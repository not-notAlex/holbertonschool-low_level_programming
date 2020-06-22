#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Print n numbers of array
 * @a: array to print
 * @n: number of numbers to print
 * Return: no return
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *a);
		if (x != (n - 1))
			printf(", ");
		a++;
	}
	printf("\n");
}
