#include <stdio.h>
/**
 * main - Prints Alphabets in lowercase then uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	int pos;

	for (pos = 0; pos < 26; pos++)
	{
		putchar('a' + pos);
	}
	for (pos = 0; pos < 26; pos++)
	{
		putchar('A' + pos);
	}
	putchar('\n');
	return (0);
}
