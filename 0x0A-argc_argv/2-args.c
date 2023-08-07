#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Argument passed into it
 * @argv: Argument passed into it
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
