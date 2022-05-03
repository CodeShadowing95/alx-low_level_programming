#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: ...
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	/* S_IRUSR | S_IWUSR is like the mode 0600 */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (*text_content)
		wr = write(fd, text_content, strlen(text_content));
	else
		wr = write(fd, "", 0);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
