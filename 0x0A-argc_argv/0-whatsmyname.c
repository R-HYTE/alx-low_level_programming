#include <stdio.h>

/**
 * main - Program that prints it's name
 * @argc: command line argument count
 * @argv: command line argument vector
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
