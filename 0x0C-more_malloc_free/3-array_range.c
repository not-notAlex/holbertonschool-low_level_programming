#include "holberton.h"

/**
 * array_range - creates array of sequential numbers
 * @min: min number in array
 * @max: max number in array
 * Return: new array
 */
int *array_range(int min, int max)
{
	int size;
	int *ar;
	int i;
	int cpy = min;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	ar = malloc(sizeof(*ar) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = cpy;
		cpy++;
	}

	return (ar);
}
