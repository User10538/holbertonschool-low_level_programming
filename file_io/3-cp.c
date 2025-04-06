#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the given code
 * @code: Exit status code
 * @format: Error message format
 * @...: Additional arguments
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * copy_file_to_file - Copies content of a file to another
 * @file_from: Source file name
 * @file_to: Destination file name
 *
 * Return: 0 on success, exits on error
 */
int copy_file_to_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}

/**
 * main - Entry point for the cp program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	return (copy_file_to_file(argv[1], argv[2]));
}

