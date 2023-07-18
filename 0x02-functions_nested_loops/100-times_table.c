#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: Value to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int num1, mult, result;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				result = num1 * mult;
				if (result <= 99)
					_putchar(' ');
				if (result <= 0)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 10 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
