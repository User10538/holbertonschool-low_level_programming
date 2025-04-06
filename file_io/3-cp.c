#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024  /* Define the buffer size */

/**
 * main - copies contents of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exits with appropriate error code on failure
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, w, r;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

    /* Open file_from for reading */
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    r = read(file_from, buffer, BUFFER_SIZE);
    if (r == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

