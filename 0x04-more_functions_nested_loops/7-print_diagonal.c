#include "main.h"

/**
 * print_diagonal - Print a diagonal
 * @n: The number of time to print
 * Return: void
*/
void print_diagonal(int n)
{
int m = n;
int o;
if (n > 0)
{
for (; n > 0; n--)
{
for (o = 0; o < (m - n); o++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
