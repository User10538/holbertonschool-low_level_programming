
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024  /* Define the buffer size */

void error_exit(int code, const char *message, const char *arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}


int copy_file_to_file(const char *file_from, const char *file_to)
{
        int fd_to, fd_from;
        ssize_t bytes_read, bytes_written;
        char buffer[BUFFER_SIZE];

        /*open the file_from*/
        fd_from = open(file_from, O_RDONLY);
        if (fd_from == -1)
                error_exit (98, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_from);

        /*can not create or if write to file_to fails*/
        fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if(fd_to == -1)
        {
                close(fd_from);
                error_exit(99, "Error: Can't write to NAME_OF_THE_FILE \n", file_to);
        }

        /* Read and write loop */
        while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
        {
                bytes_written = write(fd_to, buffer, bytes_read);
                if (bytes_written != bytes_read)
                {
                        close(fd_from);
                        close(fd_to);
                        error_exit(99, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_to);
                }
        }

        if (bytes_read == -1)
        {
                close(fd_from);
                close(fd_to);
                error_exit(98, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_from);

        }

        if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd FD_VALUE %d\n", file_from);

        if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd FD_VALUE %d\n", file_to);

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
