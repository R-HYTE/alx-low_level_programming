#include "main.h"

/**
 * malloc_checked - alocate memory using malloc
 *@b: argument passed into the function
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return (ptr);
	}
	exit (98);
}
