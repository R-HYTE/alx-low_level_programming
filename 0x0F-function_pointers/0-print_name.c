#include "function_pointers.h"

/**
 * print_name - Allocates the address of name to pointer f
 * @name: pointer to the address containg name
 * @f: pointer to a pointer
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(0);
	f(name);
}
