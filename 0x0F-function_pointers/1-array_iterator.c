#include "function_pointers.h"

/**
 * array_iterator - executes a function on an array of integers
 * @array: array to func
 * @size: size of our array
 * @action: function to perform
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
