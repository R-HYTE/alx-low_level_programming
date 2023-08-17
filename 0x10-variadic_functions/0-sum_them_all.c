#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameter determining num of input
 * Return: Sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int s, x;
	size_t i;
	va_list args;

	va_start(args, n);

	s = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, const unsigned int);
		s += x;
	}
	va_end(args);
	return (s);
}
