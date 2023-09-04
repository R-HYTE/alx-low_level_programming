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
	int file_d;
	ssize_t lenr, lenw;
	char *buffer = NULL;

	if (filename == NULL)
	{
		errno = EINVAL; /*Invalid argument*/
		return (0);
	}

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		/*Failed to open the file*/
		perror("open");
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		perror("malloc");
		close(file_d);
		return (0);
	}

	lenr = read(file_d, buffer, letters);
	if (lenr == -1)
	{
		perror("read");
		free(buffer);
		close(file_d);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	if (lenr != lenw || lenw != lenr)
	{
		perror("write");
		free(buffer);
		close(file_d);
		return (0);
	}

	free(buffer);
	close(file_d);

	return (lenw);
}
