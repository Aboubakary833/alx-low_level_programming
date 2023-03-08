#include "main.h"

/**
 * _puts_recursion - Recursively print a char-pointer
 * @s: The char-pointer
 * Return: void
*/
void _puts_recursion(char *s)
{
int c = 0;
for (; s[c] != '\0'; c++)
{
_putchar(s[c]);
}
_putchar('\n');
}
