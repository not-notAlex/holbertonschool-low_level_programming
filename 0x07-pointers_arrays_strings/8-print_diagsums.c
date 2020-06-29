#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: array given
 * @size: dimension of array
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;
	int counter = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x + counter];
		counter += size;
	}

	counter -= size;

	for (x = 0; x < size; x++)
	{
		sum2 += a[x + counter];
		counter -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
