#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Print recursively a string in reverse
 * @s: The string
 * Return: void
*/
void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
}
