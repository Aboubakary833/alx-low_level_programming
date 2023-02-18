#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m, o, p;

    for (n = 0; n <= 9; n++)
    {
        for (m = 0; m <= 9; m++)
        {
            for (o = 0; o <= 9; o++)
            {
                for (p = 1; p <= 9; p++)
                {
                    putchar(n + '0');
                    putchar(m + '0');
                    putchar(' ');
                    putchar(o + '0');
                    putchar(p + '0');
                    if (n != p)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');

    return (0);
}
