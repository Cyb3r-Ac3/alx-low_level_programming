#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void handle_IO_error(int status, int fd, char *filename, char mode);



/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Description: This function copies the content of one file to another.
 * It takes two arguments: the file to copy from and the file to copy to.
 * If the number of arguments is not correct, it prints an error message
 * and exits with an error code. It opens both files and reads from
 * the source file and writes to the destination file. If an I/O operation
 * fails, it prints an error message and exits with an error code.
 * It closes both files and returns 0 on success.
 *
 * Return: 0 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, num_read = 1024, num_written, close_src, close_dest;
	unsigned int file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(1);
	}

	src_fd = open(argv[1], O_RDONLY);
	handle_IO_error(src_fd, -1, argv[1], 'O');

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_mode);
	handle_IO_error(close_dest, -1, argv[2], 'W');

	while (num_read == 1024)
	{
		num_read = read(src_fd, buffer, sizeof(buffer));
		if (num_read == -1)
			handle_IO_error(-1, -1, argv[1], 'O');
		num_written = write(dest_fd, buffer, num_read);
		if (num_written == -1)
			handle_IO_error(-1, -1, argv[2], 'W');
	}

	close_src = close(src_fd);
	handle_IO_error(close_src, src_fd, NULL, 'C');

	close_dest = close(dest_fd);
	handle_IO_error(clos_dest, dest_fd, NULL 'C');

	return (0);
}


/**
 * handle_IO_error - cahecks and  handles I/O errors
 *
 * @status: the status returned by the I/O function
 *
 * @fd: the file descriptor of the file to be opened/closed
 *
 * @filename: name of the file to be opened/closed
 * @mode: opening or closing mode
 *
 * Description: This function checks if an I/O operation is successful.
 * If it fails, it prints an error message and exits
 * the program with an error code.
 */
void handle_IO_error(int status, int fd, char *filename, char mode)
{
	if (mode == 'C' && status == -1)
	{
		fprintf(STDERR_FILENO, "Error: Error: Can't close fd %d\n", fd);
		exit(100);
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
