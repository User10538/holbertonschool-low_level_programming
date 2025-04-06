int main(int argc, char *argv[])
{
        int file_from, file_to, w, r;
        char buffer[BUFFER_SIZE];

        if (argc != 3)
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);


        /*open file_from for reading*/
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
        /*open file_to for writing, create if needed, truncate if exist*/
        file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if (file_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
        }
        /*cp file*/
        while (r > 0)
        {
                w = write(file_to, buffer, r);
                if (w == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                        close(file_from);
                        close(file_to);
                        exit(99);
                }
                r = read(file_from, buffer, BUFFER_SIZE);
                if (r == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                        close(file_from);
                        close(file_to);
                        exit(98);
                }
        }

        if (close(file_from) == -1 || close(file_to) == -1)
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
        return (0);
}




NEW



