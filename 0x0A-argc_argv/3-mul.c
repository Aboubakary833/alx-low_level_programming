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
int result;
if (argc < 3)
{
printf("Error\n");
return (1);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
