#include "main.h"

/**
 * print_binary - Print binary representation of a number
 * @n: The number
 * Return: void
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
