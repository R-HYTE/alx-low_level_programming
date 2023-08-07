#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two numbers
 * @argc: Agrgument passed into main
 * @argv: Argument passed into main
 * Return: 0 (Success), 1 Otherwise
 */
int main(int argc, char *argv[])
{
	int i, num, result = 0;

	i = 1;
	while (i < argc)
	{
		for (num = 0; argv[i][num] != '\0'; num++)
		{
			if (!isdigit(argv[i][num]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
