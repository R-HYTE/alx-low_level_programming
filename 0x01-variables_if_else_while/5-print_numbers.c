#include <stdio.h>
/**
 * main - Prints all single digits of base 10 from 0
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
