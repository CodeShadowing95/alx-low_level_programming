#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 *
 * @filename: filename, whose content will be appended
 * @text_content: text to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		wr = write(fd, text_content, strlen(text_content));

	if (wr < 0)
		return (-1);

	close(fd);
	return (1);
}
