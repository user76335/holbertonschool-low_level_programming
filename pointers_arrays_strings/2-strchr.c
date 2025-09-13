#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c in s,
 *         or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* Check for terminating null byte if c == '\0' */
	if (*s == c)
		return (s);

	return (NULL);
}

