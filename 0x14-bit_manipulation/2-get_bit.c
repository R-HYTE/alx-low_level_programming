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

	/*Right shift 'num' by 'index' and perform basic bitwise AND with 1*/
	int bitValue = (n >> index) & 1;

	return (bitValue);
}
