#include "main.h"

/**
 * _puts_recursion - prints a string recursively followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') /* base case: end of string */
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}
