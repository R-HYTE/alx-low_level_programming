#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number to return the factorial from
 * Return: factorial of given number n
 * if -1 the error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
