#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: value being used for reference
 * @index: given index
 * Return: 1 (Success), -1 (Error Occured)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is within the valid range*/
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*Index is out of range*/

	/*Create a mask with a 1 at the end of the desired index*/
	mask = 1UL << index;
	*n |= mask; /*Use bitwise OR to set the bit at the index to 1*/

	return (1);
}
