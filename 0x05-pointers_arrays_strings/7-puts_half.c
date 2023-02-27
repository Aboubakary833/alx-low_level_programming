#include <string.h>
#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: The string
 * Return: void
*/
void puts_half(char *str)
{
int l = strlen(str), n;
if (l % 2 == 0)
n = (l - 1) / 2;
else
n = l / 2;
for (; n < l; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
