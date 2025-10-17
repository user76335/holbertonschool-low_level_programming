#include "main.h"
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits with given code
 * @code: Exit code
 * @msg: Message to print
 * @arg: Argument to print with message
 */
void error_exit(int code, char *msg, char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * main - Copies content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buf[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp %s %s\n", "file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (r == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
