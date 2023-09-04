#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Append text to an existing file given filename.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append to the file.
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, rwr;
	size_t num_of_chars;

	if (!filename)
		return (-1);

	/*Open the file with write-only permissions and append mode*/
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		/*Use strlen to calculate the length of the text_content*/
		num_of_chars = strlen(text_content);
		rwr = write(fp, text_content, num_of_chars);
		if (rwr == -1)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
