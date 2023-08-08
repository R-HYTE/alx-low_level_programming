#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String being passed into the strdup()
 * Return: a pointer to a newly allocated space in memory,
 * NULL if str = NULL && if insufficient mem was available
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	arr = malloc((sizeof(char) * i) + 1);

	if (arr == NULL)
		return (NULL);
	while (a < i)
	{
		arr[a] = str[a];
		a++;
	}

	arr[a] = '\0';
	return (arr);
}
