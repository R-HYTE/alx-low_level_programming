#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees memory allocated for a the dog struct
 * @d: dog struct passed into the parameter
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
