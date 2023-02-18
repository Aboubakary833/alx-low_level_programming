#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m;

for (n = 1; n <= 9; n++)
{
for (m = 0; m < 9; m++)
{
if(m != n)
{
putchar(m + '0');
putchar(n + '0');

if(m != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}