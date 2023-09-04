#include "main.h"
#include <string.h>

/**
 * create_file - Create a file with given filename
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fp, rwr;
	size_t num_of_chars;

	if (!filename)
		return (-1);

	/*Open file with write-only permissions*/
	/* creating it if it is doesn't exist or truncating it if it does*/
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	/*Use strlen to calculate the length of the text_content*/
	num_of_chars = strlen(text_content);

	rwr = write(fp, text_content, num_of_chars);

	if (rwr == -1)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
