#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: chracter being checked
 * Return: 1 if c is a letter regardless of case and 0 if not
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	} else if (c > 96 && c < 122)
	{
		return (1);
	} else
		return (0);
}
