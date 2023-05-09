#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	close(file_descriptor);

	if (bytes-read == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
