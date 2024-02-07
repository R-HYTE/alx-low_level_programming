#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step, start, end, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	start = 0;
	end = step;

	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start = end;
		end += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	for (i = start; i <= end && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return i;
	}

	return -1;
}
