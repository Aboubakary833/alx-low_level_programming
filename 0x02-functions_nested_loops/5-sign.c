#include <ctype.h>
#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
