#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void print_error(const char *message, const char *filename,
		int fd, int exit_code);

/**
 * main - entry point for the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, or the appropriate error
 * code if an error occurs
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written, close_from, close_to;
	char buffer[BUFFER_SIZE];
	struct stat st;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	/* open source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file", argv[1], -1, 98);
	}

	/* check if destination file exists */
	if (stat(argv[2], &st) == 0)
	{
		fd_to = open(argv[2], O_WRONLY | O_TRUNC);
		if (fd_to == -1)
		{
			print_error("Error: Can't write to file", argv[2], -1, 99);
		}
	}
	else
	{
		fd_to = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, S_IRUSR |
				S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
		if (fd_to == -1)
		{
			 print_error("Error: Can't create file", argv[2], -1, 99);
		}
	}

	/* Copy contents of source file to destination file */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error("Error: Can't write to file", argv[2], fd_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		 print_error("Error: Can't read from file", argv[1], fd_from, 98);
	}

	/* close file descriptors */
	close_from = close(fd_from);
	if (close_from == -1)
	{
		print_error("Error: Can't close file descriptor", NULL, fd_from, 100);
	}
	close_to = close(fd_to);
	if (close_to == -1)
	{
		print_error("Error: Can't close file descriptor", NULL, fd_to, 100);
	}

	return (0);
}

/**
 * print_error - prints error message and exits program with error code
 *
 * @message: error message to print
 *
 * @filename: name of file causing the error, or NULL if not applicable
 *
 * @fd: file descriptor causing the error, or -1 if not applicable
 *
 * @exit_code: error code to exit program with
 */
void print_error(const char *message, const char *filename,
		int fd, int exit_code)
{
	if (filename != NULL)
	{
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s %d\n", message, fd);
	}
	exit(exit_code);
}
