#include "holberton.h"

/**
 * alloc_grid - creates a two-dimensioanl array of integers
 * @width: width of array
 * @height : height of array
 * Return: new array
 */
int **alloc_grid(int width, int height)
{
	int a;
	int **ar;

	if (width < 1 || height < 1)
		return (NULL);

	ar = malloc(sizeof(int) * height);
	if (ar == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(sizeof(int) * width);
		if (ar[a] == NULL)
			return (NULL);
	}

	return (ar);
}
