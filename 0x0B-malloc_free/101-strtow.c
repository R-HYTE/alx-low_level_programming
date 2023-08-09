#include "main.h"

/**
 * word_len - gets the length of word
 * @str: Pointer variable to the string array
 * Return: length of the word
 */
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - splits a string into words.
 * @str: String passed into function
 * Return: pointer to an array of strings (words)
 */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) == '\t')
		{
			words++;
		}
	}
	return (words);
}

/**
 * strtow - converts string to word
 * @str: Input pointer variable
 * Return: strings (success), otherwise NULL
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
