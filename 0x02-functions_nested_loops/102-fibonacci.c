#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int prev = 1;
    long int cur = 2;
    long int sum = 3;
    int count = 3;

    printf("%ld", prev);
    printf(", %ld", cur);

    while (count < 51)
    {
        if ((prev + cur) == sum)
        {
            printf(", %ld", sum);
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