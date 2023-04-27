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
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffeer)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{

		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
