#include <stdio.h>

/**
 * main - Program prints number of args passed
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
