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
if (n < 10)
{
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
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
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
