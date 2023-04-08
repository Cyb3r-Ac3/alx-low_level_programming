#include "main.h"

/**
 * create_file - creates a file with the given text content
 *
 * @filename: the name of the file to create.
 * @text_content: the content to write the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writeStatus;
	mode_t filePerms = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, filePerms);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		writeStatus = write(fd, text_content, strlen(text_content));
		if (writeStatus == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
