#include <ctype.h>
#include "main.h"

/**
 * times_table - printf table
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
if ((m * n) < 10)
{
if (m != 0)
{
_putchar(' ');
}
_putchar((m * n) + '0');
}
else
{
_putchar((m * n) / 10 + '0');
_putchar((m * n) % 10 + '0');
}
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
