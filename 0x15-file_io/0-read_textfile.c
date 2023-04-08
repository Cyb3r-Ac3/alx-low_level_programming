#include "main.h"
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
	if (filename == NULL)
		return (0);

	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	size_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten != bytesRead)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	fclose(fp);
	free(buffer);
	return (bytesRead);
}
