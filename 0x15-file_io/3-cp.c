#include "main.h"
#define BUFFER_SIZE 1024

void print_error(const char *format, ...)
{
	va_list args; /*Define a variable argument list*/

	va_start(args, format); /*Initialize the argument list*/
	dprintf(STDERR_FILENO, format, args); /*Use dprintf to print the formatted error message to stderr*/
	va_end(args); /*Clean up the argument list*/
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error("Write error\n");
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Read error\n");
		close(fd_from);
		close(fd_to);
		return (99);
	}
	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %u\n", fd_from);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %u\n", fd_to);
		return (100);
	}
	return (0);
}
