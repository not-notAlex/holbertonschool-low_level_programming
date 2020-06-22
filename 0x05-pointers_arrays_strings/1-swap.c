#include "holberton.h"

/**
 * swap_int - swaps the values of pointers
 * @a: first value
 * @b: second value
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
