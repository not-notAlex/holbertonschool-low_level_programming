#include "function_pointers.h"

/**
 * int_index - searches array for index of target search
 * @array: target to search
 * @size: size of array
 * @cmp: bunary function to use to search
 * Return: result of search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	return (-1);
}
