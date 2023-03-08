#include <string.h>
#include "main.h"

/**
 * _puts_recursion - Recursively print a char-pointer
 * @s: The char-pointer
 * Return: void
*/
void _puts_recursion(char *s)
{
char substr[1000];
int l = strlen(s);
_putchar(s[0]);
if (l > 0)
{
strncpy(substr, s + 1, (l + 1));
_puts_recursion(substr);
}
else
{
_putchar('\n');
}
}
