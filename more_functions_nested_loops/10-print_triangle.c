#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 *
 * If size is 0 or less, only a newline is printed
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print leading spaces */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* print # characters */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
