#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip,
 * to get from one number to another.
 * @n: One of the numbers being used
 * @m: ONe of the numbers being used
 * Return: (number of bits needed for the flip)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*I used XOR to find differing bits*/
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/*Check last significant bit using bitwise AND*/
		/*If it's 1, increment the count*/
		count += xor_result & 1;
		xor_result >>= 1; /*Right shift the result to check the next bit*/
	}

	return (count);
}
