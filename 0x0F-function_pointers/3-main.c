#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Arguments number
 * @argv: Argument
 * Return: 0 on Success or 1 on Error
*/
int main(int argc, char *argv[])
{
int firstInt, secondInt;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

firstInt = atoi(argv[1]);
secondInt = atoi(argv[3]);

if ((*argv[2] == '/' || *argv[2] == '%') && secondInt == 0)
{
printf("Error\n");
exit(99);
}

op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(firstInt, secondInt));
return (0);
}
