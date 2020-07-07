#include "holberton.h"

/**
 * free_grid - Frees memory of array previously created
 * @grid: grid to free
 * @height: height of grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
