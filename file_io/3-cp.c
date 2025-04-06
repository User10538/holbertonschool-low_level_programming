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
void error_exit(int code, const char *message)
{
    /*dprintf(STDERR_FILENO, message, arg);*/
	perror(message);
	exit(code);
}

/*
 * copy_file_to_file - file to file
 * @file_from: source file
 * @file_to: destination file
 */
int copy_file_to_file(const char *file_from, const char *file_to)
{
        int fd_to, fd_from;
        ssize_t bytes_read, bytes_written;
        char buffer[BUFFER_SIZE];

        /*open the file_from*/
        fd_from = open(file_from, O_RDONLY);
        if (fd_from == -1)
                error_exit (98, "Error: Can't write to %s\n");

        /*can not create or if write to file_to fails*/
        fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if(fd_to == -1)
        {
                close(fd_from);
                error_exit(99, "Error: Can't write to %s\n");
        }

        /* Read and write loop */
        while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
        {
                bytes_written = write(fd_to, buffer, bytes_read);
                if (bytes_written != bytes_read)
                {
                        close(fd_from);
                        close(fd_to);
                        error_exit(99, "Error: Can't write to %s\n");
                }
        }

        if (bytes_read == -1)
        {
                close(fd_from);
                close(fd_to);
                error_exit(98, "Error: Can't read from  %s\n");

        }

        /* Handle EOF (bytes_read == 0) */
        if (bytes_read == 0)
        {
                /* Successfully reached EOF, no need to handle further */
        }


        if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n");

        if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n");

        return (1);
}

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
