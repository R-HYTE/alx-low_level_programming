#include "main.h"

/**
 * create_buffer - Allocates a buffer for file copying
 * @destination_filename: Name of the destination file
 * Return: Pointer to the allocated buffer
 */
char *create_buffer(char *destination_filename)
{
	char *copy_buffer;

	/*Allocate a buffer of 1024 bytes*/
	copy_buffer = malloc(sizeof(char) * 1024);

	if (copy_buffer == NULL)
	{
		/*Handle memory allocation error*/
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_filename);
		exit(99);
	}

	return (copy_buffer);
}

/**
 * close_file - Close a file descriptor
 * @file_descriptor: The file descriptor to close
 */
void close_file(int file_descriptor)
{
	int close_result;

	/*Close the file descriptor and check for errors*/
	close_result = close(file_descriptor);

	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - Copy the of one file to another
 * @argc: Number of command-line arguments passed
 * @argv: Array of command-line arguments passed
 * Return: 0 (Success), Otehrwise error codes (Failure)
 */
int main(int argc, char *argv[])
{
	int source_file, destination_file, bytes_read, bytes_written;
	char *copy_buffer;

	/*Check if the numbe rof commandè-line args is correct*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_buffer = create_buffer(argv[2]);/*Allocate a buffer for copying*/
	source_file = open(argv[1], O_RDONLY);/*Open the source file for reading*/
	if (source_file == -1)
	{
		/*Handle source file open error*/
		dprintf(STDERR_FILENO, "Error: Can't open source file %s\n", argv[1]);
		free(copy_buffer);
		exit(98);
	}
	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (bytes_read > 0)
	{
		bytes_read = read(source_file, copy_buffer, 1024);
		/*Checks for errors when opening, reading, or writing*/
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(copy_buffer);
			close_file(source_file);
			exit(98);
		}
		
		destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (destination_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(copy_buffer);
			close_file(source_file);
			exit(99);
		}
		/*Read more data from the source file*/
		bytes_written = write(destination_file, copy_buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file %s\n", argv[2]);
			free(copy_buffer);
			close_file(source_file);
			close_file(destination_file);
			exit(99);
		}
		close_file(destination_file);
	}
	free(copy_buffer);/*Free allocated buffer*/
	/*Close source and destination files*/
	close_file(source_file);

	return (0);
}
