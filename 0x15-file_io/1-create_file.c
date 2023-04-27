#include "main.h"
#include <fcntl.h>
#include <unistd.h>


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
	int fd, written_bytes = 0, content_length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[content_length])
			content_length++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	written_bytes = write(fd, text_content, content_length);
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
