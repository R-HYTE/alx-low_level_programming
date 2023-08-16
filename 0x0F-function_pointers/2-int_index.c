#include "function_pointers.h"

/**
 * int_index - passes a value to a function somewhere
 * @array: base address of the array
 * @size: size of the array
 * @cmp: pointer a function
 * Return: the return value of the function it calls
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		exit(-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
