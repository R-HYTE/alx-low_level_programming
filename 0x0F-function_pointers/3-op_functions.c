#include "3-calc.h"

/**
 * op_add - adding function
 * @a: parameter for the function
 * @b: parameter for the function
 * Return: Integer value will be summation result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracting function
 * @a: parameter
 * @b: parameter
 * Return: Result after subratction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplying function
 * @a: parameter
 * @b: parameter
 * Return: result after multiplication
 */


int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - dividing function
 * @a: parameter
 * @b: parameter
 * Return: quotient if valid and 100 Otherwise
 */


int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	return (100);
}
/**
 * op_mod - modulating function
 * @a: parameters
 * @b: parameters
 * Return: remainder if valid and 100 Otherwise
 */


int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	return (100);
}
