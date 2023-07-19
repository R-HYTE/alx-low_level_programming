#include <stdio.h>
/**
 * main - Prints the fibonacci series
 * Return: 0 Always success
 */
int main(void)
{
	int i, n = 98;
	unsigned long term1 = 1, term2 = 2;
	unsigned long nextTerm = term1 + term2;

	printf("%lu, %lu, ", term1, term2);
	for (i = 3; i <= n; ++i)
	{
		printf("%lu, ", nextTerm);
		term1 = term2;
		term2 = nextTerm;
		nextTerm = term1 + term2;
	}
	printf("\n");
	return (0);
}
