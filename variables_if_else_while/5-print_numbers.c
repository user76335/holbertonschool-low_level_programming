#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 0 to 9 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

