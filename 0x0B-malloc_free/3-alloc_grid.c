#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: Parameters passed into
 * @height: Parameters passed into
 * Return: NULL (If width or height is <= 0 || on failure)
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			arr[k][l] = 0;
	}
	return (arr);
}
