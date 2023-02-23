#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m;

    for (n = 0; n <= 99; n++)
    {
        for (m = 0; m <= 99; m++)
        {
            putchar(n / 10 + '0');
            putchar(m % 10 + '0');
            putchar(' ');
            putchar(m / 10 + '0');
            putchar(n % 10 + '0');
            if((n + '0') + (m + '0') != "9899")
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}
