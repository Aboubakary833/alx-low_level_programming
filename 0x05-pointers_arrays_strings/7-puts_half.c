#include <string.h>
#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: The string
 * Return: void
*/
void puts_half(char *str)
{
int l = strlen(str), n = l / 2;
if (l % 2 != 0)
n += 1;
for (; n < l; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
