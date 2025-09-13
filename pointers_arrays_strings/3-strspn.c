#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing the bytes to match
 *
 * Return: number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
				break;
			a++;
		}
		if (*a == '\0')
			break;
		count++;
		s++;
	}

	return (count);
}
