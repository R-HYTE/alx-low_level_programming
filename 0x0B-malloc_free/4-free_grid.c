#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: Parameters passed in function
 * @height: Parameter passed into
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
