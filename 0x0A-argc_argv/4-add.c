#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Addition two int
 * @argc: The arguments array size
 * @argv: The arguments array
 * Return: 0 on Success or 1 on Error.
 */
int main(int argc, char *argv[])
{
int i, c, result = 0, l;
if (argc == 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
l = strlen(argv[i]);
for (c = 0; c < l; c++)
{
if (!isdigit(*(argv[i] + c)))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
