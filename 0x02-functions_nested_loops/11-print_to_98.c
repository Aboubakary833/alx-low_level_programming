#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printf from n to 98
 * @n: The value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
}
