#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize first character if it's lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
	i++;

	while (str[i] != '\0')
	{
		if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
