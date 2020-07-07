#include "holberton.h"

/**
 * alloc_grid - creates a two-dimensioanl array of integers
 * @width: width of array
 * @height : height of array
 * Return: new array
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **ar;

	if (width < 1 || height < 1)
		return (NULL);

	ar = malloc(sizeof(*ar) * height);
	if (ar == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(sizeof(*(ar[a])) * width);
		if (ar[a] == NULL)
			return (NULL);
		for (b = 0; b < width; b++)
		{
			ar[a][b] = 0;
		}
	}

	return (ar);
}
