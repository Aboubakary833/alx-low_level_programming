#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c_in_lc, c_in_uc;

for (c_in_lc = 'a'; c_in_lc <= 'z'; c_in_lc++)
{
putchar(c_in_lc);
}
for (c_in_uc = 'A'; c_in_uc <= 'Z'; c_in_uc++)
{
putchar(c_in_uc);
}
putchar('\n');

return (0);
}
