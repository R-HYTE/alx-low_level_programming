#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: array of characters
 * Return: the decimal value of a binary,
 * otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0); /*Handles null pointer or invalid input*/

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0); /*Handle invalid characters in the binary*/

		result <<= 1; /*Left shift the result by 1 bit*/
		result |= (*b - '0'); /*Add the next binary digit (0 or 1)*/
		b++;
	}

	return (result);
}
