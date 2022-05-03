#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#include <unistd.h>

#include <fcntl.h>

/**
 * read_textfile - read a text file and prints it to stdout
 *
 * @filename: ...
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buf;

	if (filename == NULL)
		return (0);

	/* open the text file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	/* read the text file */
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	buf[letters] = '\0';

	/* write to the standard output 1 or STDOUT_FILENO */
	wd = write(STDOUT_FILENO, buf, rd);
	if (wd == -1)
		return (0);

	close(fd);
	free(buf);

	return (letters);
}
