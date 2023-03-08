#include <string.h>
#include "main.h"

/**
 * _puts_recursion - Recursively print a char-pointer
 * @s: The char-pointer
 * Return: void
*/
void _puts_recursion(char *s)
{
int l = strlen(s), n = 0;
if (n < l)
{
_putchar(s[n]);
n++;
}
else
_putchar('\n');
}
