#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024  /* Define the buffer size */

/**
 * error_exit - code for error
 * @code: int
 * @message: const char
 * @arg: const char
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}


/*
 * copy_file_to_file - Copies the contents of one file to another
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 1 on success, or -1 on error
 */
int copy_file_to_file(const char *file_from, const char *file_to)
{
	int fd_to, fd_from;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

        fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit (98, "Error: Can't write to %s\n", file_from);

        fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if(fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}

        /* Read and write loop */
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
                error_exit(98, "Error: Can't read from  %s\n", file_from);

        }
	
	if (bytes_read == 0)
        {
		close(fd_from);
		close(fd_to);
        }


        if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", file_from);

        if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", file_to);

        return (1);
}

/**
 * main - Copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or an exit code on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)  /* Check if the number of arguments is correct */
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Call the copy function with the arguments passed */
    if (copy_file_to_file(argv[1], argv[2]) == -1)
    {
        /* If copy operation fails, exit with error code */
        exit(99);
    }

    return 0;  /* Success */
}

