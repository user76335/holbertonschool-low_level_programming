#include "main.h"

/* Prototype for _puts */
void _puts(char *str);

/**
 * main - prints the name of the program
 * @argc: argument count (unused)
 * @argv: array of argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    (void)argc; /* unused parameter */
    _puts(argv[0]);
    return (0);
}

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}

