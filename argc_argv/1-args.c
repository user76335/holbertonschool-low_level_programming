#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* argv is unused */

	printf("%d\n", argc - 1);

	return (0);
}
