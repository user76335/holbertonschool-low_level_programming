#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: max bytes from s2 to concatenate
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *new_str;

/* Treat NULL as empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate lengths */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Use entire s2 if n >= len2 */
if (n >= len2)
n = len2;

/* Allocate memory for concatenated string + null byte */
new_str = malloc(len1 + n + 1);
if (new_str == NULL)
return (NULL);

/* Copy s1 */
for (i = 0; i < len1; i++)
new_str[i] = s1[i];

/* Copy first n bytes of s2 */
for (j = 0; j < n; j++)
new_str[i + j] = s2[j];

/* Null-terminate */
new_str[i + j] = '\0';

return (new_str);
}
