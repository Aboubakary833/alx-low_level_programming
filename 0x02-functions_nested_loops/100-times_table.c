#include <stdio.h>

void print_times_table(int n)
{
    int m, o;
    if (n > 0 && n <= 15)
    {
        for (m = 0; m <= n; m++)
        {
            for (o = 0; o <= n; o++)
            {
                if (o != 0)
                {
                    if ((m * o) < 10)
                    {
                        printf("   ");
                    }
                    else if ((m * o) < 100)
                    {
                        printf("  ");
                    }
                    else if ((m * o) < 1000)
                    {
                        printf(" ");
                    }
                }
                if (o != n)
                {
                    printf("%d,", (m * o));
                }
                else
                {
                    printf("%d", (m * o));
                }
            }
        putchar('\n');
        }
    }
}