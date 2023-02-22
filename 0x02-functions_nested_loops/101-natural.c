#include <stdio.h>

/**
 * main - print sum of multiple of 3 and 5.
 *
 * Return: Always 0.
 */
int main(void)
{
int n, sum;
for (n = 1024; n > 1; n--)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum += n;
}
}
printf("%d\n", sum);

return (0);
}
