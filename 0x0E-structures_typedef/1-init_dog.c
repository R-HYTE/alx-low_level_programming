#include "dog.h"
/**
 * init_dog - Function initializes a var of type struct
 * @d: input parameter
 * @name: input parameter
 * @age: input parameter
 * @owner: input parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
