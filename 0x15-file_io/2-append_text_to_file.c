/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: the name of the file to append to
 *
 * @text_content: the content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, new_letters, rwr;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		new_letters = 0;
		while (text_content[new_letters])
			new_letters++;

		rwr = write(file_descriptor, text_content, new_letters);
		if (rwr == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
