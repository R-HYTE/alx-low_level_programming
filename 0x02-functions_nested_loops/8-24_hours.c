#include "main.h"

/**
 * jack_bauer - Print minute of the day of Jack Bauer
 * Return void
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(58);
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
