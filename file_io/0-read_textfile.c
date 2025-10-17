#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to STDOUT
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (w);
}
