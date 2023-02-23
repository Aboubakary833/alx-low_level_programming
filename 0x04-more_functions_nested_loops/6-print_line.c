#include "main.h"

/**
 * print_line - Print a line of a length n
 * @n: The number of time to print _
 * Return: void
*/
void print_line(int n)
{
if (n > 0)
{
for (; n > 0; n--)
{
_putchar('_');
}
}
_putchar('\n');
}
