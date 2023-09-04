#include "main.h"

/**
 * read_textfile - Read and write the contents of a file to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The number of letters (bytes) to read and write.
 * Return: Upon success, return the number of bytes read and written.
 * On failure, return 0 and set errno appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, lenr, lenw;
	char *buffer = NULL;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	lenr = read(fp, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);

	free(buffer);
	close (fp);
	return (lenw);
}
