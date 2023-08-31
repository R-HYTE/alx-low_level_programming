#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number we are evaluating
 * @index: bit position we are to look at
 * Return: value of bit at a given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Create a mask with a 1 at the desired index and 0s elsewhere*/
	int mask = 1 << index;

	/*Use bitwise AND to check if the bit at the index is 1 or 0*/
	int bitValue = (n & mask) ? 1: 0;

	return (bitValue);
}
