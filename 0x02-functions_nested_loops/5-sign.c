#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character being checked
 * Return: 1 (greater than zero), 0 (n is zero) and "-1" (if n < zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar(45);
	return (-1);
}
