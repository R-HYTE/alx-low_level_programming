#include <stdio.h>
#include "main.h"

/**
 * _strstr - function finds the first occurrence
 * of the substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: Input variable
 * @needle: Input variable
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
