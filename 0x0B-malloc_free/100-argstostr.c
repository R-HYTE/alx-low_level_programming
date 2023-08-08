#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: Command line arguments count
 * @av: Command line arguments vector
 * Return: NULL if ac == 0 || av == NULL
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int count = 0, i = 0, j = 0, k = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}

	arr = malloc((sizeof(char) * count) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			arr[k] = av[i][j];
			k++;
			j++;
		}

		arr[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	arr[k] = '\0';
	return (arr);
}
