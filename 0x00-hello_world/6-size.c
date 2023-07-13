#include <stdio.h>
/**
 * main - A program that prints various siaes of data types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a : %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of b : %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of c : %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of d : %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of e : %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
