#include <stdio.h>

/**
 * main - Prints the numbes from 1-100
 * For multiples of 3 Fizz is printed instead of the number
 * For multiples of 5 Buzz is printed instead .
 * For multiples of both three and 5 FizzBuzz is printed
 * Return: 0 Always
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
