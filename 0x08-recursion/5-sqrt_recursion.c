#include "main.h"

int actual_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	return (actual_sqrt(n, 1));
}

/**
 * actual_sqrt - recurses to find natural square root
 * of a number
 * @n: number to calculate the square root of
 * @i: iterator
 * Return: square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
