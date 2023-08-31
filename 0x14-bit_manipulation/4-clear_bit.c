#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: value being referred to
 * @index: position
 * Return: 1 (Success), -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is within the valid range*/
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*Index is out of range*/

	/*Create a mask with a 1 at the desired index*/
	mask = 1UL << index;

	/*Use bitwise AND with the complement to clear the bit at the index*/
	*n &= ~mask;

	return (1);
}
