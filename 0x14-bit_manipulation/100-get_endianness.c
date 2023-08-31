#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	/*Cast the integer as a pointer to a character*/
	char *byte = (char *)&num;

	/*If 1st byte (Lowest address) is non-zero, little-endian*/
	if (*byte)
		return (1);
	else
		return (0);
}
