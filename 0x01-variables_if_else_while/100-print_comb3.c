#include <stdio.h>
/**
 * main - Prints all possible different combinations of two
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
