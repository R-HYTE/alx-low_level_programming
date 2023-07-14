#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more hearders goes there */

/*betty style doc for function main goes there */
/**
 * main - Determines if a value is negative or positive or zero
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n);
	return (0);
}
