#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print ten times numbers from 0 to 14
 * Return: void
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j < 10)
{
_putchar(j + '0');
}
else
{
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
}
_putchar('\n');
}
}