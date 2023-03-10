#include <stdio.h>

/**
 * main - Print all arguments
 * @argc: The arguments array size
 * @argv: The arguments array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
