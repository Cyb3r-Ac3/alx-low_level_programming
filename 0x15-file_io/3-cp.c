#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - Copies the contents of one file to another.
 *
 * @argc: the number of command-line arguments
 * @argv: the array of command-line arguments
 *
 * Return: 0 on success, a non-zero value otherwise
 */
int main(int argc, char *argv[])
{
	 int src_fd, dest_fd, n_read = 1024, wrote, close_src, close_dest;
	 unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	 char buffer[1024];

	 if (argc != 3)
	 {
		 fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		 exit(EXIT_FAILURE);
	 }

	 src_fd = open(argv[1], O_RDONLY);
	 check_IO_stat(src_fd, -1, argv[1], 'O');

	 dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	 check_io_stat(dest_fd, -1, argv[2], 'W');

	 while (n_read == 1024)
	 {
		 n_read = read(src_fd, buffer, sizeof(buffer));
		 if (n_read == -1)
			 check_io_stat(-1, -1, argv[1], 'O');
		 wrote = write(dest_fd, buffer, n_read);
		 if (wrote == -1)
			 check_io_stat(-1, -1, argv[2], 'W');
	 }

	 close_src = close(src_fd);
	 check_io_stat(close_src, src_fd, NULL, 'C');
	 close_dest = close(dest_fd);
	 check_io_stat(close_dest, dest_fd, NULL, 'C');

	 return (0);
}

/**
 * check_io_stat - checks the status of a file operation
 *
 * @status: the return value of the file operation
 *
 * @fd: the file descriptor associated with the file operation
 *
 * @filename: the name of the file being operated on
 *
 * @mode: the mode of the file operation
 * ('C' for close, 'O' for open, 'W' for write)
 *
 * This function checks the return value of a file
 * operation and prints an error message and exits
 * with the appropriate exit code if the operation failed.
 *
 * Return: void
 */
void check_io_stat(int status, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(EXIT_FAILURE);
	}
	else if (mode == 'O' && status == -1)
	{
		fprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && status == -1)
	{
		fprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
