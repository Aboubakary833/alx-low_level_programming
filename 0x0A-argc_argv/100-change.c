#include <stdio.h>
#include <stdlib.h>

/**
 * getCoinsNumber - Get the coin
 * @n: The cent
 * Return: int
*/
int getCoinsNumber(int n)
{
int r = 0;
if (n > 25)
{
r += n / 25;
r += getCoinsNumber((n % 25));
}
else if ((n < 25) && (n > 10))
{
r += n / 10;
r += getCoinsNumber((n % 10));
}
else if ((n < 10) && (n > 5))
{
r += n / 5;
r += getCoinsNumber((n % 5));
}
else if ((n < 5) && (n > 2))
{
r += n / 2;
r += getCoinsNumber((n % 2));
}
else if (
n == 1 ||
n == 2 ||
n == 5 ||
n == 10 ||
n == 25
)
{
r += 1;
}

return (r);
}

/**
 * main - Mutiply two int
 * @argc: The arguments array size
 * @argv: The arguments array
 * Return: 0 on Success or 1 on Error.
 */
int main(int argc, char *argv[])
{
int result = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (argc < 2)
{
printf("%d\n", 0);
}
else
{
result = getCoinsNumber(atoi(argv[1]));
printf("%d\n", result);
}
return (0);
}
