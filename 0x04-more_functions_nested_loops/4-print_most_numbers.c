#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 but not 2 and 4
 * Return: void
*/
void print_most_numbers(void)
{
int i = 0;
for (; i < 10; i++)
{
if (i != 2 || i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
