#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed from
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	while (str[len] != '\0')
		len++;
