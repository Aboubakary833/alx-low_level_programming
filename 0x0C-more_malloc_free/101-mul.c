#include <stdio.h>
#include <stdlib.h>

/**
 * main - Mutiply two int
 * @argc: The arguments array size
 * @argv: The arguments array
 * Return: 0 on Success or 1 on Error.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc < 3)
{
printf("Error\n");
exit(98);
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if ((num1 == 0 && argv[1] != '0') || (num2 == 0 && argv[2] != '0'))
{
printf("Error\n");
exit(98);
return (1);
}
result = atoi(num1 * num2);
printf("%d\n", result);
return (0);
}
