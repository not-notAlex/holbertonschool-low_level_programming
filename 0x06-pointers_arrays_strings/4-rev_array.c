#include "holberton.h"

/**
 * reverse_array - Reverse contents of an array
 * @a: array to be reversed
 * @n: size of array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int *e = a;
	int i;
	int temp;

	for (i = 1; i < n; i++)
		e++;

	while (e > a)
	{
		temp = *e;
		*e = *a;
		*a = temp;
		e--;
		a++;
	}
}
