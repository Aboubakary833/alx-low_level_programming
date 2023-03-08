#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Print recursively a string in reverse
 * @s: The string
 * Return: void
*/
void _print_rev_recursion(char *s)
{
char substr[1000];
int l = strlen(s), pos = l - 1;
if (l > 0)
{
_putchar(s[pos]);
strncpy(substr, s, (l - 2));
_print_rev_recursion(substr);
}
else
{
_putchar('\n');
}
}
