#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: charcter being checked
 * Return: 1 (lowercase) or 0 (Otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
