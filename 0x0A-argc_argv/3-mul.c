#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Agrgument passed into main
 * @argv: Argument passed into main
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}
