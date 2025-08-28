#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints digits 0 to 9 using putchar only twice, no char type
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
