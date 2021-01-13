#include "search_algos.h"

/**
 * linear_search - does a linear search on integer array
 * @array: array to search
 * @size: size of the array
 * @value: number to search for
 * Return: index of element or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
