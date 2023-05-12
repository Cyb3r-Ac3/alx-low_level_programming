#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * check_IO_stat - checks if a file operation succeeded or failed
 *
 * @stat: the status returned by the file operation
 * @fd: the file descriptor associated with the file operation
 * @filename: the name of the file associated with the file operation
 * @mode: the mode of the file operation ('R' for read, 'W' for write, 'C' for close)
 *
 * If the file operation failed, prints an error message to stderr and exits
 * with the appropriate exit code.
 */
void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - copies the content of a file to another file
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if successful, otherwise an exit code
 */
int main(int argc, char *argv[])
{
    int src_fd, dest_fd, bytes_read = 0, bytes_written = 0, close_src, close_dest;
    unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }

    src_fd = open(argv[1], O_RDONLY);
    check_IO_stat(src_fd, -1, argv[1], 'R');

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    check_IO_stat(dest_fd, -1, argv[2], 'W');

    while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(dest_fd, buffer, bytes_read);
        check_IO_stat(bytes_written, -1, argv[2], 'W');
    }

    if (bytes_read < 0)
    {
        check_IO_stat(-1, -1, argv[1], 'R');
    }

    close_src = close(src_fd);
    check_IO_stat(close_src, src_fd, NULL, 'C');

    close_dest = close(dest_fd);
    check_IO_stat(close_dest, dest_fd, NULL, 'C');

    return (0);
}

void check_IO_stat(int stat, int fd, char *filename, char mode)
{
    if (stat == -1)
    {
        if (mode == 'R')
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
            exit(98);
        }
        else if (mode == 'W')
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
            exit(99);
        }
        else if (mode == 'C')
        {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
            exit(100);
        }
    }
}
