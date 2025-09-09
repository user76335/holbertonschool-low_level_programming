#include "main.h"

/**
* _strcpy - copies the string pointed to by src
*           including the terminating null byte to dest
* @dest: pointer to destination buffer
* @src: pointer to source string
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';  // Copy the terminating null byte

return dest;
}
