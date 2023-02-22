#include <stdio.h>

int main(void)
{
    int prev = 1;
    int cur = 2;
    int sum = 3;
    int count = 4;

    printf("%d", prev);
    printf(", %d", cur);

    while (count < 51)
    {
        if ((prev + cur) == sum)
        {
            printf(", %d", sum);
            prev = cur;
            cur = sum;
            if (count == 50)
            {
                putchar('\n');
            }
            count++;
        }

        sum++;
    }

    return (0);
}