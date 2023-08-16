#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(0);
	for (i = 0; i < size; i++)
		action(array[i]);
}
