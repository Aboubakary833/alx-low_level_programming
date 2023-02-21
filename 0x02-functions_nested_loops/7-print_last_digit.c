#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - print last digit of n
 * @n: The number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
int r = n % 10;
_putchar(r);
return (r);
}
