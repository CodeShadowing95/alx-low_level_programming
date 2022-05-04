#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void cpFile(const char *, const char *);

/**
 * main - check the code
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cpFile(argv[1], argv[2]);
	return (0);
}

/**
 * cpFile - copy the content of a file to another file
 *
 * @file_from: filename of the source file or file to copy
 * @file_to: filename of the destination file
 * Return: void
 */
void cpFile(const char *file_from, const char *file_to)
{
	int src, dest, rd;
	char buf[1024];

	src = open(file_from, O_RDONLY);
	if (!file_from || src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* if we got the informations from source file successfully */
	while ((rd = read(src, buf, 1024)) > 0)
	{
	/* if the nbytes that were written in destination file */
	/* != to nbytes that were read in source file, error */
		if (write(dest, buf, rd) != rd || dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", dest);
		exit(100);
	}
}
