#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void check_args(int argc);
int open_file_from(const char *filename);
int open_file_to(const char *filename);
void read_from_file(int file_from, char *buffer);
void write_to_file(int file_to, char *buffer, int r);

int main(int argc, char *argv[])
{
    int file_from, file_to, r;
    char buffer[BUFFER_SIZE];

    check_args(argc);
    file_from = open_file_from(argv[1]);
    file_to = open_file_to(argv[2]);
    
    while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_to_file(file_to, buffer, r);
    }
    
    if (close(file_from) == -1 || close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd\n");
        exit(100);
    }

    return (0);
}

void check_args(int argc)
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

int open_file_from(const char *filename)
{
    int file = open(filename, O_RDONLY);
    if (file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        exit(98);
    }
    return file;
}

int open_file_to(const char *filename)
{
    int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
        exit(99);
    }
    return file;
}

void write_to_file(int file_to, char *buffer, int r)
{
    int w = write(file_to, buffer, r);
    if (w == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        close(file_to);
        exit(99);
    }
}

