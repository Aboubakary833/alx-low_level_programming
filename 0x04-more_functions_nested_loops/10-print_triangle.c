#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: The number of time to print
 * Return: void
*/
void print_triangle(int size)
{
if (size > 0)
{
int i, j, o;
for (i = 1; i <= size; i++)
{
for (o = 0; o < (size - i); o++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
