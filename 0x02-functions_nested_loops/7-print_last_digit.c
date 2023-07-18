#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: Digit being computed
 * Return: rem (Value of last digit)
 */
int print_last_digit(int n)
{
	int rem;

	rem = n % 10;
	if (rem < 0)
	{
		rem = rem * -1;
	}
	_putchar(rem + '0');
	return (rem);
}
