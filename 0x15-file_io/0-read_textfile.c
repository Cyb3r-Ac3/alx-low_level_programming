#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: name of the file read.
 * @letters: numbers of characters to read and print
 *
 * Return: the actual number of charcters read and printed on success, 0 on
 * failure. failure includes inability to open the file, inability to read
 * the expected number of charcters, inability to write the expected number
 * of characters, or a NULL filename.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_read, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (num_written);
}
