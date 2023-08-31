#include "main.h"
#include <stdio.h>

/**
 * print_binary - 
 * @n:
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/*Recursively call the function to print the binary rep*/
		print_binary(n >> 1);
	}

	/*Print the least significant bit*/
	putchar ((n & 1) ? '1' : '0');
}
