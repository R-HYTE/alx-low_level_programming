#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: parameter counting inputs in the CLI
 * @argv: pointer to the arguments in the CLI
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);

	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
