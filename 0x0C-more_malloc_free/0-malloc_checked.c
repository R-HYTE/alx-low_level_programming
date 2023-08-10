#include "main.h"

/**
 * malloc_checked - malloc to allocate dynamic mem
 *@b: argument passed into the function
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
