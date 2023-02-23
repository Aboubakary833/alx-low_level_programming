#include "main.h"

/**
 * print_square - Print square of size
 * @size: The integer
 * Return: void
*/
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (; i < size; i++)
{
for (; j < size; j++)
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
