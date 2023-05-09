#include "main.h"

/**
 * create_file - creates a file with the given name and writes
 * the specified content to it
 *
 * @filename: the name of the file to create
 *
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, new_letters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	new_letters = 0;
	while (text_content[new_letters])
		new_letters++;

	rwr = write(fd, text_content, new_letters);
	if (rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
