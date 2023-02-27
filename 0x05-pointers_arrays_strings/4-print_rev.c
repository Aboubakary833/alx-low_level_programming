#include <string.h>
#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: String to print in reverse
 * Return: void
*/
void print_rev(char *s)
{
int i = strlen(s) - 1;
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
