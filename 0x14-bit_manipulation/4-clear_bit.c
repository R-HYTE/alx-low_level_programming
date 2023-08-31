#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is within the valid range*/
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*Index is out of range*/

	/*Create a mask with a 1 at the desired index*/
	mask = 1UL << index;
	*n &= ~mask; /*Use bitwise AND with the complement to clear the bit at the index*/

	return (1);
}
