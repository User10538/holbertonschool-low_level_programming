#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void error_exit(int fd, int err_code, char *msg)
{
	if (fd != -1) close(fd);
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(err_code);
}

int main(int argc, char *argv[])
{
    int file_from, file_to, r, w;
    char buffer[BUFFER_SIZE];

    if (argc != 3) error_exit(-1, 97, "Usage: cp file_from file_to");

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1) error_exit(file_from, 98, "Can't read from file");

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1) error_exit(file_from, 99, "Can't write to file");

    while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        w = write(file_to, buffer, r);
        if (w == -1) error_exit(file_from, 99, "Can't write to file");
    }
    if (r == -1) error_exit(file_from, 98, "Can't read from file");

    if (close(file_from) == -1 || close(file_to) == -1)
        error_exit(-1, 100, "Can't close fd");

    return 0;
}

