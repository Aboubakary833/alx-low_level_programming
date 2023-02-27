#include "main.h"

/**
 * puts2 - Print every odd char of a string
 * Return: void
*/
void puts2(char *str)
{
int n = 0;

for (; str[n] != 0; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
