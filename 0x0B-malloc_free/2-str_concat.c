#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: First set of characters passed
 * @s2: Second set of charcaters passed
 * Return: arr which is the address of the newly allocated space
 * , NULL if NULL is passed
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	arr = malloc((sizeof(char) * l) + 1);

	if (arr == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k <= i)
			arr[k] = s1[k];
		if (k >= i)
		{
			arr[k] = s2[j];
			j++;
		}
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
