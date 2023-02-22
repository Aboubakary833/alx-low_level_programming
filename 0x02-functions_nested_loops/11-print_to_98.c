#include "main.h"

/**
 * _isalpha - check if c is a letter
 * @c: The value to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
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
