#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
if (n == 9)
{
printf("%d\n", n);
}
else
printf("%d", n);
}

return (0);
}
