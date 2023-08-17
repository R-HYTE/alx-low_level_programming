#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers with separator in between
 * @separator: string that appears in between the numbers
 * @n: number of parameters to be passed in the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
